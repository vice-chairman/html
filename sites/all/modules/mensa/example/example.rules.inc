<?php

/**
 * @file
 * Rules integration for Commerce Simple Stock.
 */



/**
 * Implements hook_rules_action_info().
 */
function example_rules_action_info() {
  $actions = array();

  $actions['commerce_set_product_order_ref'] = array(
    'label' => t('Link an order to the purchased IQ Test Event'),
    'group' => t('Mensa'),
    'parameter' => array(
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Line item'),
      ),
    ),
  );
  


  return $actions;
}


function commerce_set_product_order_ref($line_item, $order) {
  if (in_array($line_item->type, commerce_product_line_item_types())) {

    $sku = $line_item->line_item_label;
    $product = commerce_product_load_by_sku($sku);
	$orderID = $line_item->order_id;
	$wrapper = entity_metadata_wrapper('commerce_product', $product);
	$curr_list = $wrapper->field_order_reference->value();
	$new_ref = commerce_order_load($orderID);
	
	if (!$curr_list){
		$curr_list = array();
	}
	
	
	if (in_array($new_ref, $curr_list)){
		
	}else{
		$curr_list[] = $new_ref;
		$wrapper->field_order_reference->set($curr_list);
		$result = $wrapper->save();
	}
	
	
	
  
	
    
  }
}

