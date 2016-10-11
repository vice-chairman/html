<?php
/*
  Copyright (c) 2010. All rights reserved ePay - www.epay.dk.

  This program is free software. You are allowed to use the software but NOT allowed to modify the software. 
  It is also not legal to do any changes to the software and distribute it in your own name / brand. 
*/

/**
 * @file
 * Administrative forms for the ePay module.
 */


/**
 * Form callback: allows the user to capture a prior authorization.
 */
function commerce_epay_payment_capture_form($form, &$form_state, $order, $transaction) {
  $form_state['order'] = $order;
  $form_state['transaction'] = $transaction;

  // Load and store the payment method instance for this transaction.
  $payment_method = commerce_payment_method_instance_load($transaction->instance_id);
  $form_state['payment_method'] = $payment_method;

  $balance = commerce_payment_order_balance($order);

    $default_amount = $transaction->amount;


  // Convert the price amount to a user friendly decimal value.
  $default_amount = commerce_currency_amount_to_decimal($default_amount, $transaction->currency_code);

  $description = implode('<br />', array(
    t('Authorization: @amount', array('@amount' => commerce_currency_format($transaction->amount, $transaction->currency_code))),
    t('Order balance: @balance', array('@balance' => commerce_currency_format($balance['amount'], $balance['currency_code']))),
  ));

  $form['amount'] = array(
    '#type' => 'textfield',
    '#title' => t('Capture amount'),
    '#description' => $description,
    '#default_value' => $default_amount,
    '#field_suffix' => check_plain($transaction->currency_code),
    '#size' => 16,
  );

  $form = confirm_form($form, t('What amount do you want to capture?'), 'admin/commerce/orders/' . $order->order_id . '/payment', '', t('Capture'), t('Cancel'), 'confirm');

  return $form;
}

/**
 * Validate handler: ensure a valid amount is given.
 */
function commerce_epay_payment_capture_form_validate($form, &$form_state) {
  $transaction = $form_state['transaction'];
  $amount = $form_state['values']['amount'];

  // Ensure a positive numeric amount has been entered for capture.
  if (!is_numeric($amount) || $amount <= 0) {
    form_set_error('amount', t('You must specify a positive numeric amount to capture.'));
  }

  // Ensure the amount is less than or equal to the authorization amount.
  if ($amount > commerce_currency_amount_to_decimal($transaction->amount, $transaction->currency_code)) {
    form_set_error('amount', t('You cannot capture more than you authorized.'));
  }
}

/**
 * Submit handler: process a prior authorization capture via AIM.
 */
function commerce_epay_payment_capture_form_submit($form, &$form_state) {
	$transaction = $form_state['transaction'];
	$amount = $form_state['values']['amount'];
	
	$payment_method = commerce_payment_method_instance_load($transaction->instance_id);

	$client = new SoapClient('https://ssl.ditonlinebetalingssystem.dk/remote/payment.asmx?WSDL');
	$params = array
	(
		'merchantnumber' => $payment_method["settings"]["merchantnumber"],
		'amount' => $amount*100,
		'transactionid' => $transaction->remote_id,
		'pbsResponse' => '',
		'epayresponse' => '',
		'pwd' => $payment_method["settings"]["remotepassword"]
	);
	
	$capture = $client->capture($params);

	
	// If we didn't get an approval response code...
	if ($capture->captureResult == false) {
		// Display an error message but leave the transaction pending.
		drupal_set_message(t('Could not capture.'), 'error');
		$response = "pbsResponse: " . $capture->pbsResponse . " epayresponse: " . $capture->epayresponse;
		drupal_set_message(check_plain($response), 'error');
	}
	else
	{
		drupal_set_message(t('Prior authorization captured successfully.'));

		// Update the transaction amount to the actual capture amount.
		$transaction->amount = commerce_currency_decimal_to_amount($amount, $transaction->currency_code);

		// Set the remote and local status accordingly.
		$params = array
		(
			'merchantnumber' => $payment_method["settings"]["merchantnumber"],
			'transactionid' => $transaction->remote_id,
			'epayresponse' => '',
			'pwd' => $payment_method["settings"]["remotepassword"]
		);
		
		$epayTransaction = $client->gettransaction($params);
		if($epayTransaction->transactionInformation->splitpayment == false or $epayTransaction->transactionInformation->capturedamount == $epayTransaction->transactionInformation->authamount)
		{
			$transaction->status = COMMERCE_PAYMENT_STATUS_SUCCESS;
		}
		
		// Append a capture indication to the result message.
		$transaction->message .= '<br />' . t('Captured: @date', array('@date' => format_date(REQUEST_TIME, 'short')));
	}

	commerce_payment_transaction_save($transaction);

	$form_state['redirect'] = 'admin/commerce/orders/' . $form_state['order']->order_id . '/payment';
}


/**
 * Form callback: allows the user to capture a prior authorization.
 */
