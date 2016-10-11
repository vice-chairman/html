<?php
/**
 * @file
 * mail_alias.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function mail_alias_field_default_fields() {
  $fields = array();

  // Exported field: 'user-user-field_local_mail'.
  $fields['user-user-field_local_mail'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_local_mail',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter the email you would like to have on this site. Please only enter the part before the @. The system will add the rest.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 19,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_local_mail',
      'label' => 'Local mail',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'user-user-field_mail_alias'.
  $fields['user-user-field_mail_alias'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_mail_alias',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The email address that mails are forwarded to. This is your personal email address, i.e. example@gmail.com.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_mail_alias',
      'label' => 'Mail alias',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '19',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter the email you would like to have on this site. Please only enter the part before the @. The system will add the rest.');
  t('Local mail');
  t('Mail alias');
  t('The email address that mails are forwarded to. This is your personal email address, i.e. example@gmail.com.');

  return $fields;
}
