<?php
/**
 * @file
 * mensa_menues.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mensa_menues_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zip_from_to|taxonomy_term|mensa_local_areas|form';
  $field_group->group_name = 'group_zip_from_to';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'mensa_local_areas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ZIP from/to',
    'weight' => '3',
    'children' => array(
      0 => 'field_zip_from',
      1 => 'field_zip_to',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_zip_from_to|taxonomy_term|mensa_local_areas|form'] = $field_group;

  return $export;
}