function commerce_epay_payment_credit_form($form, &$form_state, $order, $transaction) {
  $form_state['order'] = $order;
  $form_state['transaction'] = $transaction;

  // Load and store the payment method instance for this transaction.
  $payment_method = commerce_payment_method_instance_load($transaction->instance_id);
  $form_state['payment_method'] = $payment_method;

  $balance = commerce_payment_order_balance($order);


  $default_amount = $transaction->amount;


  // Convert the price amount to a user friendly decimal value.
  $default_amount = commerce_currency_amount_to_decimal($default_amount, $transaction->currency_code);

  $description = implode('<br />', array(
    t('Captured: @amount', array('@amount' => commerce_currency_format($transaction->amount, $transaction->currency_code))),
    t('Order balance: @balance', array('@balance' => commerce_currency_format($balance['amount'], $balance['currency_code']))),
  ));

  $form['amount'] = array(
    '#type' => 'textfield',
    '#title' => t('Credit amount'),
    '#description' => $description,
    '#default_value' => $default_amount,
    '#field_suffix' => check_plain($transaction->currency_code),
    '#size' => 16,
  );

  $form = confirm_form($form, t('What amount do you want to capture?'), 'admin/commerce/orders/' . $order->order_id . '/payment', '', t('Credit'), t('Cancel'), 'confirm');

  return $form;
}

/**
 * Validate handler: ensure a valid amount is given.
 */
function commerce_epay_payment_credit_form_validate($form, &$form_state) {
  $transaction = $form_state['transaction'];
  $amount = $form_state['values']['amount'];

  // Ensure a positive numeric amount has been entered for capture.
  if (!is_numeric($amount) || $amount <= 0) {
    form_set_error('amount', t('You must specify a positive numeric amount to credit.'));
  }

  // Ensure the amount is less than or equal to the authorization amount.
  if ($amount > commerce_currency_amount_to_decimal($transaction->amount, $transaction->currency_code)) {
    form_set_error('amount', t('You cannot credit more than you captured.'));
  }
}

/**
 * Submit handler: process a prior authorization capture via AIM.
 */
function commerce_epay_payment_credit_form_submit($form, &$form_state) {
	$transaction = $form_state['transaction'];
	$amount = $form_state['values']['amount'];
	
	$payment_method = commerce_payment_method_instance_load($transaction->instance_id);

	$client = new SoapClient('https://ssl.ditonlinebetalingssystem.dk/remote/payment.asmx?WSDL');
	$params = array
	(
		'merchantnumber' => $payment_method["settings"]["merchantnumber"],
		'amount' => $amount*100,
		'transactionid' => $transaction->remote_id,
		'pbsresponse' => '',
		'epayresponse' => '',
		'pwd' => $payment_method["settings"]["remotepassword"]
	);
	
	$capture = $client->credit($params);

	
	// If we didn't get an approval response code...
	if ($capture->creditResult == false) {
		// Display an error message but leave the transaction pending.
		drupal_set_message(t('Could not credit.'), 'error');
		$response = "pbsresponse: " . $capture->pbsresponse  . " epayresponse: " . $capture->epayresponse;
		drupal_set_message(check_plain($response), 'error');
	}
	else
	{
		drupal_set_message(t('Prior authorization credited successfully.'));

		// Update the transaction amount to the actual capture amount.
		$transaction->amount = commerce_currency_decimal_to_amount($transaction->amount/100, $transaction->currency_code) - commerce_currency_decimal_to_amount($amount, $transaction->currency_code);

		// Set the remote and local status accordingly.
		$transaction->status = COMMERCE_PAYMENT_STATUS_SUCCESS;

		// Append a capture indication to the result message.
		$transaction->message .= '<br />' . t('Credited: @date', array('@date' => format_date(REQUEST_TIME, 'short')));
	}

	commerce_payment_transaction_save($transaction);

	$form_state['redirect'] = 'admin/commerce/orders/' . $form_state['order']->order_id . '/payment';
}

/**
 * Submit handler: move as captured.
 */

function commerce_epay_payment_moveascaptured_form($form, &$form_state, $order, $transaction) {

	$payment_method = commerce_payment_method_instance_load($transaction->instance_id);

	$client = new SoapClient('https://ssl.ditonlinebetalingssystem.dk/remote/payment.asmx?WSDL');
	$params = array
	(
		'merchantnumber' => $payment_method["settings"]["merchantnumber"],
		'transactionid' => $transaction->remote_id,
		'epayresponse' => '',
		'pwd' => $payment_method["settings"]["remotepassword"]
	);
	
	$moveascaptured = $client->move_as_captured($params);

	
	// If we didn't get an approval response code...
	if ($moveascaptured->move_as_capturedResult == false) {
		// Display an error message but leave the transaction pending.
		drupal_set_message(t('Could not move as captured.'), 'error');
		$response = "epayresponse: " . $moveascaptured->epayresponse;
		drupal_set_message(check_plain($response), 'error');
	}
	else
	{
		$transaction->status = COMMERCE_PAYMENT_STATUS_SUCCESS;

		// Append a capture indication to the result message.
		$transaction->message .= '<br />' . t('Moved as captured: @date', array('@date' => format_date(REQUEST_TIME, 'short')));
	}

	commerce_payment_transaction_save($transaction);

	drupal_goto('admin/commerce/orders/' . $order->order_id . '/payment');

	$form = array();
}


