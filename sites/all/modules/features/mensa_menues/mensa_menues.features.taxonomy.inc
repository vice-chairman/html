<?php
/**
 * @file
 * mensa_menues.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mensa_menues_taxonomy_default_vocabularies() {
  return array(
    'forums' => array(
      'name' => 'Forums',
      'machine_name' => 'forums',
      'description' => 'Forum navigation vocabulary',
      'hierarchy' => '1',
      'module' => 'forum',
      'weight' => '-10',
    ),
    'iq_test_types' => array(
      'name' => 'IQ Test Types',
      'machine_name' => 'iq_test_types',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'iq_tests_locations' => array(
      'name' => 'IQ tests locations',
      'machine_name' => 'iq_tests_locations',
      'description' => 'List of locations for sorting IQ Test Events',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'member_guide' => array(
      'name' => 'Member guide',
      'machine_name' => 'member_guide',
      'description' => 'Handbook for mensa members',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'mensa_local_areas' => array(
      'name' => 'Mensa - Local areas',
      'machine_name' => 'mensa_local_areas',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'photo_galleries' => array(
      'name' => 'Photo galleries',
      'machine_name' => 'photo_galleries',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'representative_title' => array(
      'name' => 'Representative title',
      'machine_name' => 'representative_title',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'representative_type' => array(
      'name' => 'Representative type',
      'machine_name' => 'representative_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
