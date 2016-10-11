<?php
/**
 * @file
 * mensa_panel_pages.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function mensa_panel_pages_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'tester_add_edit_order';
  $pm_existing_page->label = 'Tester - Add/Edit Order';
  $pm_existing_page->context = 'entity|commerce_order|order_id';
  $pm_existing_page->paths = 'admin/commerce/orders/add
admin/commerce/orders/%/edit';
  $export['tester_add_edit_order'] = $pm_existing_page;

  return $export;
}
