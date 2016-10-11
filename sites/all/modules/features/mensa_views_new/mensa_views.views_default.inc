<?php
/**
 * @file
 * mensa_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mensa_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bulk_subscribe_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Bulk subscribe users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bulk subscribe users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Medlemsnummer';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="/user/[uid]/profile">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Indmeldelsesdato';
  $handler->display->display_options['fields']['created']['date_format'] = 'danish';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Subscribe user';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_deactivate_guest_member' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_deactivate_member' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mailman_manager_mass_subscribe' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mailman_manager_mass_unsubscribe' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_deactivate_membership' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_notify_member_before_deactivation_component_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_user_manager_activate_old_members' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_new_expiration_date_and_send_mail' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Indmeldelsesdato';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Medlemsnummer';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/config/mailman_manager/bulk-subscribe-users';
  $translatables['bulk_subscribe_users'] = array(
    t('Master'),
    t('Bulk subscribe users'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Medlemsnummer'),
    t('<a href="/user/[uid]/profile">[name]</a>'),
    t('Indmeldelsesdato'),
    t('Subscribe user'),
    t('Page'),
    t('more'),
  );
  $export['bulk_subscribe_users'] = $view;

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php
$year = date("Y");
$month = date("Y-m");
$week = date("Y-") . \'W\' . date("W");
$day = date("Y-m-d");
$returnPath = current_path();;
?>

<div class="clearfix text-center" id="calendar_sort">
<a class="btn btn-primary" href="/node/add/events?destination=<?php print $returnPath ?>" id="calendar_add_event"><span class="glyphicon glyphicon-plus"></span> Add event</a> <a href="/event-calendar/year/<?php print $year; ?>" class="btn btn-default">Year</a> <a href="/event-calendar/month/<?php print $month; ?>" class="btn btn-default">Month</a> <a href="/event-calendar/week/<?php print $week; ?>" class="btn btn-default">Week</a> <a href="/event-calendar/day/<?php print $day; ?>" class="btn btn-default">Day</a>
</div>

<div id="region_filter">




 
</div>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'Calendar list';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'calendar_list:attachment_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="#[nid]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: LocSec area */
  $handler->display->display_options['fields']['field_locsec_area']['id'] = 'field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['table'] = 'field_data_field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['field'] = 'field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['label'] = 'Region';
  $handler->display->display_options['fields']['field_locsec_area']['exclude'] = TRUE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: LocSec area (field_locsec_area) */
  $handler->display->display_options['filters']['field_locsec_area_tid']['id'] = 'field_locsec_area_tid';
  $handler->display->display_options['filters']['field_locsec_area_tid']['table'] = 'field_data_field_locsec_area';
  $handler->display->display_options['filters']['field_locsec_area_tid']['field'] = 'field_locsec_area_tid';
  $handler->display->display_options['filters']['field_locsec_area_tid']['value'] = array(
    85 => '85',
    36 => '36',
    34 => '34',
    28 => '28',
    32 => '32',
    29 => '29',
    37 => '37',
    33 => '33',
    35 => '35',
    155 => '155',
    148 => '148',
  );
  $handler->display->display_options['filters']['field_locsec_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['operator_id'] = 'field_locsec_area_tid_op';
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['operator'] = 'field_locsec_area_tid_op';
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['identifier'] = 'field_locsec_area_tid';
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    18 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    15 => 0,
    19 => 0,
    13 => 0,
    9 => 0,
    14 => 0,
    3 => 0,
    12 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_locsec_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locsec_area_tid']['vocabulary'] = 'mensa_local_areas';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '1';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'book' => '#ffffff',
    'events' => '#ffffff',
    'form_mentum' => '#ffffff',
    'forum' => '#ffffff',
    'iq_test_event' => '#ffffff',
    'international_journal' => '#ffffff',
    'member_guide' => '#ffffff',
    'member_news' => '#ffffff',
    'membership_join' => '#ffffff',
    'membership_rejoin' => '#ffffff',
    'membership_renewal' => '#ffffff',
    'minutes' => '#ffffff',
    'news' => '#ffffff',
    'panel' => '#ffffff',
    'photos' => '#ffffff',
    'poll' => '#ffffff',
    'static_info_pages' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_locsec_area';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_locsec_area' => '8',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    85 => '#666666',
    36 => '#f1757a',
    34 => '#f5bc3e',
    28 => '#ede641',
    32 => '#b2e039',
    29 => '#2AF1BF',
    37 => '#89c1f5',
    33 => '#df96fc',
    35 => '#c3c3c3',
    155 => '#eb41b0',
    148 => '#f9f9f9',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['path'] = 'event-calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'events' => '#ffffff',
    'form_mentum' => '#ffffff',
    'forum' => '#ffffff',
    'iq_test_event' => '#ffffff',
    'panel' => '#ffffff',
    'poll' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_locsec_area';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_locsec_area' => '8',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    36 => '#f1757a',
    34 => '#f5bc3e',
    28 => '#ede641',
    32 => '#b2e039',
    29 => '#89c1f5',
    37 => '#df96fc',
    33 => '#c3c3c3',
    35 => '#f9f9f9',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['path'] = 'event-calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'events' => '#ffffff',
    'form_mentum' => '#ffffff',
    'forum' => '#ffffff',
    'iq_test_event' => '#ffffff',
    'panel' => '#ffffff',
    'poll' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_locsec_area';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_locsec_area' => '8',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    36 => '#f1757a',
    34 => '#f5bc3e',
    28 => '#ede641',
    32 => '#b2e039',
    29 => '#89c1f5',
    37 => '#df96fc',
    33 => '#c3c3c3',
    35 => '#f9f9f9',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['path'] = 'event-calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'events' => '#ffffff',
    'form_mentum' => '#ffffff',
    'forum' => '#ffffff',
    'iq_test_event' => '#ffffff',
    'panel' => '#ffffff',
    'poll' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_locsec_area';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_locsec_area' => '8',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    30 => '#ffff00',
    31 => '#00ffff',
    28 => '#ff00ff',
    29 => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: LocSec area */
  $handler->display->display_options['fields']['field_locsec_area']['id'] = 'field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['table'] = 'field_data_field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['field'] = 'field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['label'] = 'Region';
  $handler->display->display_options['fields']['field_locsec_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['path'] = 'event-calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $translatables['calendar'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<?php
$year = date("Y");
$month = date("Y-m");
$week = date("Y-") . \'W\' . date("W");
$day = date("Y-m-d");
$returnPath = current_path();;
?>

<div class="clearfix text-center" id="calendar_sort">
<a class="btn btn-primary" href="/node/add/events?destination=<?php print $returnPath ?>" id="calendar_add_event"><span class="glyphicon glyphicon-plus"></span> Add event</a> <a href="/event-calendar/year/<?php print $year; ?>" class="btn btn-default">Year</a> <a href="/event-calendar/month/<?php print $month; ?>" class="btn btn-default">Month</a> <a href="/event-calendar/week/<?php print $week; ?>" class="btn btn-default">Week</a> <a href="/event-calendar/day/<?php print $day; ?>" class="btn btn-default">Day</a>
</div>

<div id="region_filter">




 
</div>
'),
    t('Calendar list'),
    t('<a href="#[nid]">[title]</a>'),
    t('Region'),
    t('Month'),
    t('more'),
    t('Alle'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Upcoming'),
    t('Upcoming events block'),
  );
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'calendar_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_columns'] = array(
    'bundle' => 'bundle',
    'language' => 'language',
    'entity_type' => 'entity_type',
    'entity_id' => 'entity_id',
    'value' => 'value',
    'summary' => 'summary',
    'format' => 'format',
  );
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'danish';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<div class="clearfix">
<h4 id="[nid]"><span class="stripe [field_locsec_area]" title="Key: [field_locsec_area]">&nbsp;</span> [title]</h4>
<small> <a href="user/[uid]/profile">[field_first_name] [field_last_name]</a> - [created]</small>
<p>[body]</p>
<p><b>Event date:</b>
[field_event_date]</p>
</div>';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Field: LocSec area */
  $handler->display->display_options['fields']['field_locsec_area']['id'] = 'field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['table'] = 'field_data_field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['field'] = 'field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['label'] = '';
  $handler->display->display_options['fields']['field_locsec_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_locsec_area']['alter']['text'] = '<div class="clearfix">
<h4 id="[nid]"><span class="stripe [field_locsec_area]" title="Key: [field_locsec_area]">&nbsp;</span> [title]</h4>
<small> <a href="user/[uid]/profile">[field_first_name] [field_last_name]</a> - [created]</small>
<p>[body]</p>
<p><b>Event date:</b>
[field_event_date]</p>
<span class="edit">[edit_node]</span>
</div>';
  $handler->display->display_options['fields']['field_locsec_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locsec_area']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events' => 'events',
  );
  /* Filter criterion: Field: LocSec area (field_locsec_area) */
  $handler->display->display_options['filters']['field_locsec_area_tid']['id'] = 'field_locsec_area_tid';
  $handler->display->display_options['filters']['field_locsec_area_tid']['table'] = 'field_data_field_locsec_area';
  $handler->display->display_options['filters']['field_locsec_area_tid']['field'] = 'field_locsec_area_tid';
  $handler->display->display_options['filters']['field_locsec_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['operator_id'] = 'field_locsec_area_tid_op';
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['label'] = 'LocSec area (field_locsec_area)';
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['operator'] = 'field_locsec_area_tid_op';
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['identifier'] = 'field_locsec_area_tid';
  $handler->display->display_options['filters']['field_locsec_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_locsec_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locsec_area_tid']['vocabulary'] = 'mensa_local_areas';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $translatables['calendar_list'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('author'),
    t('<div class="clearfix">
<h4 id="[nid]"><span class="stripe [field_locsec_area]" title="Key: [field_locsec_area]">&nbsp;</span> [title]</h4>
<small> <a href="user/[uid]/profile">[field_first_name] [field_last_name]</a> - [created]</small>
<p>[body]</p>
<p><b>Event date:</b>
[field_event_date]</p>
</div>'),
    t('<div class="clearfix">
<h4 id="[nid]"><span class="stripe [field_locsec_area]" title="Key: [field_locsec_area]">&nbsp;</span> [title]</h4>
<small> <a href="user/[uid]/profile">[field_first_name] [field_last_name]</a> - [created]</small>
<p>[body]</p>
<p><b>Event date:</b>
[field_event_date]</p>
<span class="edit">[edit_node]</span>
</div>'),
    t('Alle'),
    t('LocSec area (field_locsec_area)'),
    t('Attachment'),
    t('more'),
  );
  $export['calendar_list'] = $view;

  $view = new view();
  $view->name = 'clone_of_user_admin_old_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User admin - Old members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'active-blocked';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Membership expiration date */
  $handler->display->display_options['fields']['field_membership_expiration_date']['id'] = 'field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['table'] = 'field_data_field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['field'] = 'field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['label'] = '';
  $handler->display->display_options['fields']['field_membership_expiration_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_membership_expiration_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_membership_expiration_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['text'] = '<div class="clearfix">
   <div class="col-sm-1">
       [views_bulk_operations]
   </div>
   <div class="col-sm-1">
       <a href="/user/[uid]/profile">[name]</a>
   </div>
   <div class="col-sm-4">
       [field_first_name] [field_last_name]
   </div>
   <div class="col-sm-3">
      [status]
   </div>
   <div class="col-sm-3">
      [field_membership_expiration_date] <a href="/user/[uid]/edit/member?destination=/user-management/old-members" class="btn btn-default btn-sm pull-right">Edit</a>
   </div>
</div>';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_deactivate_guest_member' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_deactivate_member' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mailman_manager_mass_subscribe' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mailman_manager_mass_unsubscribe' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_deactivate_membership' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_notify_member_before_deactivation_component_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_user_manager_activate_old_members' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_new_expiration_date_and_send_mail' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Field: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    11 => '11',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Member ID';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Fornavn';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
    12 => 0,
  );
  /* Filter criterion: Field: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Efternavn';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['clone_of_user_admin_old_members'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('No results'),
    t('<div class="clearfix">
   <div class="col-sm-1">
       [views_bulk_operations]
   </div>
   <div class="col-sm-1">
       <a href="/user/[uid]/profile">[name]</a>
   </div>
   <div class="col-sm-4">
       [field_first_name] [field_last_name]
   </div>
   <div class="col-sm-3">
      [status]
   </div>
   <div class="col-sm-3">
      [field_membership_expiration_date] <a href="/user/[uid]/edit/member?destination=/user-management/old-members" class="btn btn-default btn-sm pull-right">Edit</a>
   </div>
</div>'),
    t('Member ID'),
    t('Fornavn'),
    t('Efternavn'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['clone_of_user_admin_old_members'] = $view;

  $view = new view();
  $view->name = 'iq_test_event_list';
  $view->description = 'Public list of all IQ Test Events.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IQ Test Event list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_location',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['empty'] = 'Tid og sted efter aftale.';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Product: Stock */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['commerce_stock']['label'] = '';
  $handler->display->display_options['fields']['commerce_stock']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => 'calculated_sell_price',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print t("Date:");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print t("Spaces:");
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
print t("Price:");
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['text'] = '<div class="events-container clearfix">
	<div class="col-sm-2">
		<p><b>[title]</b></p>
	</div>
	<div class="col-sm-4">
		<p><b>[php]</b> [field_date]</p>
	</div>
	<div class="col-sm-2">
		<p><b>[php_1]</b> [commerce_stock]</p>
	</div>
	<div class="col-sm-2">
		<p><b>[php_2]</b> [commerce_price]</p>
	</div>
	<div class="col-sm-2">
		<span class="pull-right">[add_to_cart_form]</span>
	</div>
</div>';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Sort criterion: Commerce Product: Location (field_location) */
  $handler->display->display_options['sorts']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['sorts']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['sorts']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['sorts']['field_location_tid']['relationship'] = 'field_product_product_id';
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iq_test_event' => 'iq_test_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Commerce Product: Stock (commerce_stock) */
  $handler->display->display_options['filters']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['filters']['commerce_stock_value']['field'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['commerce_stock_value']['operator'] = '>';
  $handler->display->display_options['filters']['commerce_stock_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['commerce_stock_value']['group'] = 1;
  /* Filter criterion: Commerce Product: Status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'iq-test-event-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'IQ Test Events';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['iq_test_event_list'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('No results.'),
    t('Products referenced by field_product'),
    t('Tid og sted efter aftale.'),
    t('<div class="events-container clearfix">
	<div class="col-sm-2">
		<p><b>[title]</b></p>
	</div>
	<div class="col-sm-4">
		<p><b>[php]</b> [field_date]</p>
	</div>
	<div class="col-sm-2">
		<p><b>[php_1]</b> [commerce_stock]</p>
	</div>
	<div class="col-sm-2">
		<p><b>[php_2]</b> [commerce_price]</p>
	</div>
	<div class="col-sm-2">
		<span class="pull-right">[add_to_cart_form]</span>
	</div>
</div>'),
    t('Page'),
    t('more'),
  );
  $export['iq_test_event_list'] = $view;

  $view = new view();
  $view->name = 'member_guide';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Member guide';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Håndbog for Mensa Danmark';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['alter']['text'] = '<ol>
   </li><a href="#[delta]">[field_headline]</a></li>
</ol>';
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['text'] = '<a href="#[delta]">[field_headline-value]</a>
';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  $handler->display->display_options['fields']['delta_1']['label'] = '';
  $handler->display->display_options['fields']['delta_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta_1']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<p id="[delta_1]">[body]</p>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
  $handler->display->display_options['fields']['body']['multi_type'] = 'ol';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-sm-3">
   [field_headline]
</div>
<div class="col-sm-9">
   [body]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'member_guide' => 'member_guide',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'member-guide';
  $translatables['member_guide'] = array(
    t('Master'),
    t('Håndbog for Mensa Danmark'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<ol>
   </li><a href="#[delta]">[field_headline]</a></li>
</ol>'),
    t('<a href="#[delta]">[field_headline-value]</a>
'),
    t('<p id="[delta_1]">[body]</p>'),
    t('<div class="col-sm-3">
   [field_headline]
</div>
<div class="col-sm-9">
   [body]
</div>'),
    t('Page'),
    t('more'),
  );
  $export['member_guide'] = $view;

  $view = new view();
  $view->name = 'member_handbook';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Member handbook';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Member handbook';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'member_guide' => 'member_guide',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'member-handbook';
  $translatables['member_handbook'] = array(
    t('Master'),
    t('Member handbook'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Page'),
    t('more'),
  );
  $export['member_handbook'] = $view;

  $view = new view();
  $view->name = 'member_news_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Member News list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'danish';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '.';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="row">
   
   
      <h3>[title]</h3>
      <p>[body] <a href="[path]" class="link"> Læs mere...</a></p>
      <p class="news-icons"><small><span class="glyphicon glyphicon-user"></span> <b>[field_first_name] [field_last_name]</b> &nbsp; <span class="glyphicon glyphicon-pencil"></span> <b>[created]</b></small></p>
      
   
</div>
<br><hr>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'member_news' => 'member_news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'member-news';
  $translatables['member_news_list'] = array(
    t('Master'),
    t('Nyheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('author'),
    t('.'),
    t('<div class="row">
   
   
      <h3>[title]</h3>
      <p>[body] <a href="[path]" class="link"> Læs mere...</a></p>
      <p class="news-icons"><small><span class="glyphicon glyphicon-user"></span> <b>[field_first_name] [field_last_name]</b> &nbsp; <span class="glyphicon glyphicon-pencil"></span> <b>[created]</b></small></p>
      
   
</div>
<br><hr>'),
    t('Block'),
    t('more'),
    t('Page'),
  );
  $export['member_news_list'] = $view;

  $view = new view();
  $view->name = 'mensa_certificates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Mensa - Certificates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - Certificates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Raw score */
  $handler->display->display_options['fields']['field_raw_score']['id'] = 'field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['field'] = 'field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['label'] = '';
  $handler->display->display_options['fields']['field_raw_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_raw_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_raw_score']['type'] = 'text_plain';
  /* Field: Field: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_birthdate']['label'] = '';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'danish',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Order: IQ Score */
  $handler->display->display_options['fields']['field_iq_score']['id'] = 'field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['field'] = 'field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['label'] = '';
  $handler->display->display_options['fields']['field_iq_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_score']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: IQ Test type */
  $handler->display->display_options['fields']['field_iq_test_type']['id'] = 'field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['field'] = 'field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_test_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: IQ Test Author */
  $handler->display->display_options['fields']['field_iq_test_author']['id'] = 'field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['table'] = 'field_data_field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['field'] = 'field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_author']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_author']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test duration */
  $handler->display->display_options['fields']['field_iq_test_duration']['id'] = 'field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['table'] = 'field_data_field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['field'] = 'field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_duration']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_duration']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test name */
  $handler->display->display_options['fields']['field_iq_test_name']['id'] = 'field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['table'] = 'field_data_field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['field'] = 'field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_name']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test number of questions */
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['id'] = 'field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['table'] = 'field_data_field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['field'] = 'field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_long_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Commerce Order: IQ Percentile */
  $handler->display->display_options['fields']['field_iq_percentile']['id'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['field'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['label'] = '';
  $handler->display->display_options['fields']['field_iq_percentile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_percentile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_percentile']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: IQ Test SD */
  $handler->display->display_options['fields']['field_iq_test_sd']['id'] = 'field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['table'] = 'field_data_field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['field'] = 'field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_sd']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_sd']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_sd']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_test_sd']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<div id="certificate_container">
<img src="/sites/default/files/mensa-logo-print.jpg" id="certificat-logo">
<img src="/sites/default/files/mensa-logo-watermark.jpg"  id="certificat-watermark">
<div id="certificate_content">
<h2>Certifikat</h2>
<h2>Mensa Danmark</h2>
<p><b>Skal hermed bekræfte, at</b></p>
<h2>[field_first_name] [field_last_name]</h2>
<p>født den [field_birthdate]<br>på en standardiseret intelligenstest har opnået en score, som modsvarer en intelligenskvotient inden for de øverste [field_iq_percentile]% af befolkningen. Det opnåede resultat 
[php]
giver - med en middelværdi på 100 og en standardafvigelse på [field_iq_test_sd] - en intelligenskvotient på: [field_iq_score]</p>
<p>Resultatet er opnået på følgende intelligenstest af [field_iq_test_author]:<br>
<b>[field_iq_test_name]</b><br>
ved en kontrolleret tidsgrænse på [field_iq_test_duration] minutter. Testen blev foretaget den [field_date].
</p>
<p>Ansvarlig for testning er psykologisk konsulent for Mensa Danmark, Berit Zankel, registreret psykolog i Danmark</p>
<br>
<div id="chairman-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/chairman-signature.png"><br>
<p >Simon Engell Kamber, formand for Mensa Danmark<br></p>
</div>
<div id="test-coordinator-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/test-coordinator-signature.png"><br>
<p>Berit Helleskov, for psykologisk konsulent, Mensa Danmark<br></p>
</div>
<br>
<small><p>Mensa er en verdensomspænende, international forening for højt intelligente mennesker, hvor over 100.000 medlemmer af mange nationaliteter fra forskellige samfundsgrupper, erhverv og uddannelsesområder gennem publikationer og regionale og internationale møder skaber sociale kontakter mellem intelligente mennesker og forestår videnskablige, psykologiske og sociale undersøgelser med henblik på identification og opfostring af menneskelig intelligens. Eneste optagelsesbetingelse er en intelligenskvotient indenfor de øverste 2% af befolkningen.</p>
<p>Mensa international blev grundlagt i 1946 og i 1982 stiftedes mensa Danmark</p></small>

</div>
</div>';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php if ( $data->field_field_raw_score[0][\'raw\'][\'value\'] > 0){
   print(\'på \' . $data->field_field_raw_score[0][\'raw\'][\'value\'] .\' rigtige svar ud af \' .  $data->field_field_iq_test_number_of_question[0][\'raw\'][\'value\']  . \' mulige \');
} ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['sorts']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['sorts']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['sorts']['field_raw_score_value']['field'] = 'field_raw_score_value';
  /* Contextual filter: Commerce Order: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'documents/certificates/%';
  $translatables['mensa_certificates'] = array(
    t('Master'),
    t('Mensa - Certificates'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('term from field_iq_test_type'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('<div id="certificate_container">
<img src="/sites/default/files/mensa-logo-print.jpg" id="certificat-logo">
<img src="/sites/default/files/mensa-logo-watermark.jpg"  id="certificat-watermark">
<div id="certificate_content">
<h2>Certifikat</h2>
<h2>Mensa Danmark</h2>
<p><b>Skal hermed bekræfte, at</b></p>
<h2>[field_first_name] [field_last_name]</h2>
<p>født den [field_birthdate]<br>på en standardiseret intelligenstest har opnået en score, som modsvarer en intelligenskvotient inden for de øverste [field_iq_percentile]% af befolkningen. Det opnåede resultat 
[php]
giver - med en middelværdi på 100 og en standardafvigelse på [field_iq_test_sd] - en intelligenskvotient på: [field_iq_score]</p>
<p>Resultatet er opnået på følgende intelligenstest af [field_iq_test_author]:<br>
<b>[field_iq_test_name]</b><br>
ved en kontrolleret tidsgrænse på [field_iq_test_duration] minutter. Testen blev foretaget den [field_date].
</p>
<p>Ansvarlig for testning er psykologisk konsulent for Mensa Danmark, Berit Zankel, registreret psykolog i Danmark</p>
<br>
<div id="chairman-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/chairman-signature.png"><br>
<p >Simon Engell Kamber, formand for Mensa Danmark<br></p>
</div>
<div id="test-coordinator-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/test-coordinator-signature.png"><br>
<p>Berit Helleskov, for psykologisk konsulent, Mensa Danmark<br></p>
</div>
<br>
<small><p>Mensa er en verdensomspænende, international forening for højt intelligente mennesker, hvor over 100.000 medlemmer af mange nationaliteter fra forskellige samfundsgrupper, erhverv og uddannelsesområder gennem publikationer og regionale og internationale møder skaber sociale kontakter mellem intelligente mennesker og forestår videnskablige, psykologiske og sociale undersøgelser med henblik på identification og opfostring af menneskelig intelligens. Eneste optagelsesbetingelse er en intelligenskvotient indenfor de øverste 2% af befolkningen.</p>
<p>Mensa international blev grundlagt i 1946 og i 1982 stiftedes mensa Danmark</p></small>

</div>
</div>'),
    t('Alle'),
    t('Page'),
    t('more'),
  );
  $export['mensa_certificates'] = $view;

  $view = new view();
  $view->name = 'mensa_certificates_bulk';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Mensa - Certificates bulk';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - Certificates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Raw score */
  $handler->display->display_options['fields']['field_raw_score']['id'] = 'field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['field'] = 'field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['label'] = '';
  $handler->display->display_options['fields']['field_raw_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_raw_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_raw_score']['type'] = 'text_plain';
  /* Field: Field: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_birthdate']['label'] = '';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'danish',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Order: IQ Score */
  $handler->display->display_options['fields']['field_iq_score']['id'] = 'field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['field'] = 'field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['label'] = '';
  $handler->display->display_options['fields']['field_iq_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_score']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: IQ Test type */
  $handler->display->display_options['fields']['field_iq_test_type']['id'] = 'field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['field'] = 'field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_test_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: IQ Test Author */
  $handler->display->display_options['fields']['field_iq_test_author']['id'] = 'field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['table'] = 'field_data_field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['field'] = 'field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_author']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_author']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test duration */
  $handler->display->display_options['fields']['field_iq_test_duration']['id'] = 'field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['table'] = 'field_data_field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['field'] = 'field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_duration']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_duration']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test name */
  $handler->display->display_options['fields']['field_iq_test_name']['id'] = 'field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['table'] = 'field_data_field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['field'] = 'field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_name']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test number of questions */
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['id'] = 'field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['table'] = 'field_data_field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['field'] = 'field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_long_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Commerce Order: IQ Percentile */
  $handler->display->display_options['fields']['field_iq_percentile']['id'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['field'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['label'] = '';
  $handler->display->display_options['fields']['field_iq_percentile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_percentile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_percentile']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: IQ Test SD */
  $handler->display->display_options['fields']['field_iq_test_sd']['id'] = 'field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['table'] = 'field_data_field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['field'] = 'field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_sd']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_sd']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_sd']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_test_sd']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<div id="certificate_container">
<img src="/sites/default/files/mensa-logo-print.jpg" id="certificat-logo">
<img src="/sites/default/files/mensa-logo-watermark.jpg"  id="certificat-watermark">
<div id="certificate_content">
<h2>Certifikat</h2>
<h2>Mensa Danmark</h2>
<p><b>Skal hermed bekræfte, at</b></p>
<h2>[field_first_name] [field_last_name]</h2>
<p>født den [field_birthdate]<br>på en standardiseret intelligenstest har opnået en score, som modsvarer en intelligenskvotient inden for de øverste [field_iq_percentile]% af befolkningen. Det opnåede resultat 
[php]
giver - med en middelværdi på 100 og en standardafvigelse på [field_iq_test_sd] - en intelligenskvotient på: [field_iq_score]</p>
<p>Resultatet er opnået på følgende intelligenstest af [field_iq_test_author]:<br>
<b>[field_iq_test_name]</b><br>
ved en kontrolleret tidsgrænse på [field_iq_test_duration] minutter. Testen blev foretaget den [field_date].
</p>
<p>Ansvarlig for testning er psykologisk konsulent for Mensa Danmark, Berit Zankel, registreret psykolog i Danmark</p>
<br>
<div id="chairman-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/chairman-signature.png"><br>
<p >Simon Engell Kamber, formand for Mensa Danmark<br></p>
</div>
<div id="test-coordinator-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/test-coordinator-signature.png"><br>
<p>Berit Helleskov, for psykologisk konsulent, Mensa Danmark<br></p>
</div>
<br>
<small><p>Mensa er en verdensomspænende, international forening for højt intelligente mennesker, hvor over 100.000 medlemmer af mange nationaliteter fra forskellige samfundsgrupper, erhverv og uddannelsesområder gennem publikationer og regionale og internationale møder skaber sociale kontakter mellem intelligente mennesker og forestår videnskablige, psykologiske og sociale undersøgelser med henblik på identification og opfostring af menneskelig intelligens. Eneste optagelsesbetingelse er en intelligenskvotient indenfor de øverste 2% af befolkningen.</p>
<p>Mensa international blev grundlagt i 1946 og i 1982 stiftedes mensa Danmark</p></small>

</div>
</div>';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php if ( $data->field_field_raw_score[0][\'raw\'][\'value\'] > 0){
   print(\'på \' . $data->field_field_raw_score[0][\'raw\'][\'value\'] .\' rigtige svar ud af \' .  $data->field_field_iq_test_number_of_question[0][\'raw\'][\'value\']  . \' mulige \');
} ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Commerce Order: Order ID */
  $handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Commerce Order: IQ Percentile (field_iq_percentile) */
  $handler->display->display_options['filters']['field_iq_percentile_value']['id'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['filters']['field_iq_percentile_value']['field'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Score (field_iq_score) */
  $handler->display->display_options['filters']['field_iq_score_value']['id'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['filters']['field_iq_score_value']['field'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['filters']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['filters']['field_raw_score_value']['field'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['filters']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['vocabulary'] = 'iq_test_types';
  /* Filter criterion: Commerce Order: Completed (field_completed) */
  $handler->display->display_options['filters']['field_completed_value']['id'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['table'] = 'field_data_field_completed';
  $handler->display->display_options['filters']['field_completed_value']['field'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'documents/certificates/bulk';
  $translatables['mensa_certificates_bulk'] = array(
    t('Master'),
    t('Mensa - Certificates'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('term from field_iq_test_type'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('<div id="certificate_container">
<img src="/sites/default/files/mensa-logo-print.jpg" id="certificat-logo">
<img src="/sites/default/files/mensa-logo-watermark.jpg"  id="certificat-watermark">
<div id="certificate_content">
<h2>Certifikat</h2>
<h2>Mensa Danmark</h2>
<p><b>Skal hermed bekræfte, at</b></p>
<h2>[field_first_name] [field_last_name]</h2>
<p>født den [field_birthdate]<br>på en standardiseret intelligenstest har opnået en score, som modsvarer en intelligenskvotient inden for de øverste [field_iq_percentile]% af befolkningen. Det opnåede resultat 
[php]
giver - med en middelværdi på 100 og en standardafvigelse på [field_iq_test_sd] - en intelligenskvotient på: [field_iq_score]</p>
<p>Resultatet er opnået på følgende intelligenstest af [field_iq_test_author]:<br>
<b>[field_iq_test_name]</b><br>
ved en kontrolleret tidsgrænse på [field_iq_test_duration] minutter. Testen blev foretaget den [field_date].
</p>
<p>Ansvarlig for testning er psykologisk konsulent for Mensa Danmark, Berit Zankel, registreret psykolog i Danmark</p>
<br>
<div id="chairman-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/chairman-signature.png"><br>
<p >Simon Engell Kamber, formand for Mensa Danmark<br></p>
</div>
<div id="test-coordinator-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/test-coordinator-signature.png"><br>
<p>Berit Helleskov, for psykologisk konsulent, Mensa Danmark<br></p>
</div>
<br>
<small><p>Mensa er en verdensomspænende, international forening for højt intelligente mennesker, hvor over 100.000 medlemmer af mange nationaliteter fra forskellige samfundsgrupper, erhverv og uddannelsesområder gennem publikationer og regionale og internationale møder skaber sociale kontakter mellem intelligente mennesker og forestår videnskablige, psykologiske og sociale undersøgelser med henblik på identification og opfostring af menneskelig intelligens. Eneste optagelsesbetingelse er en intelligenskvotient indenfor de øverste 2% af befolkningen.</p>
<p>Mensa international blev grundlagt i 1946 og i 1982 stiftedes mensa Danmark</p></small>

</div>
</div>'),
    t('Page'),
    t('more'),
  );
  $export['mensa_certificates_bulk'] = $view;

  $view = new view();
  $view->name = 'mensa_certificates_english_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Mensa - Certificates (english)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - Certificates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['relationships']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Raw score */
  $handler->display->display_options['fields']['field_raw_score']['id'] = 'field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['field'] = 'field_raw_score';
  $handler->display->display_options['fields']['field_raw_score']['label'] = '';
  $handler->display->display_options['fields']['field_raw_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_raw_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_raw_score']['type'] = 'text_plain';
  /* Field: Field: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_birthdate']['label'] = '';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'danish',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Order: IQ Score */
  $handler->display->display_options['fields']['field_iq_score']['id'] = 'field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['field'] = 'field_iq_score';
  $handler->display->display_options['fields']['field_iq_score']['label'] = '';
  $handler->display->display_options['fields']['field_iq_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_score']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: IQ Test type */
  $handler->display->display_options['fields']['field_iq_test_type']['id'] = 'field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['field'] = 'field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_test_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: IQ Test Author */
  $handler->display->display_options['fields']['field_iq_test_author']['id'] = 'field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['table'] = 'field_data_field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['field'] = 'field_iq_test_author';
  $handler->display->display_options['fields']['field_iq_test_author']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_author']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_author']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test duration */
  $handler->display->display_options['fields']['field_iq_test_duration']['id'] = 'field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['table'] = 'field_data_field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['field'] = 'field_iq_test_duration';
  $handler->display->display_options['fields']['field_iq_test_duration']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_duration']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_duration']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test name */
  $handler->display->display_options['fields']['field_iq_test_name']['id'] = 'field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['table'] = 'field_data_field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['field'] = 'field_iq_test_name';
  $handler->display->display_options['fields']['field_iq_test_name']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_name']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: IQ Test number of questions */
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['id'] = 'field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['table'] = 'field_data_field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['field'] = 'field_iq_test_number_of_question';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_number_of_question']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Order: IQ Percentile */
  $handler->display->display_options['fields']['field_iq_percentile']['id'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['field'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['label'] = '';
  $handler->display->display_options['fields']['field_iq_percentile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_percentile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_percentile']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: IQ Test SD */
  $handler->display->display_options['fields']['field_iq_test_sd']['id'] = 'field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['table'] = 'field_data_field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['field'] = 'field_iq_test_sd';
  $handler->display->display_options['fields']['field_iq_test_sd']['relationship'] = 'field_iq_test_type_tid';
  $handler->display->display_options['fields']['field_iq_test_sd']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_sd']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_sd']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_test_sd']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<div id="certificate_container">
<img src="/sites/default/files/mensa-logo-print.jpg" id="certificat-logo">
<img src="/sites/default/files/mensa-logo-watermark.jpg"  id="certificat-watermark">
<div id="certificate_content">
<h2>Certificate</h2><br>
<h2>Mensa Danmark</h2>
<p><b>hereby certifies that </b></p>
<h2>[field_first_name] [field_last_name]</h2>
<p>born [field_birthdate]<br> in a standardized intelligence test has obtained a score corresponding to an intelligence quotient within the top [field_iq_percentile]% of the population.  The result  
[php]
with a mean of 100 and a standard deviation of  [field_iq_test_sd] - corresponds to an intelligence quotient of: [field_iq_score]</p>
<p> This result is obtained on the following intelligence test by [field_iq_test_author]:<br>
<b>[field_iq_test_name]</b><br>
within a monitored time limit of [field_iq_test_duration] minutes. The test was carried out on [field_date].
</p>
<p>Responsible for testing is Berit Zankel, registered psychologist in Denmark and psychological consultant for Mensa Danmark </p>
<br>
<div id="chairman-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/chairman-signature.png"><br>
<p >Simon Engell Kamber, chairman of Mensa Danmark<br></p>
</div>
<div id="test-coordinator-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/test-coordinator-signature.png"><br>
<p>Berit Helleskov, for psychological consultant, Mensa Danmark<br></p>
</div>
<small><p> Mensa is a worldwide international society for high-IQ people where more than 100.000 members of many nationalities, from various social groups, occupations and educational areas create social contacts between intelligent people and conduct scientific, psychological and social inquiries through publications and regional and international meetings for the purpose of identifying and furthering human intelligence.
The only membership requirement is an intelligence quotient within the top 2 % of the population.</p>
<p>Mensa International was founded in 1946 and Mensa Danmark in 1982.</p></small>

</div>
</div>';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php if ( $data->field_field_raw_score[0][\'raw\'][\'value\'] > 0){
   print(\'of \' . $data->field_field_raw_score[0][\'raw\'][\'value\'] .\' correct answers of \' .  $data->field_field_iq_test_number_of_question[0][\'raw\'][\'value\']  . \' possible \');
} ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['sorts']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['sorts']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['sorts']['field_raw_score_value']['field'] = 'field_raw_score_value';
  /* Contextual filter: Commerce Order: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'documents/certificates-en/%';
  $translatables['mensa_certificates_english_'] = array(
    t('Master'),
    t('Mensa - Certificates'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('term from field_iq_test_type'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('<div id="certificate_container">
<img src="/sites/default/files/mensa-logo-print.jpg" id="certificat-logo">
<img src="/sites/default/files/mensa-logo-watermark.jpg"  id="certificat-watermark">
<div id="certificate_content">
<h2>Certificate</h2><br>
<h2>Mensa Danmark</h2>
<p><b>hereby certifies that </b></p>
<h2>[field_first_name] [field_last_name]</h2>
<p>born [field_birthdate]<br> in a standardized intelligence test has obtained a score corresponding to an intelligence quotient within the top [field_iq_percentile]% of the population.  The result  
[php]
with a mean of 100 and a standard deviation of  [field_iq_test_sd] - corresponds to an intelligence quotient of: [field_iq_score]</p>
<p> This result is obtained on the following intelligence test by [field_iq_test_author]:<br>
<b>[field_iq_test_name]</b><br>
within a monitored time limit of [field_iq_test_duration] minutes. The test was carried out on [field_date].
</p>
<p>Responsible for testing is Berit Zankel, registered psychologist in Denmark and psychological consultant for Mensa Danmark </p>
<br>
<div id="chairman-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/chairman-signature.png"><br>
<p >Simon Engell Kamber, chairman of Mensa Danmark<br></p>
</div>
<div id="test-coordinator-signature" class="col-xs-6 clearfix">
<img src="/sites/default/files/test-coordinator-signature.png"><br>
<p>Berit Helleskov, for psychological consultant, Mensa Danmark<br></p>
</div>
<small><p> Mensa is a worldwide international society for high-IQ people where more than 100.000 members of many nationalities, from various social groups, occupations and educational areas create social contacts between intelligent people and conduct scientific, psychological and social inquiries through publications and regional and international meetings for the purpose of identifying and furthering human intelligence.
The only membership requirement is an intelligence quotient within the top 2 % of the population.</p>
<p>Mensa International was founded in 1946 and Mensa Danmark in 1982.</p></small>

</div>
</div>'),
    t('Alle'),
    t('Page'),
    t('more'),
  );
  $export['mensa_certificates_english_'] = $view;

  $view = new view();
  $view->name = 'mensa_forum_mentum';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mensa - Forum Mentum';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Forum Mentum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_release_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-2 col-xs-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Magazine */
  $handler->display->display_options['fields']['field_magazine']['id'] = 'field_magazine';
  $handler->display->display_options['fields']['field_magazine']['table'] = 'field_data_field_magazine';
  $handler->display->display_options['fields']['field_magazine']['field'] = 'field_magazine';
  $handler->display->display_options['fields']['field_magazine']['label'] = '';
  $handler->display->display_options['fields']['field_magazine']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_magazine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magazine']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_magazine']['type'] = 'file_url_plain';
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cover_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'forum_mentum_cover',
    'image_link' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '  <a href="[field_magazine]"><img src="[field_cover_image]" class="img-responsive"></a><br>
    <a href="[field_magazine]" class="forum_mentum_title">[title]</a><br>
[edit_node]
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Release date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_release_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_release_date']['alter']['text'] = '<div class="cols-sm-12">
   [field_release_date]
</div>';
  $handler->display->display_options['fields']['field_release_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'forum_mentum_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Release date (field_release_date) */
  $handler->display->display_options['sorts']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['sorts']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'form_mentum' => 'form_mentum',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'forum-mentum';
  $translatables['mensa_forum_mentum'] = array(
    t('Master'),
    t('Forum Mentum'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('  <a href="[field_magazine]"><img src="[field_cover_image]" class="img-responsive"></a><br>
    <a href="[field_magazine]" class="forum_mentum_title">[title]</a><br>
[edit_node]
'),
    t('<div class="cols-sm-12">
   [field_release_date]
</div>'),
    t('Page'),
    t('more'),
  );
  $export['mensa_forum_mentum'] = $view;

  $view = new view();
  $view->name = 'mensa_international_journal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mensa - International Journal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'International Journal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_release_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Magazine */
  $handler->display->display_options['fields']['field_magazine']['id'] = 'field_magazine';
  $handler->display->display_options['fields']['field_magazine']['table'] = 'field_data_field_magazine';
  $handler->display->display_options['fields']['field_magazine']['field'] = 'field_magazine';
  $handler->display->display_options['fields']['field_magazine']['label'] = '';
  $handler->display->display_options['fields']['field_magazine']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_magazine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_magazine']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_magazine']['type'] = 'file_url_plain';
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cover_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'forum_mentum_cover',
    'image_link' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="col-sm-2 col-xs-4">
  <a href="[field_magazine]"><img src="[field_cover_image]" class="img-responsive"></a><br>
    <a href="[field_magazine]">[title]</a><br>
[edit_node]
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Release date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_release_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_release_date']['alter']['text'] = '<div class="cols-sm-12">
   [field_release_date]
</div>';
  $handler->display->display_options['fields']['field_release_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'forum_mentum_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Release date (field_release_date) */
  $handler->display->display_options['sorts']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['sorts']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'international_journal' => 'international_journal',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'international-journal';
  $translatables['mensa_international_journal'] = array(
    t('Master'),
    t('International Journal'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<div class="col-sm-2 col-xs-4">
  <a href="[field_magazine]"><img src="[field_cover_image]" class="img-responsive"></a><br>
    <a href="[field_magazine]">[title]</a><br>
[edit_node]
</div>'),
    t('<div class="cols-sm-12">
   [field_release_date]
</div>'),
    t('Page'),
    t('more'),
  );
  $export['mensa_international_journal'] = $view;

  $view = new view();
  $view->name = 'mensa_locsec_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Mensa - LocSec list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - LocSec list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: LocSec area */
  $handler->display->display_options['fields']['field_locsec_area']['id'] = 'field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['table'] = 'field_data_field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['field'] = 'field_locsec_area';
  $handler->display->display_options['fields']['field_locsec_area']['label'] = '';
  $handler->display->display_options['fields']['field_locsec_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_locsec_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locsec_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: User: LocSec description */
  $handler->display->display_options['fields']['field_locsec_description']['id'] = 'field_locsec_description';
  $handler->display->display_options['fields']['field_locsec_description']['table'] = 'field_data_field_locsec_description';
  $handler->display->display_options['fields']['field_locsec_description']['field'] = 'field_locsec_description';
  $handler->display->display_options['fields']['field_locsec_description']['label'] = '';
  $handler->display->display_options['fields']['field_locsec_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_locsec_description']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Vis ikke adresse */
  $handler->display->display_options['fields']['field_hide_address']['id'] = 'field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['table'] = 'field_data_field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['field'] = 'field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['label'] = '';
  $handler->display->display_options['fields']['field_hide_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hide_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hide_address']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_hide_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hide_address']['empty'] = '[field_adresse_], [field_adresse]';
  $handler->display->display_options['fields']['field_hide_address']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_hide_address']['type'] = 'list_key';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<div class="row">
   <div class="col-sm-12">LocSec [field_locsec_area]</div>
   <div class="pull-left user_picture col-sm-2">
      <a href="user/[uid]/profile">[picture]</a>
   </div>
   <div class="pull-left address col-sm-10">
      <a href="user/[uid]/profile">[field_first_name] [field_last_name] (#[name])<br>
         [field_hide_address]<br>
         [field_zip_code], [field_city]<br>
         <b>Phone:</b> [field_phone]</a><br>
         [mail]   
   </div>
   <div class="pull-left address col-sm-12">
      [field_locsec_description]
   </div>
</div>
<br>';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'locsec-list';
  $translatables['mensa_locsec_list'] = array(
    t('Master'),
    t('Mensa - LocSec list'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t(' '),
    t('[field_adresse_], [field_adresse]'),
    t('<div class="row">
   <div class="col-sm-12">LocSec [field_locsec_area]</div>
   <div class="pull-left user_picture col-sm-2">
      <a href="user/[uid]/profile">[picture]</a>
   </div>
   <div class="pull-left address col-sm-10">
      <a href="user/[uid]/profile">[field_first_name] [field_last_name] (#[name])<br>
         [field_hide_address]<br>
         [field_zip_code], [field_city]<br>
         <b>Phone:</b> [field_phone]</a><br>
         [mail]   
   </div>
   <div class="pull-left address col-sm-12">
      [field_locsec_description]
   </div>
</div>
<br>'),
    t('Page'),
    t('more'),
  );
  $export['mensa_locsec_list'] = $view;

  $view = new view();
  $view->name = 'mensa_member_guide';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mensa - Member guide menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_section',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'member_guide' => 'member_guide',
    'forums' => 0,
    'iq_test_types' => 0,
    'iq_tests_locations' => 0,
    'mensa_local_areas' => 0,
    'photo_galleries' => 0,
    'representative_title' => 0,
    'representative_type' => 0,
    'tags' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="#[nid]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = '';
  $handler->display->display_options['fields']['field_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Section (field_section) */
  $handler->display->display_options['sorts']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['sorts']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['sorts']['field_section_tid']['field'] = 'field_section_tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'member_guide' => 'member_guide',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['mensa_member_guide'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term'),
    t('<a href="#[nid]">[title]</a>'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['mensa_member_guide'] = $view;

  $view = new view();
  $view->name = 'mensa_member_guide_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mensa - Member guide content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_section',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'description',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Section (field_section) */
  $handler->display->display_options['relationships']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['relationships']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['relationships']['field_section_tid']['field'] = 'field_section_tid';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3><a name="[nid]" id="[nid]>[title]</a></3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_section_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['text'] = '<p><i>[description]</i></p> ';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = '';
  $handler->display->display_options['fields']['field_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section']['alter']['text'] = '<h2>[title] <small class="pull-right">[timestamp]</small></h2>
';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['alter']['text'] = '<small> [timestamp] [edit_node]</small>
<br><br>';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'danish_with_time';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Section (field_section) */
  $handler->display->display_options['sorts']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['sorts']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['sorts']['field_section_tid']['field'] = 'field_section_tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_section_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'member_guide' => 'member_guide',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['mensa_member_guide_content'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term from field_section'),
    t('<h3><a name="[nid]" id="[nid]>[title]</a></3>'),
    t('<p><i>[description]</i></p> '),
    t('<h2>[title] <small class="pull-right">[timestamp]</small></h2>
'),
    t('<small> [timestamp] [edit_node]</small>
<br><br>'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['mensa_member_guide_content'] = $view;

  $view = new view();
  $view->name = 'mensa_member_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Mensa - Member Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Bruger ID';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Navn';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adresse']['hide_empty'] = TRUE;
  /* Field: User: Vis ikke adresse */
  $handler->display->display_options['fields']['field_hide_address']['id'] = 'field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['table'] = 'field_data_field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['field'] = 'field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_hide_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hide_address']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_hide_address']['empty'] = '[field_adresse_], [field_adresse]';
  $handler->display->display_options['fields']['field_hide_address']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_hide_address']['type'] = 'list_key';
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'TLF.';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'long';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Mail';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  /* Field: User: Vis ikke email */
  $handler->display->display_options['fields']['field_hide_email']['id'] = 'field_hide_email';
  $handler->display->display_options['fields']['field_hide_email']['table'] = 'field_data_field_hide_email';
  $handler->display->display_options['fields']['field_hide_email']['field'] = 'field_hide_email';
  $handler->display->display_options['fields']['field_hide_email']['label'] = 'E-mail';
  $handler->display->display_options['fields']['field_hide_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hide_email']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_hide_email']['empty'] = '[mail]';
  $handler->display->display_options['fields']['field_hide_email']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_hide_email']['type'] = 'list_key';
  /* Field: User: Vis ikke fødselsdag */
  $handler->display->display_options['fields']['field_show_birthdate']['id'] = 'field_show_birthdate';
  $handler->display->display_options['fields']['field_show_birthdate']['table'] = 'field_data_field_show_birthdate';
  $handler->display->display_options['fields']['field_show_birthdate']['field'] = 'field_show_birthdate';
  $handler->display->display_options['fields']['field_show_birthdate']['label'] = '';
  $handler->display->display_options['fields']['field_show_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_show_birthdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_birthdate']['type'] = 'list_key';
  /* Field: Field: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['label'] = 'Fødselsdag';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Birthdate';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if ( $data->field_field_show_birthdate[0][\'raw\'][\'value\'] == 0){
  print $data->field_field_birthdate[0][\'rendered\'][\'#markup\'];

}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Personal webpage */
  $handler->display->display_options['fields']['field_personal_webpage']['id'] = 'field_personal_webpage';
  $handler->display->display_options['fields']['field_personal_webpage']['table'] = 'field_data_field_personal_webpage';
  $handler->display->display_options['fields']['field_personal_webpage']['field'] = 'field_personal_webpage';
  /* Field: User: Skype ID */
  $handler->display->display_options['fields']['field_skype_id']['id'] = 'field_skype_id';
  $handler->display->display_options['fields']['field_skype_id']['table'] = 'field_data_field_skype_id';
  $handler->display->display_options['fields']['field_skype_id']['field'] = 'field_skype_id';
  /* Field: User: Membership expiration date */
  $handler->display->display_options['fields']['field_membership_expiration_date']['id'] = 'field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['table'] = 'field_data_field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['field'] = 'field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['label'] = '';
  $handler->display->display_options['fields']['field_membership_expiration_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_membership_expiration_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_membership_expiration_date']['settings'] = array(
    'format_type' => 'danish_long_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php

$month = date(\'m\');

if ( $month == \'1\' || $month == \'2\' || $month == \'3\' ) {
   print(\'1. Apr. \' . date(\'Y\'));
}else{
   print(\'1. Apr. \' . (date(\'Y\')+1));
}

?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: User: PBS membership payment */
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['id'] = 'field_pbs_membership_payment_1';
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['table'] = 'field_data_field_pbs_membership_payment';
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['field'] = 'field_pbs_membership_payment';
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['label'] = 'Medlemskab udløber';
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['alter']['text'] = '[php_2]';
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['empty'] = '[field_membership_expiration_date]';
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pbs_membership_payment_1']['type'] = 'list_key';
  /* Field: User: PBS membership payment */
  $handler->display->display_options['fields']['field_pbs_membership_payment']['id'] = 'field_pbs_membership_payment';
  $handler->display->display_options['fields']['field_pbs_membership_payment']['table'] = 'field_data_field_pbs_membership_payment';
  $handler->display->display_options['fields']['field_pbs_membership_payment']['field'] = 'field_pbs_membership_payment';
  $handler->display->display_options['fields']['field_pbs_membership_payment']['label'] = '';
  $handler->display->display_options['fields']['field_pbs_membership_payment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pbs_membership_payment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pbs_membership_payment']['alter']['text'] = '<b>Du er tilmeldt PBS betaling</b>';
  $handler->display->display_options['fields']['field_pbs_membership_payment']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

global $user;
if ( $data->field_field_pbs_membership_payment[0][\'raw\'][\'value\'] == 1 && $user->uid == arg(1) ){
   print (\'<br><b>Du er tilmeldt PBS, og dit medlemskab vil derfor automatisk blive fornyet.</b>\');
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['mensa_member_profile'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Bruger ID'),
    t('Navn'),
    t('[field_first_name] [field_last_name]'),
    t('Adresse'),
    t(' '),
    t('[field_adresse_], [field_adresse]'),
    t('TLF.'),
    t('Last login'),
    t('Mail'),
    t('E-mail'),
    t('[mail]'),
    t('Fødselsdag'),
    t('Birthdate'),
    t('Personal webpage'),
    t('Skype ID'),
    t('Medlemskab udløber'),
    t('[php_2]'),
    t('[field_membership_expiration_date]'),
    t('<b>Du er tilmeldt PBS betaling</b>'),
    t('Alle'),
    t('Block'),
    t('more'),
    t('Content pane'),
    t('View panes'),
  );
  $export['mensa_member_profile'] = $view;

  $view = new view();
  $view->name = 'mensa_memberlist';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Mensa - Memberlist';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - Memberlist';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name_1' => 'name_1',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_adresse' => 'field_adresse',
    'field_adresse_' => 'field_adresse_',
    'field_hide_address' => 'field_hide_address',
    'field_zip_code' => 'field_zip_code',
    'field_city' => 'field_city',
    'field_birthdate' => 'field_birthdate',
    'field_show_birthdate' => 'field_show_birthdate',
    'mail' => 'mail',
    'field_hide_email' => 'field_hide_email',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adresse' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adresse_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hide_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zip_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_birthdate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_show_birthdate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hide_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/data-export/members" class="btn btn-default pull-right"><span class="glyphicon glyphicon-download"></span> Download medlemsliste som CSV fil</a><br><br>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Medlemsnr.';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '<a href="/user/[uid]/profile">[name_1]</a>';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = 'Fornavn';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['type'] = 'text_plain';
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Efternavn';
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['type'] = 'text_plain';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = 'Address 2';
  $handler->display->display_options['fields']['field_adresse']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_adresse']['alter']['text'] = ', [field_adresse]';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['alter']['text'] = '[field_adresse_] [field_adresse]';
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: User: Vis ikke adresse */
  $handler->display->display_options['fields']['field_hide_address']['id'] = 'field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['table'] = 'field_data_field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['field'] = 'field_hide_address';
  $handler->display->display_options['fields']['field_hide_address']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_hide_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hide_address']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_hide_address']['empty'] = '[field_adresse_]';
  $handler->display->display_options['fields']['field_hide_address']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_hide_address']['type'] = 'list_key';
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = 'Postnr.';
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code']['type'] = 'text_plain';
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = 'By';
  $handler->display->display_options['fields']['field_city']['alter']['text'] = '[field_city], [field_zip_code]';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'danish_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: User: Vis ikke fødselsdag */
  $handler->display->display_options['fields']['field_show_birthdate']['id'] = 'field_show_birthdate';
  $handler->display->display_options['fields']['field_show_birthdate']['table'] = 'field_data_field_show_birthdate';
  $handler->display->display_options['fields']['field_show_birthdate']['field'] = 'field_show_birthdate';
  $handler->display->display_options['fields']['field_show_birthdate']['label'] = 'Fødselsdag';
  $handler->display->display_options['fields']['field_show_birthdate']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_show_birthdate']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_show_birthdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_birthdate']['empty'] = '[field_birthdate]';
  $handler->display->display_options['fields']['field_show_birthdate']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_show_birthdate']['type'] = 'list_key';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<div class="clearfix">
<div class="col-sm-1">
#[name_1]
</div>
<div class="col-sm-4">
[field_last_name]
</div>
<div class="col-sm-4">
[field_city]
</div>
<div class="col-sm-3">
[mail]
</div>
</div>';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Vis ikke email */
  $handler->display->display_options['fields']['field_hide_email']['id'] = 'field_hide_email';
  $handler->display->display_options['fields']['field_hide_email']['table'] = 'field_data_field_hide_email';
  $handler->display->display_options['fields']['field_hide_email']['field'] = 'field_hide_email';
  $handler->display->display_options['fields']['field_hide_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_hide_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hide_email']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_hide_email']['empty'] = '[mail]';
  $handler->display->display_options['fields']['field_hide_email']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_hide_email']['type'] = 'list_key';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Indmeldt';
  $handler->display->display_options['fields']['created']['date_format'] = 'danish_short_date';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    10 => '10',
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = '#ID';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
    12 => 0,
  );
  /* Filter criterion: Field: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Fornavn';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
    12 => 0,
  );
  /* Filter criterion: Field: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Efternavn';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
    12 => 0,
  );
  /* Filter criterion: Field: ZIP code (field_zip_code) */
  $handler->display->display_options['filters']['field_zip_code_value']['id'] = 'field_zip_code_value';
  $handler->display->display_options['filters']['field_zip_code_value']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['filters']['field_zip_code_value']['field'] = 'field_zip_code_value';
  $handler->display->display_options['filters']['field_zip_code_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_zip_code_value']['group'] = 1;
  $handler->display->display_options['filters']['field_zip_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_zip_code_value']['expose']['operator_id'] = 'field_zip_code_value_op';
  $handler->display->display_options['filters']['field_zip_code_value']['expose']['label'] = 'Postnr. starter med';
  $handler->display->display_options['filters']['field_zip_code_value']['expose']['operator'] = 'field_zip_code_value_op';
  $handler->display->display_options['filters']['field_zip_code_value']['expose']['identifier'] = 'field_zip_code_value';
  $handler->display->display_options['filters']['field_zip_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    18 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    15 => 0,
    13 => 0,
    9 => 0,
    14 => 0,
    3 => 0,
    12 => 0,
    17 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'member-list';
  $translatables['mensa_memberlist'] = array(
    t('Master'),
    t('Mensa - Memberlist'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<a href="/data-export/members" class="btn btn-default pull-right"><span class="glyphicon glyphicon-download"></span> Download medlemsliste som CSV fil</a><br><br>'),
    t('Medlemsnr.'),
    t('<a href="/user/[uid]/profile">[name_1]</a>'),
    t('Fornavn'),
    t('Efternavn'),
    t('[field_first_name] [field_last_name]'),
    t('Address 2'),
    t(', [field_adresse]'),
    t('Adresse'),
    t('[field_adresse_] [field_adresse]'),
    t(' '),
    t('[field_adresse_]'),
    t('Postnr.'),
    t('By'),
    t('[field_city], [field_zip_code]'),
    t('Birthdate'),
    t('Fødselsdag'),
    t('[field_birthdate]'),
    t('<div class="clearfix">
<div class="col-sm-1">
#[name_1]
</div>
<div class="col-sm-4">
[field_last_name]
</div>
<div class="col-sm-4">
[field_city]
</div>
<div class="col-sm-3">
[mail]
</div>
</div>'),
    t('Email'),
    t('[mail]'),
    t('Indmeldt'),
    t('#ID'),
    t('Postnr. starter med'),
    t('E-mail'),
    t('Page'),
    t('more'),
  );
  $export['mensa_memberlist'] = $view;

  $view = new view();
  $view->name = 'mensa_minutes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mensa - Minutes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Minutes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['alter']['text'] = '<p>[edit_node] [delete_node] <b>[field_date]:</b> &nbsp; <a href="[field_pdf]" target="_blank">[title]</a></p>';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_url_plain';
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'minutes' => 'minutes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'mensa-minutes';
  $translatables['mensa_minutes'] = array(
    t('Master'),
    t('Minutes'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p>[edit_node] [delete_node] <b>[field_date]:</b> &nbsp; <a href="[field_pdf]" target="_blank">[title]</a></p>'),
    t('Page'),
    t('more'),
  );
  $export['mensa_minutes'] = $view;

  $view = new view();
  $view->name = 'mensa_representative_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Mensa - Representative list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_representative_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Representative title (field_representative_title) */
  $handler->display->display_options['relationships']['field_representative_title_tid']['id'] = 'field_representative_title_tid';
  $handler->display->display_options['relationships']['field_representative_title_tid']['table'] = 'field_data_field_representative_title';
  $handler->display->display_options['relationships']['field_representative_title_tid']['field'] = 'field_representative_title_tid';
  /* Field: Taxonomy term: Representative type */
  $handler->display->display_options['fields']['field_representative_type']['id'] = 'field_representative_type';
  $handler->display->display_options['fields']['field_representative_type']['table'] = 'field_data_field_representative_type';
  $handler->display->display_options['fields']['field_representative_type']['field'] = 'field_representative_type';
  $handler->display->display_options['fields']['field_representative_type']['relationship'] = 'field_representative_title_tid';
  $handler->display->display_options['fields']['field_representative_type']['label'] = '';
  $handler->display->display_options['fields']['field_representative_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_representative_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_representative_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Representative title */
  $handler->display->display_options['fields']['field_representative_title']['id'] = 'field_representative_title';
  $handler->display->display_options['fields']['field_representative_title']['table'] = 'field_data_field_representative_title';
  $handler->display->display_options['fields']['field_representative_title']['field'] = 'field_representative_title';
  $handler->display->display_options['fields']['field_representative_title']['label'] = '';
  $handler->display->display_options['fields']['field_representative_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_representative_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_representative_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="clearfix">
   <div class="col-sm-2">
      [field_representative_title]
   </div>
   <div class="user_picture col-sm-2">
      <a href="user/[uid]/profile">[picture]</a>
   </div>
   <div class="col-sm-8">
      <a href="user/[uid]/profile">[field_first_name] [field_last_name] (#[name])</a><br>
         [field_adresse] [field_adresse_]<br>
         [field_zip_code], [field_city]<br>
         <b>Phone:</b> [field_phone]<br>
         <b>Mail:</b> [mail]
   </div>
</div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: User: Representative title (field_representative_title) */
  $handler->display->display_options['sorts']['field_representative_title_tid']['id'] = 'field_representative_title_tid';
  $handler->display->display_options['sorts']['field_representative_title_tid']['table'] = 'field_data_field_representative_title';
  $handler->display->display_options['sorts']['field_representative_title_tid']['field'] = 'field_representative_title_tid';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['mensa_representative_list'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term from field_representative_title'),
    t('<div class="clearfix">
   <div class="col-sm-2">
      [field_representative_title]
   </div>
   <div class="user_picture col-sm-2">
      <a href="user/[uid]/profile">[picture]</a>
   </div>
   <div class="col-sm-8">
      <a href="user/[uid]/profile">[field_first_name] [field_last_name] (#[name])</a><br>
         [field_adresse] [field_adresse_]<br>
         [field_zip_code], [field_city]<br>
         <b>Phone:</b> [field_phone]<br>
         <b>Mail:</b> [mail]
   </div>
</div>'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['mensa_representative_list'] = $view;

  $view = new view();
  $view->name = 'mensa_result_letter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Mensa - Result letter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - Result letter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
echo date("d. M. Y");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id_1']['id'] = 'order_id_1';
  $handler->display->display_options['fields']['order_id_1']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id_1']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id_1']['label'] = '';
  $handler->display->display_options['fields']['order_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['order_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['order_id_1']['element_default_classes'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

$id = $row->order_id_1;
$value = sprintf(\'%013d\', $id);

print $value.\'6\';



?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['text'] = '<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>
   <p>Vores psykologiske konsulent har nu rettet din test. Som det fremgår af vedlagte certifikat, er din intelligenskvotient adgangsgivende til Mensa. Vi har derfor fornøjelsen at tilbyde dig medlemskab af Mensa Danmark.</p>
   <p>Tillykke!</p>
   <p>På www.mensa.dk kan du læse mere om foreningen, herunder vores vedtægter og hvad du kan få ud af at være medlem. På www.mensa.org kan du desuden finde information om Mensas internationale netværk. Som medlem af Mensa Danmark, har du automatisk adgang til arrangementer i Mensa over hele verden.</p>
   <p>Du skulle på nuværende tidspunkt have modtaget en email, hvorfra du kan melde dig ind i Mensa. Har du ikke modtaget denne mail, kan du skrive til kartotek@mensa.dk, der kan hjælpe dig videre. Til reference, er dit testnummer: #[order_id].</p>

   <p>Kontingentet for et helt års medlemskab er 450 kroner, og dækker kontingentåret 1. april til 31. marts. Hvis du melder dig ind i løbet af kontingentåret, skal du betale følgende:</p>
   <p>Indmeldelse i april, maj og juni: 450 kroner<br>
Indmeldelse i juli, august og september: 350 kroner<br>
Indmeldelse i oktober, november og december: 250 kroner<br>
Indmeldelse i januar, februar og marts: 550 kroner (dækker samtidig hele næste års kontingent)</p>
   <p>Kort tid efter du har meldt dig ind i foreningen, vil du modtage en velkomstpakke med posten, som blandt andet indeholder:</p>
   <p>Velkomstbrev<br>
Vores aktuelle arrangementskalender<br> Eksklusiv nøglering med Mensalogo</p>
   <p>Hvis du har nogen spørgsmål til testen, er du velkommen til at skrive til vores testkoordinator Berit Helleskov på test@mensa.dk. Vores testkoordinator kan desuden give dig kontaktoplysningerne på vores psykologiske konsulent, Berit Zankel, hvis du ønsker en personlig samtale om resultatet af testen.</p>
   
   <p>Vi glæder os til at byde dig velkommen i foreningen.</p>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>';
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Contextual filter: Commerce Order: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'documents/result-letter/%';
  $translatables['mensa_result_letter'] = array(
    t('Master'),
    t('Mensa - Result letter'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>
   <p>Vores psykologiske konsulent har nu rettet din test. Som det fremgår af vedlagte certifikat, er din intelligenskvotient adgangsgivende til Mensa. Vi har derfor fornøjelsen at tilbyde dig medlemskab af Mensa Danmark.</p>
   <p>Tillykke!</p>
   <p>På www.mensa.dk kan du læse mere om foreningen, herunder vores vedtægter og hvad du kan få ud af at være medlem. På www.mensa.org kan du desuden finde information om Mensas internationale netværk. Som medlem af Mensa Danmark, har du automatisk adgang til arrangementer i Mensa over hele verden.</p>
   <p>Du skulle på nuværende tidspunkt have modtaget en email, hvorfra du kan melde dig ind i Mensa. Har du ikke modtaget denne mail, kan du skrive til kartotek@mensa.dk, der kan hjælpe dig videre. Til reference, er dit testnummer: #[order_id].</p>

   <p>Kontingentet for et helt års medlemskab er 450 kroner, og dækker kontingentåret 1. april til 31. marts. Hvis du melder dig ind i løbet af kontingentåret, skal du betale følgende:</p>
   <p>Indmeldelse i april, maj og juni: 450 kroner<br>
Indmeldelse i juli, august og september: 350 kroner<br>
Indmeldelse i oktober, november og december: 250 kroner<br>
Indmeldelse i januar, februar og marts: 550 kroner (dækker samtidig hele næste års kontingent)</p>
   <p>Kort tid efter du har meldt dig ind i foreningen, vil du modtage en velkomstpakke med posten, som blandt andet indeholder:</p>
   <p>Velkomstbrev<br>
Vores aktuelle arrangementskalender<br> Eksklusiv nøglering med Mensalogo</p>
   <p>Hvis du har nogen spørgsmål til testen, er du velkommen til at skrive til vores testkoordinator Berit Helleskov på test@mensa.dk. Vores testkoordinator kan desuden give dig kontaktoplysningerne på vores psykologiske konsulent, Berit Zankel, hvis du ønsker en personlig samtale om resultatet af testen.</p>
   
   <p>Vi glæder os til at byde dig velkommen i foreningen.</p>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>'),
    t('Alle'),
    t('Page'),
    t('more'),
  );
  $export['mensa_result_letter'] = $view;

  $view = new view();
  $view->name = 'mensa_result_letter_bulk';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Mensa - Result letter Bulk';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - Result letter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
echo date("d. M. Y");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['text'] = '<br><br><br><div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>
   <p>Vores psykologiske konsulent har nu rettet din test. Som det fremgår af vedlagte certifikat, er din intelligenskvotient adgangsgivende til Mensa. Vi har derfor fornøjelsen at tilbyde dig medlemskab af Mensa Danmark.</p>
   <p>Tillykke!</p>
   <p>På www.mensa.dk kan du læse mere om foreningen, herunder vores vedtægter og hvad du kan få ud af at være medlem. På www.mensa.org kan du desuden finde information om Mensas internationale netværk. Som medlem af Mensa Danmark, har du automatisk adgang til arrangementer i Mensa over hele verden.</p>
   <p>Indmeldelse sker ved at indbetale kontingentet til vores konto 9570 0000554006 med angivelse af dit testnummer (#[order_id]). Hvis du betaler med netbank, kan du bruge følgende kodelinje som girokortbetaling:</p>
   <p> &nbsp; &nbsp; &nbsp; &nbsp; +<span class="underline">04</span><<span class="underline">00000000149005</span>+<span class="underline">0554006</span><<br>
   <small> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Korttype &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Betalingsidentitet &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Kreditornr</small>
</p>

   <p>Kontingentet for et helt års medlemskab er 450 kroner, og dækker kontingentåret 1. maj til 30. april. Hvis du melder dig ind i løbet af kontingentåret, skal du betale følgende:</p>
   <p>Indmeldelse i maj, juni og juli: 450 kroner<br>
Indmeldelse i august, september og oktober: 350 kroner<br>
Indmeldelse i november, december og januar: 250 kroner<br>
Indmeldelse i februar, marts og april: 550 kroner (dækker samtidig hele næste års kontingent)</p>
   <p>Cirka to uger efter vi har registreret din betaling, vil du modtage en e-mail med dit medlemsnummer og kodeord til vores interne webside mensa.dk/user. Du vil også modtage en velkomstpakke med posten, som blandt andet indeholder:</p>
   <p>Velkomstbrev<br>
Vores aktuelle arrangementskalender<br> Eksklusiv nøglering med Mensalogo</p>
   <p>Hvis du har nogen spørgsmål til testen, er du velkommen til at skrive til vores testkoordinator Berit Helleskov på test@mensa.dk. Vores testkoordinator kan desuden give dig kontaktoplysningerne på vores psykologiske konsulent, Berit Zankel, hvis du ønsker en personlig samtale om resultatet af testen.</p>
   
   <p>Vi glæder os til at byde dig velkommen i foreningen.</p>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>';
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: IQ Percentile */
  $handler->display->display_options['fields']['field_iq_percentile']['id'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['field'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['label'] = '';
  $handler->display->display_options['fields']['field_iq_percentile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_percentile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_percentile']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_iq_percentile']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php

$id = $row->order_id;
$value = sprintf(\'%013d\', $id);

print $value.\'6\';



?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$order_id = $row->order_id;
$value = sprintf(\'%013d\', $order_id);

if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] <= 2  ){
   print(\'<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Augustenborggade 15, 5. th.<br>8000 Aarhus C, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">\' . $data->field_field_first_name[0][\'raw\'][\'value\'] . \' \' . $data->field_field_last_name[0][\'raw\'][\'value\'] . \'<br>\' . $data->field_field_adresse_[0][\'raw\'][\'value\'] . \'<br>\' . $data->field_field_zip_code[0][\'raw\'][\'value\'] . \' \' . $data->field_field_city[0][\'raw\'][\'value\'] . \'</span>
   <span class="pull-right">Århus, \' . date("d. m. Y") . \'</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære \' . $data->field_field_first_name[0][\'raw\'][\'value\'] . \' \' . $data->field_field_last_name[0][\'raw\'][\'value\'] . \'</p>
   <p>Vores psykologiske konsulent har nu rettet din test. Som det fremgår af vedlagte certifikat, er din intelligenskvotient adgangsgivende til Mensa. Vi har derfor fornøjelsen at tilbyde dig medlemskab af Mensa Danmark.</p>
   <p>Tillykke!</p>
   <p>På www.mensa.dk kan du læse mere om foreningen, herunder vores vedtægter og hvad du kan få ud af at være medlem. På www.mensa.org kan du desuden finde information om Mensas internationale netværk. Som medlem af Mensa Danmark, har du automatisk adgang til arrangementer i Mensa over hele verden.</p>
   <p>Du skulle på nuværende tidspunkt have modtaget en email, hvorfra du kan melde dig ind i Mensa. Har du ikke modtaget denne mail, kan du skrive til kartotek@mensa.dk, der kan hjælpe dig videre. Til reference, er dit testnummer: #\' . $row->order_id . \'.</p>

   <p>Kontingentet for et helt års medlemskab er 450 kroner, og dækker kontingentåret 1. april til 31. marts. Hvis du melder dig ind i løbet af kontingentåret, skal du betale følgende:</p>
   <p>Indmeldelse i april, maj og juni: 450 kroner<br>
Indmeldelse i juli, august og september: 350 kroner<br>
Indmeldelse i oktober, november og december: 250 kroner<br>
Indmeldelse i januar, februar og marts: 550 kroner (dækker samtidig hele næste års kontingent)</p>
   <p>Kort tid efter du har meldt dig ind i foreningen, vil du modtage en velkomstpakke med posten, som blandt andet indeholder:</p>
   <p>Velkomstbrev<br>
Vores aktuelle arrangementskalender<br> Eksklusiv nøglering med Mensalogo</p>
   <p>Hvis du har nogen spørgsmål til testen, er du velkommen til at skrive til vores testkoordinator Berit Helleskov på test@mensa.dk. Vores testkoordinator kan desuden give dig kontaktoplysningerne på vores psykologiske konsulent, Berit Zankel, hvis du ønsker en personlig samtale om resultatet af testen.</p>
   
   <p>Vi glæder os til at byde dig velkommen i foreningen.</p>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>\');
}elseif ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] >= 3 && $data->field_field_iq_percentile[0][\'raw\'][\'value\'] <= 49){
   
   print(\'<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Augustenborggade 15, 5. th.<br>8000 Aarhus C, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">\' . $data->field_field_first_name[0][\'raw\'][\'value\'] . \' \' . $data->field_field_last_name[0][\'raw\'][\'value\'] . \'<br>\' . $data->field_field_adresse_[0][\'raw\'][\'value\'] . \'<br>\' . $data->field_field_zip_code[0][\'raw\'][\'value\'] . \' \' . $data->field_field_city[0][\'raw\'][\'value\'] . \'</span>
   <span class="pull-right">Århus, \' . date("d. m. Y") . \'</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære \' . $data->field_field_first_name[0][\'raw\'][\'value\'] . \' \' . $data->field_field_last_name[0][\'raw\'][\'value\'] . \'</p>

<p>Vor psykologiske konsulent har nu rettet din adgangsgivende test, og som det fremgår af vedlagte diplom, er din intelligens over gennemsnittet, selv om den ikke er adgangsgivende til Mensa.<br> Tillykke med resultatet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen efter et halvt år. Dog kan testen kun tages ialt 3 gange. Gebyr for gentest er p.t. 150,00 kr., som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>\');
}elseif ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] == 50){
	
	print(\'<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Augustenborggade 15, 5. th.<br>8000 Aarhus C, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">\' . $data->field_field_first_name[0][\'raw\'][\'value\'] . \' \' . $data->field_field_last_name[0][\'raw\'][\'value\'] . \'<br>\' . $data->field_field_adresse_[0][\'raw\'][\'value\'] . \'<br>\' . $data->field_field_zip_code[0][\'raw\'][\'value\'] . \' \' . $data->field_field_city[0][\'raw\'][\'value\'] . \'</span>
   <span class="pull-right">Århus, \' . date("d. m. Y") . \'</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære \' . $data->field_field_first_name[0][\'raw\'][\'value\'] . \' \' . $data->field_field_last_name[0][\'raw\'][\'value\'] . \'</p>

<p>Vor psykologiske konsulent har nu rettet din adgangsgivende test, og som det fremgår af vedlagte diplom, er din intelligens på gennemsnittet, så den er ikke adgangsgivende til Mensa.<br> Tillykke alligevel med det pæne resultatet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen efter et halvt år. Dog kan testen kun tages ialt 3 gange. Gebyr for gentest er p.t. 150,00 kr., som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>\');
}elseif ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] >= 51){
	print(\'<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Augustenborggade 15, 5. th.<br>8000 Aarhus C, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">\' . $data->field_field_first_name[0][\'raw\'][\'value\'] .  \' \' . $data->field_field_last_name[0][\'raw\'][\'value\'] . \'<br>\' . $data->field_field_adresse_[0][\'raw\'][\'value\'] . \'<br>\' . $data->field_field_zip_code[0][\'raw\'][\'value\'] . \' \' . $data->field_field_city[0][\'raw\'][\'value\'] . \'</span>
   <span class="pull-right">Århus, \' . date("d. m. Y") . \'</span>
</div>

<div id="result_letter_body" class="clearfix">
    <p>Kære \' . $data->field_field_first_name[0][\'raw\'][\'value\'] . \' \' .$data->field_field_last_name[0][\'raw\'][\'value\'] . \'</p>

<p>Vor psykologiske konsulent har nu rettet din kontrollerede test. Som det fremgår af medsendte certifikat ligger testens resultat lige under middel. Dette er ikke nødvendigvis ensbetydende med en dårlig IQ, idet flere faktorer kan have indvirket på din præstation. Faktorerne kan f.eks. være træthed, sygdom eller uro i lokalet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen om et halvt år. Gebyr for gentest er p.t. 150,00 kr. som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>\');
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Sort criterion: Commerce Order: Order ID */
  $handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Commerce Order: Completed (field_completed) */
  $handler->display->display_options['filters']['field_completed_value']['id'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['table'] = 'field_data_field_completed';
  $handler->display->display_options['filters']['field_completed_value']['field'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['operator'] = 'empty';
  /* Filter criterion: Commerce Order: IQ Percentile (field_iq_percentile) */
  $handler->display->display_options['filters']['field_iq_percentile_value']['id'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['filters']['field_iq_percentile_value']['field'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Score (field_iq_score) */
  $handler->display->display_options['filters']['field_iq_score_value']['id'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['filters']['field_iq_score_value']['field'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['filters']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['vocabulary'] = 'iq_test_types';
  /* Filter criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['filters']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['filters']['field_raw_score_value']['field'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'documents/result-letter/bulk';
  $translatables['mensa_result_letter_bulk'] = array(
    t('Master'),
    t('Mensa - Result letter'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('<br><br><br><div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>
   <p>Vores psykologiske konsulent har nu rettet din test. Som det fremgår af vedlagte certifikat, er din intelligenskvotient adgangsgivende til Mensa. Vi har derfor fornøjelsen at tilbyde dig medlemskab af Mensa Danmark.</p>
   <p>Tillykke!</p>
   <p>På www.mensa.dk kan du læse mere om foreningen, herunder vores vedtægter og hvad du kan få ud af at være medlem. På www.mensa.org kan du desuden finde information om Mensas internationale netværk. Som medlem af Mensa Danmark, har du automatisk adgang til arrangementer i Mensa over hele verden.</p>
   <p>Indmeldelse sker ved at indbetale kontingentet til vores konto 9570 0000554006 med angivelse af dit testnummer (#[order_id]). Hvis du betaler med netbank, kan du bruge følgende kodelinje som girokortbetaling:</p>
   <p> &nbsp; &nbsp; &nbsp; &nbsp; +<span class="underline">04</span><<span class="underline">00000000149005</span>+<span class="underline">0554006</span><<br>
   <small> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Korttype &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Betalingsidentitet &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Kreditornr</small>
</p>

   <p>Kontingentet for et helt års medlemskab er 450 kroner, og dækker kontingentåret 1. maj til 30. april. Hvis du melder dig ind i løbet af kontingentåret, skal du betale følgende:</p>
   <p>Indmeldelse i maj, juni og juli: 450 kroner<br>
Indmeldelse i august, september og oktober: 350 kroner<br>
Indmeldelse i november, december og januar: 250 kroner<br>
Indmeldelse i februar, marts og april: 550 kroner (dækker samtidig hele næste års kontingent)</p>
   <p>Cirka to uger efter vi har registreret din betaling, vil du modtage en e-mail med dit medlemsnummer og kodeord til vores interne webside mensa.dk/user. Du vil også modtage en velkomstpakke med posten, som blandt andet indeholder:</p>
   <p>Velkomstbrev<br>
Vores aktuelle arrangementskalender<br> Eksklusiv nøglering med Mensalogo</p>
   <p>Hvis du har nogen spørgsmål til testen, er du velkommen til at skrive til vores testkoordinator Berit Helleskov på test@mensa.dk. Vores testkoordinator kan desuden give dig kontaktoplysningerne på vores psykologiske konsulent, Berit Zankel, hvis du ønsker en personlig samtale om resultatet af testen.</p>
   
   <p>Vi glæder os til at byde dig velkommen i foreningen.</p>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>'),
    t('Page'),
    t('more'),
  );
  $export['mensa_result_letter_bulk'] = $view;

  $view = new view();
  $view->name = 'mensa_result_letter_not_passed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Mensa - Result letter, not passed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - Result letter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
echo date("d. M. Y");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['text'] = '<br><br><br><div class="clearfix">
<div id="result_letter_logo">

</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>

<p>Vor psykologiske konsulent har nu rettet din adgangsgivende test, og som det fremgår af vedlagte diplom, er din intelligens over gennemsnittet, selv om den ikke er adgangsgivende til Mensa.<br> Tillykke med resultatet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen efter et halvt år. Dog kan testen kun tages ialt 3 gange. Gebyr for gentest er p.t. 150,00 kr., som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <p>### underskrift ###</p>
   <p>John Doktor<br> Mensa Danmark<br> Formand</p>
</div>';
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Contextual filter: Commerce Order: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
echo date("d. M. Y");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['text'] = '<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>

<p>Vor psykologiske konsulent har nu rettet din adgangsgivende test, og som det fremgår af vedlagte diplom, er din intelligens over gennemsnittet, selv om den ikke er adgangsgivende til Mensa.<br> Tillykke med resultatet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen efter et halvt år. Dog kan testen kun tages ialt 3 gange. Gebyr for gentest er p.t. 150,00 kr., som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>';
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'documents/result-letter-not-passed/%';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
echo date("d. M. Y");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['text'] = '<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>

<p>Vor psykologiske konsulent har nu rettet din adgangsgivende test, og som det fremgår af vedlagte diplom, er din intelligens på gennemsnittet, så den er ikke adgangsgivende til Mensa.<br> Tillykke alligevel med det pæne resultatet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen efter et halvt år. Dog kan testen kun tages ialt 3 gange. Gebyr for gentest er p.t. 150,00 kr., som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>';
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'documents/result-letter-not-passed-1/%';

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
echo date("d. M. Y");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['text'] = '<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>

<p>Vor psykologiske konsulent har nu rettet din kontrollerede test. Som det fremgår af medsendte certifikat ligger testens resultat lige under middel. Dette er ikke nødvendigvis ensbetydende med en dårlig IQ, idet flere faktorer kan have indvirket på din præstation. Faktorerne kan f.eks. være træthed, sygdom eller uro i lokalet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen om et halvt år. Gebyr for gentest er p.t. 150,00 kr. som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>';
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'documents/result-letter-not-passed-2/%';
  $translatables['mensa_result_letter_not_passed'] = array(
    t('Master'),
    t('Mensa - Result letter'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('<br><br><br><div class="clearfix">
<div id="result_letter_logo">

</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>

<p>Vor psykologiske konsulent har nu rettet din adgangsgivende test, og som det fremgår af vedlagte diplom, er din intelligens over gennemsnittet, selv om den ikke er adgangsgivende til Mensa.<br> Tillykke med resultatet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen efter et halvt år. Dog kan testen kun tages ialt 3 gange. Gebyr for gentest er p.t. 150,00 kr., som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <p>### underskrift ###</p>
   <p>John Doktor<br> Mensa Danmark<br> Formand</p>
</div>'),
    t('Alle'),
    t('Page'),
    t('more'),
    t('<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>

<p>Vor psykologiske konsulent har nu rettet din adgangsgivende test, og som det fremgår af vedlagte diplom, er din intelligens over gennemsnittet, selv om den ikke er adgangsgivende til Mensa.<br> Tillykke med resultatet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen efter et halvt år. Dog kan testen kun tages ialt 3 gange. Gebyr for gentest er p.t. 150,00 kr., som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>'),
    t('<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>

<p>Vor psykologiske konsulent har nu rettet din adgangsgivende test, og som det fremgår af vedlagte diplom, er din intelligens på gennemsnittet, så den er ikke adgangsgivende til Mensa.<br> Tillykke alligevel med det pæne resultatet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen efter et halvt år. Dog kan testen kun tages ialt 3 gange. Gebyr for gentest er p.t. 150,00 kr., som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>'),
    t('Page 2'),
    t('<div class="clearfix">
<div id="result_letter_logo">
   <img src="/sites/default/files/mensa-logo-print.jpg">
</div>
<div id="result_letter_address">
   <p>Mensa Danmark<br>Skalbjergvej 11<br>2770 Kastrup, Denmark</p>
</div>
</div>

<div id="result_letter_header" class="clearfix">
   <span class="pull-left">[field_first_name] [field_last_name]<br>[field_adresse_]<br>[field_zip_code] [field_city]</span>
   <span class="pull-right">Århus, [php]</span>
</div>

<div id="result_letter_body" class="clearfix">
   <p>Kære [field_first_name] [field_last_name]</p>

<p>Vor psykologiske konsulent har nu rettet din kontrollerede test. Som det fremgår af medsendte certifikat ligger testens resultat lige under middel. Dette er ikke nødvendigvis ensbetydende med en dårlig IQ, idet flere faktorer kan have indvirket på din præstation. Faktorerne kan f.eks. være træthed, sygdom eller uro i lokalet.</p>
<p>Hvis du føler, at du har haft en dårlig dag og derfor har lyst til at prøve en gang til, kan du gå op til test igen om et halvt år. Gebyr for gentest er p.t. 150,00 kr. som kan indbetales på giro 716-1522</p>
<p>Eventuelle spørgsmål om testen bedes i første omgang rettet til testkoordinator Berit Helleskov på test@mensa.dk. Ønskes en personlig snak med psykologen om testens resultat kan kontaktoplysninger til Mensa Danmarks psykologiske konsulent i Danmark, Berit Zankel, erhverves ved at kontakte testkoordinator.</p>

   <br>
   <p>Med venlig hilsen</p>
   <img src="/sites/default/files/chairman-signature.png" id="chairman-signature">
   <p>Simon Engell Kamber<br> Mensa Danmark<br> Formand</p>
</div>'),
  );
  $export['mensa_result_letter_not_passed'] = $view;

  $view = new view();
  $view->name = 'mensa_tester_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Mensa - Tester list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mensa - LocSec list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_adresse_']['id'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['table'] = 'field_data_field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['field'] = 'field_adresse_';
  $handler->display->display_options['fields']['field_adresse_']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_']['element_label_colon'] = FALSE;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Field: ZIP code */
  $handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
  $handler->display->display_options['fields']['field_zip_code']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<div class="row">
   <div class="col-sm-12">Tester [field_city]</div>
   <div class="pull-left user_picture col-sm-2">
      <a href="user/[uid]/profile">[picture]</a>
   </div>
   <div class="pull-left address col-sm-10">
      <a href="user/[uid]/profile">[field_first_name] [field_last_name] (#[name])<br>
         [field_adresse_] [field_adresse] <br>
         [field_zip_code], [field_city]<br>
         <b>Phone:</b> [field_phone]</a><br>
         [mail]   
   </div>
</div>
<br>';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'tester-list';
  $translatables['mensa_tester_list'] = array(
    t('Master'),
    t('Mensa - LocSec list'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<div class="row">
   <div class="col-sm-12">Tester [field_city]</div>
   <div class="pull-left user_picture col-sm-2">
      <a href="user/[uid]/profile">[picture]</a>
   </div>
   <div class="pull-left address col-sm-10">
      <a href="user/[uid]/profile">[field_first_name] [field_last_name] (#[name])<br>
         [field_adresse_] [field_adresse] <br>
         [field_zip_code], [field_city]<br>
         <b>Phone:</b> [field_phone]</a><br>
         [mail]   
   </div>
</div>
<br>'),
    t('Page'),
    t('more'),
  );
  $export['mensa_tester_list'] = $view;

  $view = new view();
  $view->name = 'news_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: News image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'danish';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '.';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="row">
   <div class="col-sm-3">
      <img src="[field_news_image]" class="img-responsive">
   </div>
   <div class="col-sm-9">
      <h3>[title]</h3>
      <p>[body]</p>
      <p class="news-icons"><span class="glyphicon glyphicon-pencil"></span> <b>[created]</b></p>
   </div>
</div>
<br><hr>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['news_list'] = array(
    t('Master'),
    t('Nyheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('.'),
    t('<div class="row">
   <div class="col-sm-3">
      <img src="[field_news_image]" class="img-responsive">
   </div>
   <div class="col-sm-9">
      <h3>[title]</h3>
      <p>[body]</p>
      <p class="news-icons"><span class="glyphicon glyphicon-pencil"></span> <b>[created]</b></p>
   </div>
</div>
<br><hr>'),
    t('Block'),
    t('more'),
  );
  $export['news_list'] = $view;

  $view = new view();
  $view->name = 'personal_iq_test_event_list';
  $view->description = 'Public list of all IQ Test Events.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personal IQ Test Event list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kommende IK Test Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Relationship: Commerce Product: Referenced order */
  $handler->display->display_options['relationships']['field_order_reference_order_id']['id'] = 'field_order_reference_order_id';
  $handler->display->display_options['relationships']['field_order_reference_order_id']['table'] = 'field_data_field_order_reference';
  $handler->display->display_options['relationships']['field_order_reference_order_id']['field'] = 'field_order_reference_order_id';
  $handler->display->display_options['relationships']['field_order_reference_order_id']['relationship'] = 'field_product_product_id';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['relationship'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['relationship'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['relationship'] = 'field_product_product_id';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id_1']['id'] = 'field_product_product_id_1';
  $handler->display->display_options['relationships']['field_product_product_id_1']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id_1']['field'] = 'field_product_product_id';
  /* Relationship: Commerce Line Item: Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['order_id']['label'] = 'Rækkefølge';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id_1']['id'] = 'commerce_line_items_line_item_id_1';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id_1']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id_1']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id_1']['relationship'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product_1']['id'] = 'field_product_1';
  $handler->display->display_options['relationships']['field_product_1']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product_1']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product_1']['relationship'] = 'field_product_product_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Product: Stock */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['commerce_stock']['label'] = 'Available spaces';
  $handler->display->display_options['fields']['commerce_stock']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = 'Pris';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [title] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Spaces: [commerce_stock] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'field_order_reference_order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_order_reference_order_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="events_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
        <div class="col-sm-7">
		<p><b>Name:</b> [field_first_name] [field_last_name] &nbsp; &nbsp; <b>Phone:</b> [field_phone]</p>
	</div>
       <div class="col-sm-1">
		<a href="/admin/commerce/orders/[order_id]/edit" class="btn btn-default pull-right">Edit</a>
	</div>
</section';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_product_product_id';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iq_test_event' => 'iq_test_event',
  );
  /* Filter criterion: Commerce Product: Status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'test/%';
  $handler->display->display_options['menu']['title'] = 'My IQ Test Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-administration';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Author uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['personal_iq_test_event_list'] = array(
    t('Master'),
    t('Kommende IK Test Events'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('No results.'),
    t('Products referenced by field_product'),
    t('Order'),
    t('Line items referenced by commerce_line_items'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Node referencing products from field_product'),
    t('Rækkefølge'),
    t('Dato'),
    t('Available spaces'),
    t('Pris'),
    t('<span class="glyphicon glyphicon-calendar"></span> [title] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Spaces: [commerce_stock] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>'),
    t('<section class="events_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
        <div class="col-sm-7">
		<p><b>Name:</b> [field_first_name] [field_last_name] &nbsp; &nbsp; <b>Phone:</b> [field_phone]</p>
	</div>
       <div class="col-sm-1">
		<a href="/admin/commerce/orders/[order_id]/edit" class="btn btn-default pull-right">Edit</a>
	</div>
</section'),
    t('Alle'),
    t('Page'),
    t('more'),
    t('Content pane'),
    t('View panes'),
    t('Content pane 2'),
  );
  $export['personal_iq_test_event_list'] = $view;

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php

$destination = \'photo-gallery/\' . arg(1);
?>

<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-chevron-left"></span> Photo Gallery</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>[field_gallery] </h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos/[field_gallery]?destination=<?php print $destination; ?>" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add photos to this gallery</a>
   </div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photos']['id'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['table'] = 'field_data_field_photos';
  $handler->display->display_options['fields']['field_photos']['field'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photos']['alter']['text'] = '<div class="col-sm-2 col-xs-3">
   [field_photos]
</div>';
  $handler->display->display_options['fields']['field_photos']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photos']['settings'] = array(
    'image_style' => 'photo_gallery',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photos']['separator'] = '';
  /* Field: Content: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery']['element_type'] = '0';
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_gallery']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photos' => 'photos',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'test-gallery';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['photo_gallery'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<?php

$destination = \'photo-gallery/\' . arg(1);
?>

<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-chevron-left"></span> Photo Gallery</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>[field_gallery] </h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos/[field_gallery]?destination=<?php print $destination; ?>" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add photos to this gallery</a>
   </div>
</div>'),
    t('<div class="col-sm-2 col-xs-3">
   [field_photos]
</div>'),
    t('Alle'),
    t('Page'),
    t('more'),
    t('Content pane'),
    t('View panes'),
  );
  $export['photo_gallery'] = $view;

  $view = new view();
  $view->name = 'photo_gallery_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Photo Gallery overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/user-photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-picture"></span> Your Photos</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>Photo gallery</h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos?destination=photo-gallery" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add new photo gallery</a>
   </div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/user-photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-picture"></span> Your Photos</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>Photo gallery</h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos?destination=photo-gallery" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add new photo gallery</a>
   </div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Taxonomy term: Representative node */
  $handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.nid';
  $handler->display->display_options['relationships']['tid_representative']['subquery_view'] = '';
  $handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photos']['id'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['table'] = 'field_data_field_photos';
  $handler->display->display_options['fields']['field_photos']['field'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['field_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photos']['settings'] = array(
    'image_style' => 'photo_gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photos']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photos']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '<div class="col-sm-2 col-xs-3 clearfix">
   <a href="/photo-gallery/[tid]" title="[name]">
      [field_photos]
      <p>[name] </p>
   </a>
</div>';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'tid_representative';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'photo_galleries' => 'photo_galleries',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['relationship'] = 'tid_representative';
  $handler->display->display_options['filters']['created']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['photo_gallery_overview'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/user-photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-picture"></span> Your Photos</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>Photo gallery</h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos?destination=photo-gallery" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add new photo gallery</a>
   </div>
</div>'),
    t('Representative node'),
    t('<div class="col-sm-2 col-xs-3 clearfix">
   <a href="/photo-gallery/[tid]" title="[name]">
      [field_photos]
      <p>[name] </p>
   </a>
</div>'),
    t('.'),
    t(','),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['photo_gallery_overview'] = $view;

  $view = new view();
  $view->name = 'photo_gallery_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery User';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Gallery User';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-chevron-left"></span> Photo Gallery</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>Your Photos</h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos?destination=user-photo-gallery" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add new photo  gallery</a>
   </div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-chevron-left"></span> Photo Gallery</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>Your Photos</h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add new photo  gallery</a>
   </div>
</div>
<p>You haven\'t uploaded any photos yet.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_gallery']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery']['alter']['text'] = '<p>Added to Gallery: <b>[field_gallery]</b> <a href="/node/[nid]/edit?destination=user-photo-gallery" class="btn btn-primary btn-sm pull-right">Edit</a></p>';
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photos']['id'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['table'] = 'field_data_field_photos';
  $handler->display->display_options['fields']['field_photos']['field'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photos']['alter']['text'] = '<div class="col-sm-1 col-xs-3">
   [field_photos]
</div>';
  $handler->display->display_options['fields']['field_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photos']['settings'] = array(
    'image_style' => 'photo_gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photos']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photos' => 'photos',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'user-photo-gallery';
  $translatables['photo_gallery_user'] = array(
    t('Master'),
    t('Photo Gallery User'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-chevron-left"></span> Photo Gallery</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>Your Photos</h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos?destination=user-photo-gallery" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add new photo  gallery</a>
   </div>
</div>'),
    t('<div class="clearfix" id="photo-gallery-header">
   <div class="col-sm-2">
      <a href="/photo-gallery" class="btn btn-default pull-left"><span class="glyphicon glyphicon-chevron-left"></span> Photo Gallery</a>
   </div>
   <div class="col-sm-8 text-center">
      <h3>Your Photos</h3>
   </div>
   <div class="col-sm-2">
      <a href="/node/add/photos" class="btn btn-default pull-right"><span class="glyphicon glyphicon-plus"></span> Add new photo  gallery</a>
   </div>
</div>
<p>You haven\'t uploaded any photos yet.</p>'),
    t('<p>Added to Gallery: <b>[field_gallery]</b> <a href="/node/[nid]/edit?destination=user-photo-gallery" class="btn btn-primary btn-sm pull-right">Edit</a></p>'),
    t('<div class="col-sm-1 col-xs-3">
   [field_photos]
</div>'),
    t('Alle'),
    t('Page'),
    t('more'),
  );
  $export['photo_gallery_user'] = $view;

  $view = new view();
  $view->name = 'product_test_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Tester - Upcoming Events & Subscriptions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'product_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'commerce_stock',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Product: Referenced order */
  $handler->display->display_options['relationships']['field_order_reference_order_id']['id'] = 'field_order_reference_order_id';
  $handler->display->display_options['relationships']['field_order_reference_order_id']['table'] = 'field_data_field_order_reference';
  $handler->display->display_options['relationships']['field_order_reference_order_id']['field'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['relationship'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['relationship'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id_1']['id'] = 'commerce_customer_billing_profile_id_1';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id_1']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id_1']['field'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id_1']['relationship'] = 'field_order_reference_order_id';
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['empty'] = 'Date, time and location after appointment.';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['label'] = '';
  $handler->display->display_options['fields']['sku']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sku']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Commerce Product: Stock */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['label'] = '';
  $handler->display->display_options['fields']['commerce_stock']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> #[sku] [title] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Spaces: [commerce_stock] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>';
  $handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_order_reference_order_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Field: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_birthdate']['label'] = '';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'danish',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="events_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
        <div class="col-sm-7">
		<p><b>Name:</b> [field_first_name] [field_last_name] &nbsp; &nbsp; <b>Phone:</b> [field_phone] &nbsp; &nbsp; <b>Birthdate:</b> [field_birthdate] &nbsp; &nbsp; <b>Sex:</b> [field_sex] </p>
	</div>
       <div class="col-sm-1">
		<a href="/admin/commerce/orders/[order_id]/edit" class="btn btn-default btn-sm pull-right"><span class="glyphicon glyphicon-edit"></span> Edit</a>
	</div>
</section';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Sort criterion: Commerce Line Item: Order ID */
  $handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'field_product';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iq_test_event' => 'iq_test_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'product-test-view';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['product_test_view'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Order'),
    t('Line items referenced by commerce_line_items'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Product creator'),
    t('Node referencing products from field_product'),
    t('Products referenced by commerce_product'),
    t('&nbsp;'),
    t('Date, time and location after appointment.'),
    t('<span class="glyphicon glyphicon-calendar"></span> #[sku] [title] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Spaces: [commerce_stock] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>'),
    t('<section class="events_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
        <div class="col-sm-7">
		<p><b>Name:</b> [field_first_name] [field_last_name] &nbsp; &nbsp; <b>Phone:</b> [field_phone] &nbsp; &nbsp; <b>Birthdate:</b> [field_birthdate] &nbsp; &nbsp; <b>Sex:</b> [field_sex] </p>
	</div>
       <div class="col-sm-1">
		<a href="/admin/commerce/orders/[order_id]/edit" class="btn btn-default btn-sm pull-right"><span class="glyphicon glyphicon-edit"></span> Edit</a>
	</div>
</section'),
    t('Alle'),
    t('Page'),
    t('more'),
    t('Content pane'),
    t('View panes'),
  );
  $export['product_test_view'] = $view;

  $view = new view();
  $view->name = 'subscription_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Subscription list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'product_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'field_date',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['id'] = 'relation_product_has_orders_node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['field'] = 'relation_product_has_orders_node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['relationship'] = 'field_product';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['label'] = 'Product has Orders';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="container">
    <div class="col-xs-1">
		<p><b><span class="glyphicon glyphicon-shopping-cart"></span> [order_id]</b></p>
	</div>
	<div class="col-xs-7">
		<p><span class="glyphicon glyphicon-envelope"></span> [mail] <span class="glyphicon glyphicon-user"></span> [field_first_name] [field_last_name] - [field_sex] <span class="glyphicon glyphicon-phone-alt"></span> [field_phone]</p>
	</div>
	<div class="col-xs-4">
		<a href="/admin/commerce/orders/[order_id]/edit">Edit order</a>
	</div>
</section';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [title_1] - [field_date] - [field_location] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'commerce_product_product_id';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'subscription-list/%';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['subscription_list'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('Product creator'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Node referencing products from field_product'),
    t('Product has Orders'),
    t('&nbsp;'),
    t('<section class="container">
    <div class="col-xs-1">
		<p><b><span class="glyphicon glyphicon-shopping-cart"></span> [order_id]</b></p>
	</div>
	<div class="col-xs-7">
		<p><span class="glyphicon glyphicon-envelope"></span> [mail] <span class="glyphicon glyphicon-user"></span> [field_first_name] [field_last_name] - [field_sex] <span class="glyphicon glyphicon-phone-alt"></span> [field_phone]</p>
	</div>
	<div class="col-xs-4">
		<a href="/admin/commerce/orders/[order_id]/edit">Edit order</a>
	</div>
</section'),
    t('<span class="glyphicon glyphicon-calendar"></span> [title_1] - [field_date] - [field_location] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>'),
    t('Alle'),
    t('Page'),
    t('more'),
    t('Content pane'),
    t('View panes'),
  );
  $export['subscription_list'] = $view;

  $view = new view();
  $view->name = 'test_coordinator_documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Test Coordinator - Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'product_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'field_date',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['id'] = 'relation_product_has_orders_node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['field'] = 'relation_product_has_orders_node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['relationship'] = 'field_product';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['label'] = 'Product has Orders';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Participated */
  $handler->display->display_options['fields']['field_participated']['id'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['table'] = 'field_data_field_participated';
  $handler->display->display_options['fields']['field_participated']['field'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['label'] = '';
  $handler->display->display_options['fields']['field_participated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_participated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_participated']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Commerce Order: IQ Percentile */
  $handler->display->display_options['fields']['field_iq_percentile']['id'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['field'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['label'] = '';
  $handler->display->display_options['fields']['field_iq_percentile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_percentile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_percentile']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] <= \'2\' ) {
   print(\'result-letter\');
}else if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] > \'2\' && $data->field_field_iq_percentile[0][\'raw\'][\'value\'] < \'50\' ) {

   print(\'result-letter-not-passed\');
}else if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] == \'50\' ) {
   print(\'result-letter-not-passed-1\');
}else if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] > \'50\' ) {
   print(\'result-letter-not-passed-2\');
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Commerce Order: Completed (editable) */
  $handler->display->display_options['fields']['field_completed_editable']['id'] = 'field_completed_editable';
  $handler->display->display_options['fields']['field_completed_editable']['table'] = 'field_data_field_completed';
  $handler->display->display_options['fields']['field_completed_editable']['field'] = 'field_completed_editable';
  $handler->display->display_options['fields']['field_completed_editable']['label'] = '';
  $handler->display->display_options['fields']['field_completed_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_completed_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_completed_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_completed_editable']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_completed_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_completed_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_completed_editable']['suppress_description'] = 0;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
        <div class="col-sm-4">
		<p><b>[mail]</b> &nbsp; <b>Name:</b> [field_first_name] [field_last_name] &nbsp; [field_iq_percentile]%</p>
	</div>
	<div class="col-sm-7">
		
                <a href="/admin/commerce/orders/[order_id]/edit" class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-edit"></span> Edit</a> 
                <span class="pull-left">Færdigbehandlet: &nbsp;</span>[field_completed_editable]
                <a href="/documents/certificates/[order_id]" target="_blank" class="btn btn-default pull-right btn-sm">Certifikat</a> 
                <a href="/documents/[php]/[order_id]" target="_blank" class="btn btn-default pull-right btn-sm">Resultatbrev</a> 
                
	</div>
</section>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name_1']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Tester: [field_first_name_1]  [field_last_name_1] ';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Commerce Order: Participated (field_participated) */
  $handler->display->display_options['filters']['field_participated_value']['id'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['table'] = 'field_data_field_participated';
  $handler->display->display_options['filters']['field_participated_value']['field'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['filters']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['vocabulary'] = 'iq_test_types';
  /* Filter criterion: Commerce Order: IQ Score (field_iq_score) */
  $handler->display->display_options['filters']['field_iq_score_value']['id'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['filters']['field_iq_score_value']['field'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Percentile (field_iq_percentile) */
  $handler->display->display_options['filters']['field_iq_percentile_value']['id'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['filters']['field_iq_percentile_value']['field'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['filters']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['filters']['field_raw_score_value']['field'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: Completed (field_completed) */
  $handler->display->display_options['filters']['field_completed_value']['id'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['table'] = 'field_data_field_completed';
  $handler->display->display_options['filters']['field_completed_value']['field'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_completed_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'completed' => 'completed',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['test_coordinator_documents'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('Product creator'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Node referencing products from field_product'),
    t('Product has Orders'),
    t('&nbsp;'),
    t('<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
        <div class="col-sm-4">
		<p><b>[mail]</b> &nbsp; <b>Name:</b> [field_first_name] [field_last_name] &nbsp; [field_iq_percentile]%</p>
	</div>
	<div class="col-sm-7">
		
                <a href="/admin/commerce/orders/[order_id]/edit" class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-edit"></span> Edit</a> 
                <span class="pull-left">Færdigbehandlet: &nbsp;</span>[field_completed_editable]
                <a href="/documents/certificates/[order_id]" target="_blank" class="btn btn-default pull-right btn-sm">Certifikat</a> 
                <a href="/documents/[php]/[order_id]" target="_blank" class="btn btn-default pull-right btn-sm">Resultatbrev</a> 
                
	</div>
</section>'),
    t('<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Tester: [field_first_name_1]  [field_last_name_1] '),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['test_coordinator_documents'] = $view;

  $view = new view();
  $view->name = 'test_coordinator_upcoming_events_subscriptions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Test Coordinator - Upcoming Events & Subscriptions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'product_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'commerce_stock',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Product: Referenced order */
  $handler->display->display_options['relationships']['field_order_reference_order_id']['id'] = 'field_order_reference_order_id';
  $handler->display->display_options['relationships']['field_order_reference_order_id']['table'] = 'field_data_field_order_reference';
  $handler->display->display_options['relationships']['field_order_reference_order_id']['field'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['relationship'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['relationship'] = 'field_order_reference_order_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id_1']['id'] = 'commerce_customer_billing_profile_id_1';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id_1']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id_1']['field'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id_1']['relationship'] = 'field_order_reference_order_id';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name_1']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['empty'] = 'Date, time and location after appointment.';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['label'] = '';
  $handler->display->display_options['fields']['sku']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sku']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Commerce Product: Stock */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['label'] = '';
  $handler->display->display_options['fields']['commerce_stock']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> #[sku] [title] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Spaces: [commerce_stock] &nbsp; &nbsp;  Tester: [field_first_name_1] [field_last_name_1]<a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>';
  $handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_order_reference_order_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="events_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
        <div class="col-sm-7">
		<p><b>Name:</b> [field_first_name] [field_last_name] &nbsp; &nbsp; <b>Phone:</b> [field_phone]</p>
	</div>
       <div class="col-sm-1">
		<a href="/admin/commerce/orders/[order_id]/edit" class="btn btn-default btn-sm pull-right"><span class="glyphicon glyphicon-edit"></span> Edit</a>
	</div>
</section';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iq_test_event' => 'iq_test_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 2;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['test_coordinator_upcoming_events_subscriptions'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Order'),
    t('Line items referenced by commerce_line_items'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Product creator'),
    t('Node referencing products from field_product'),
    t('Products referenced by commerce_product'),
    t('&nbsp;'),
    t('Date, time and location after appointment.'),
    t('<span class="glyphicon glyphicon-calendar"></span> #[sku] [title] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Spaces: [commerce_stock] &nbsp; &nbsp;  Tester: [field_first_name_1] [field_last_name_1]<a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>'),
    t('<section class="events_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
        <div class="col-sm-7">
		<p><b>Name:</b> [field_first_name] [field_last_name] &nbsp; &nbsp; <b>Phone:</b> [field_phone]</p>
	</div>
       <div class="col-sm-1">
		<a href="/admin/commerce/orders/[order_id]/edit" class="btn btn-default btn-sm pull-right"><span class="glyphicon glyphicon-edit"></span> Edit</a>
	</div>
</section'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['test_coordinator_upcoming_events_subscriptions'] = $view;

  $view = new view();
  $view->name = 'test_examiner_new_testees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Test Coordinator - New Testees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['relationship'] = 'commerce_product_product_id';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Participated */
  $handler->display->display_options['fields']['field_participated']['id'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['table'] = 'field_data_field_participated';
  $handler->display->display_options['fields']['field_participated']['field'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['label'] = '';
  $handler->display->display_options['fields']['field_participated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_participated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_participated']['type'] = 'editable';
  $handler->display->display_options['fields']['field_participated']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Commerce Order: Raw score (editable) */
  $handler->display->display_options['fields']['field_raw_score_editable']['id'] = 'field_raw_score_editable';
  $handler->display->display_options['fields']['field_raw_score_editable']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['fields']['field_raw_score_editable']['field'] = 'field_raw_score_editable';
  $handler->display->display_options['fields']['field_raw_score_editable']['label'] = '';
  $handler->display->display_options['fields']['field_raw_score_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_raw_score_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_raw_score_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_raw_score_editable']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['field_raw_score_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_raw_score_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_raw_score_editable']['suppress_description'] = 0;
  /* Field: Commerce Order: IQ Score (editable) */
  $handler->display->display_options['fields']['field_iq_score_editable']['id'] = 'field_iq_score_editable';
  $handler->display->display_options['fields']['field_iq_score_editable']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['fields']['field_iq_score_editable']['field'] = 'field_iq_score_editable';
  $handler->display->display_options['fields']['field_iq_score_editable']['label'] = '';
  $handler->display->display_options['fields']['field_iq_score_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_score_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_score_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_iq_score_editable']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['field_iq_score_editable']['widget_type'] = 'text_textfield';
  $handler->display->display_options['fields']['field_iq_score_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_iq_score_editable']['suppress_description'] = 0;
  /* Field: Commerce Order: IQ Test type (editable) */
  $handler->display->display_options['fields']['field_iq_test_type_editable']['id'] = 'field_iq_test_type_editable';
  $handler->display->display_options['fields']['field_iq_test_type_editable']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['fields']['field_iq_test_type_editable']['field'] = 'field_iq_test_type_editable';
  $handler->display->display_options['fields']['field_iq_test_type_editable']['label'] = '';
  $handler->display->display_options['fields']['field_iq_test_type_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_test_type_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_test_type_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_iq_test_type_editable']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
  );
  $handler->display->display_options['fields']['field_iq_test_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_iq_test_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_iq_test_type_editable']['suppress_description'] = 0;
  /* Field: Commerce Order: IQ Percentile */
  $handler->display->display_options['fields']['field_iq_percentile']['id'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['field'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['label'] = '';
  $handler->display->display_options['fields']['field_iq_percentile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_percentile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_percentile']['type'] = 'editable';
  $handler->display->display_options['fields']['field_iq_percentile']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b>
    </div>
    <div class="col-sm-4">
                <b>[mail]</b>
   </div>
    <div class="col-sm-7">
       <b>Name:</b> [field_first_name] [field_last_name] <a href="/admin/commerce/orders/[order_id]/edit" class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-edit"> </span> Edit</a></p>
	</div>
	<div class="col-sm-12">
		<span class="pull-left"><b>Result:</b>&nbsp; &nbsp; &nbsp;</span>   <span class="pull-left">IQ &nbsp;</span>[field_iq_score_editable] <span class="pull-left">Raw &nbsp;</span> [field_raw_score_editable] <span class="pull-left">% &nbsp;</span> [field_iq_percentile] <span class="pull-left">Test type &nbsp;</span>[field_iq_test_type_editable]
	</div>
</section>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name_1']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Tester: [field_first_name_1] [field_last_name_1] ';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Commerce Order: Participated (field_participated) */
  $handler->display->display_options['filters']['field_participated_value']['id'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['table'] = 'field_data_field_participated';
  $handler->display->display_options['filters']['field_participated_value']['field'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_participated_value']['value'] = array(
    'tested' => 'tested',
  );
  $handler->display->display_options['filters']['field_participated_value']['group'] = 1;
  /* Filter criterion: Commerce Order: Participated (field_participated) */
  $handler->display->display_options['filters']['field_participated_value_1']['id'] = 'field_participated_value_1';
  $handler->display->display_options['filters']['field_participated_value_1']['table'] = 'field_data_field_participated';
  $handler->display->display_options['filters']['field_participated_value_1']['field'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_participated_value_1']['value'] = array(
    'not tested' => 'not tested',
  );
  $handler->display->display_options['filters']['field_participated_value_1']['group'] = 1;
  /* Filter criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['filters']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['filters']['field_raw_score_value']['field'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_raw_score_value']['group'] = 2;
  /* Filter criterion: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['filters']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_iq_test_type_tid']['vocabulary'] = 'iq_test_types';
  /* Filter criterion: Commerce Order: IQ Score (field_iq_score) */
  $handler->display->display_options['filters']['field_iq_score_value']['id'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['filters']['field_iq_score_value']['field'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_iq_score_value']['group'] = 2;
  /* Filter criterion: Commerce Order: IQ Percentile (field_iq_percentile) */
  $handler->display->display_options['filters']['field_iq_percentile_value']['id'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['filters']['field_iq_percentile_value']['field'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_iq_percentile_value']['group'] = 2;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'completed' => 'completed',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['test_examiner_new_testees'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('Product creator'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Node referencing products from field_product'),
    t('&nbsp;'),
    t('<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b>
    </div>
    <div class="col-sm-4">
                <b>[mail]</b>
   </div>
    <div class="col-sm-7">
       <b>Name:</b> [field_first_name] [field_last_name] <a href="/admin/commerce/orders/[order_id]/edit" class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-edit"> </span> Edit</a></p>
	</div>
	<div class="col-sm-12">
		<span class="pull-left"><b>Result:</b>&nbsp; &nbsp; &nbsp;</span>   <span class="pull-left">IQ &nbsp;</span>[field_iq_score_editable] <span class="pull-left">Raw &nbsp;</span> [field_raw_score_editable] <span class="pull-left">% &nbsp;</span> [field_iq_percentile] <span class="pull-left">Test type &nbsp;</span>[field_iq_test_type_editable]
	</div>
</section>'),
    t('<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Tester: [field_first_name_1] [field_last_name_1] '),
    t('Content pane'),
    t('more'),
    t('View panes'),
    t('Content pane 2'),
  );
  $export['test_examiner_new_testees'] = $view;

  $view = new view();
  $view->name = 'test_examiner_old_testees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Test Coordinator - Old Testees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'product_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'field_date',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No matching results.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['id'] = 'relation_product_has_orders_node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['field'] = 'relation_product_has_orders_node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['relationship'] = 'field_product';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['label'] = 'Product has Orders';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Participated */
  $handler->display->display_options['fields']['field_participated']['id'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['table'] = 'field_data_field_participated';
  $handler->display->display_options['fields']['field_participated']['field'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['label'] = '';
  $handler->display->display_options['fields']['field_participated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_participated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_participated']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Commerce Order: IQ Percentile */
  $handler->display->display_options['fields']['field_iq_percentile']['id'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['field'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['label'] = '';
  $handler->display->display_options['fields']['field_iq_percentile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_percentile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_percentile']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] <= \'2\' ) {
   print(\'result-letter\');
}else if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] > \'2\' && $data->field_field_iq_percentile[0][\'raw\'][\'value\'] < \'50\' ) {

   print(\'result-letter-not-passed\');
}else if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] == \'50\' ) {
   print(\'result-letter-not-passed-1\');
}else if ( $data->field_field_iq_percentile[0][\'raw\'][\'value\'] > \'50\' ) {
   print(\'result-letter-not-passed-2\');
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
        <div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>Name:</b> [field_first_name] [field_last_name]</p>
	</div>
	<div class="col-sm-5">
		[field_iq_percentile]% &nbsp; 
                <a href="/admin/commerce/orders/[order_id]/edit" class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-edit"></span> Edit</a> 
                <a href="/documents/certificates/[order_id]" target="_blank" class="btn btn-default  btn-sm pull-right">Certifikat</a> 
               <a href="/documents/[php]/[order_id]" target="_blank" class="btn btn-default pull-right btn-sm">Resultatbrev</a> 
                
	</div>
</section>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name_1']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Tester: [field_first_name_1]  [field_last_name_1] ';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Commerce Order: Participated (field_participated) */
  $handler->display->display_options['filters']['field_participated_value']['id'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['table'] = 'field_data_field_participated';
  $handler->display->display_options['filters']['field_participated_value']['field'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['filters']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['vocabulary'] = 'iq_test_types';
  /* Filter criterion: Commerce Order: IQ Score (field_iq_score) */
  $handler->display->display_options['filters']['field_iq_score_value']['id'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['filters']['field_iq_score_value']['field'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Percentile (field_iq_percentile) */
  $handler->display->display_options['filters']['field_iq_percentile_value']['id'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['filters']['field_iq_percentile_value']['field'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['filters']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['filters']['field_raw_score_value']['field'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: Completed (field_completed) */
  $handler->display->display_options['filters']['field_completed_value']['id'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['table'] = 'field_data_field_completed';
  $handler->display->display_options['filters']['field_completed_value']['field'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'completed' => 'completed',
  );
  /* Filter criterion: Commerce Order revision: Order ID */
  $handler->display->display_options['filters']['order_id']['id'] = 'order_id';
  $handler->display->display_options['filters']['order_id']['table'] = 'commerce_order_revision';
  $handler->display->display_options['filters']['order_id']['field'] = 'order_id';
  $handler->display->display_options['filters']['order_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['order_id']['expose']['operator_id'] = 'order_id_op';
  $handler->display->display_options['filters']['order_id']['expose']['label'] = '#ID';
  $handler->display->display_options['filters']['order_id']['expose']['operator'] = 'order_id_op';
  $handler->display->display_options['filters']['order_id']['expose']['identifier'] = 'order_id';
  $handler->display->display_options['filters']['order_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Commerce Order: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Fornavn';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Efternavn';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['test_examiner_old_testees'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('No matching results.'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('Product creator'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Node referencing products from field_product'),
    t('Product has Orders'),
    t('&nbsp;'),
    t('<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
        <div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>Name:</b> [field_first_name] [field_last_name]</p>
	</div>
	<div class="col-sm-5">
		[field_iq_percentile]% &nbsp; 
                <a href="/admin/commerce/orders/[order_id]/edit" class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-edit"></span> Edit</a> 
                <a href="/documents/certificates/[order_id]" target="_blank" class="btn btn-default  btn-sm pull-right">Certifikat</a> 
               <a href="/documents/[php]/[order_id]" target="_blank" class="btn btn-default pull-right btn-sm">Resultatbrev</a> 
                
	</div>
</section>'),
    t('<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Tester: [field_first_name_1]  [field_last_name_1] '),
    t('#ID'),
    t('E-mail'),
    t('Fornavn'),
    t('Efternavn'),
    t('Content pane'),
    t('more'),
    t('View panes'),
    t('Content pane 2'),
  );
  $export['test_examiner_old_testees'] = $view;

  $view = new view();
  $view->name = 'test_examiner_send_mails';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Test Examiner - Send Mails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No peding mails to send.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Field: Bulk operations: Commerce Order */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'status' => 'status',
        ),
      ),
    ),
    'rules_component::rules_order_ref_test' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_send_test_result_passed_' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_result']['id'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['table'] = 'field_data_field_result';
  $handler->display->display_options['fields']['field_result']['field'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['label'] = '';
  $handler->display->display_options['fields']['field_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_result']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_result']['alter']['text'] = '[field_result]%';
  $handler->display->display_options['fields']['field_result']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<div class="clearfix">
   <div class="col-sm-1">
      [views_bulk_operations]
   </div>
   <div class="col-sm-4">
      <p>#[order_id] &nbsp; [mail]</p>
   </div>
   <div class="col-sm-4">
      <p>[field_first_name] [field_last_name]</p>
   </div>
   <div class="col-sm-3">
      <p><b>Result:</b> [field_result]</p>
   </div>
</div>';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_result_tid']['id'] = 'field_result_tid';
  $handler->display->display_options['filters']['field_result_tid']['table'] = 'field_data_field_result';
  $handler->display->display_options['filters']['field_result_tid']['field'] = 'field_result_tid';
  $handler->display->display_options['filters']['field_result_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_result_tid']['value'] = array(
    11 => '11',
    12 => '12',
  );
  /* Filter criterion: Commerce Order: Participated (field_participated) */
  $handler->display->display_options['filters']['field_participated_value']['id'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['table'] = 'field_data_field_participated';
  $handler->display->display_options['filters']['field_participated_value']['field'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['value'] = array(
    'tested' => 'tested',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_email_is_sent_value']['id'] = 'field_email_is_sent_value';
  $handler->display->display_options['filters']['field_email_is_sent_value']['table'] = 'field_data_field_email_is_sent';
  $handler->display->display_options['filters']['field_email_is_sent_value']['field'] = 'field_email_is_sent_value';
  $handler->display->display_options['filters']['field_email_is_sent_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_is_sent_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['filters']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['vocabulary'] = 'iq_test_types';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_iq_test_sd_tid']['id'] = 'field_iq_test_sd_tid';
  $handler->display->display_options['filters']['field_iq_test_sd_tid']['table'] = 'field_data_field_iq_test_sd';
  $handler->display->display_options['filters']['field_iq_test_sd_tid']['field'] = 'field_iq_test_sd_tid';
  $handler->display->display_options['filters']['field_iq_test_sd_tid']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: IQ Score (field_iq_score) */
  $handler->display->display_options['filters']['field_iq_score_value']['id'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['filters']['field_iq_score_value']['field'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['operator'] = 'not empty';
  /* Filter criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['filters']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['filters']['field_raw_score_value']['field'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'test-page';
  $translatables['test_examiner_send_mails'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('No peding mails to send.'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('[field_result]%'),
    t('<div class="clearfix">
   <div class="col-sm-1">
      [views_bulk_operations]
   </div>
   <div class="col-sm-4">
      <p>#[order_id] &nbsp; [mail]</p>
   </div>
   <div class="col-sm-4">
      <p>[field_first_name] [field_last_name]</p>
   </div>
   <div class="col-sm-3">
      <p><b>Result:</b> [field_result]</p>
   </div>
</div>'),
    t('Content pane'),
    t('more'),
    t('View panes'),
    t('Page'),
  );
  $export['test_examiner_send_mails'] = $view;

  $view = new view();
  $view->name = 'test_order_edit';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Test order edit';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'order_id' => 'order_id',
    'product_id' => 'product_id',
    'title' => 'title',
    'mail' => 'mail',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_sex' => 'field_sex',
    'field_tested' => 'field_tested',
    'field_test_result' => 'field_test_result',
    'field_phone' => 'field_phone',
    'title_1' => 'title_1',
    'field_location' => 'field_location',
    'nid' => 'nid',
    'field_date' => 'field_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'product_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sex' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tested' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_test_result' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="#" class="submit_forms btn btn-primary"><span class="glyphicon glyphicon-edit"></span> Save</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['relationship'] = 'commerce_product_product_id';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['group_type'] = 'count';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_tested']['id'] = 'field_tested';
  $handler->display->display_options['fields']['field_tested']['table'] = 'field_data_field_tested';
  $handler->display->display_options['fields']['field_tested']['field'] = 'field_tested';
  $handler->display->display_options['fields']['field_tested']['label'] = '';
  $handler->display->display_options['fields']['field_tested']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tested']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_result']['id'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['table'] = 'field_data_field_result';
  $handler->display->display_options['fields']['field_result']['field'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['label'] = '';
  $handler->display->display_options['fields']['field_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_result']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="container editable_field_container">
        <div class="col-xs-1">
		<p><b>#[order_id] </b></p>
	</div>
	<div class="col-xs-2">
		<p>[mail]</p>
	</div>
	<div class="col-xs-2">
		<p><b>Name:</b> [field_first_name] [field_last_name]</p>
	</div>
	<div class="col-xs-1">
		<p><b>Sex:</b> [field_sex]</p>
	</div>
	<div class="col-xs-2">
		<p><b>Phone:</b> [field_phone]</p>
	</div>
        <div class="col-xs-3">
		<p>Tested: [field_tested] Result: [field_result]</p>
	</div>
	<div class="col-xs-1">
		<a href="#" class="submit_inline_form">Save</a> <a href="/admin/commerce/orders/[order_id]/edit">Edit order</a>
	</div>
</section>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [title_1] - [field_date] - [field_location] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'commerce_product_product_id';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'subscription-list-2/%';
  $translatables['test_order_edit'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="#" class="submit_forms btn btn-primary"><span class="glyphicon glyphicon-edit"></span> Save</a>'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('Product creator'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Node referencing products from field_product'),
    t('&nbsp;'),
    t('<section class="container editable_field_container">
        <div class="col-xs-1">
		<p><b>#[order_id] </b></p>
	</div>
	<div class="col-xs-2">
		<p>[mail]</p>
	</div>
	<div class="col-xs-2">
		<p><b>Name:</b> [field_first_name] [field_last_name]</p>
	</div>
	<div class="col-xs-1">
		<p><b>Sex:</b> [field_sex]</p>
	</div>
	<div class="col-xs-2">
		<p><b>Phone:</b> [field_phone]</p>
	</div>
        <div class="col-xs-3">
		<p>Tested: [field_tested] Result: [field_result]</p>
	</div>
	<div class="col-xs-1">
		<a href="#" class="submit_inline_form">Save</a> <a href="/admin/commerce/orders/[order_id]/edit">Edit order</a>
	</div>
</section>'),
    t('<span class="glyphicon glyphicon-calendar"></span> [title_1] - [field_date] - [field_location] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>'),
    t('Alle'),
    t('Page'),
    t('more'),
  );
  $export['test_order_edit'] = $view;

  $view = new view();
  $view->name = 'tester_previous_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Tester - Previous events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'product_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'field_date',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['id'] = 'relation_product_has_orders_node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['field'] = 'relation_product_has_orders_node';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['relationship'] = 'field_product';
  $handler->display->display_options['relationships']['relation_product_has_orders_node']['label'] = 'Product has Orders';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Participated */
  $handler->display->display_options['fields']['field_participated']['id'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['table'] = 'field_data_field_participated';
  $handler->display->display_options['fields']['field_participated']['field'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['label'] = '';
  $handler->display->display_options['fields']['field_participated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_participated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_participated']['type'] = 'editable';
  $handler->display->display_options['fields']['field_participated']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
        <div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
	<div class="col-sm-4">
		<p><b>Name:</b> [field_first_name] [field_last_name]</p>
	</div>
	<div class="col-sm-4">
		[field_participated] <a href="/admin/commerce/orders/[order_id]/edit" class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-edit"></span> Edit</a>
	</div>
</section>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date]';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Commerce Line Item: Order ID */
  $handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'completed' => 'completed',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['tester_previous_events'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('Product creator'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Node referencing products from field_product'),
    t('Product has Orders'),
    t('&nbsp;'),
    t('<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
        <div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
	<div class="col-sm-4">
		<p><b>Name:</b> [field_first_name] [field_last_name]</p>
	</div>
	<div class="col-sm-4">
		[field_participated] <a href="/admin/commerce/orders/[order_id]/edit" class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-edit"></span> Edit</a>
	</div>
</section>'),
    t('<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date]'),
    t('Alle'),
    t('Content pane'),
    t('more'),
    t('View panes'),
    t('Content pane 2'),
  );
  $export['tester_previous_events'] = $view;

  $view = new view();
  $view->name = 'tester_upcommming_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Tester - Upcoming events -Old';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'product_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'field_date',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Commerce Product: Creator */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['relationship'] = 'commerce_product_product_id';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['relationship'] = 'field_product';
  /* Field: Field: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_birthdate']['label'] = '';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'danish',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['product_id']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Stock */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['commerce_stock']['label'] = '';
  $handler->display->display_options['fields']['commerce_stock']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="events_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
        <div class="col-sm-7">
		<p><b>Name:</b> [field_first_name] [field_last_name] &nbsp; &nbsp; <b>Phone:</b> [field_phone]</p> &nbsp; &nbsp; <b>Birthdate:</b> [field_birthdate]</p>
	</div>
       <div class="col-sm-1">
		<a href="/admin/commerce/orders/[order_id]/edit" class="btn btn-default pull-right">Edit</a>
	</div>
</section';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Spaces: [commerce_stock] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'commerce_product_product_id';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['tester_upcommming_events'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('Product creator'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Node referencing products from field_product'),
    t('Products referenced by field_product'),
    t('&nbsp;'),
    t('<section class="events_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
        <div class="col-sm-7">
		<p><b>Name:</b> [field_first_name] [field_last_name] &nbsp; &nbsp; <b>Phone:</b> [field_phone]</p> &nbsp; &nbsp; <b>Birthdate:</b> [field_birthdate]</p>
	</div>
       <div class="col-sm-1">
		<a href="/admin/commerce/orders/[order_id]/edit" class="btn btn-default pull-right">Edit</a>
	</div>
</section'),
    t('<span class="glyphicon glyphicon-calendar"></span> [title_1] &nbsp; &nbsp; [field_location] &nbsp; &nbsp; [field_date] &nbsp; &nbsp; Spaces: [commerce_stock] <a class="btn btn-primary btn-sm pull-right" href="/node/[nid]/edit"><span class="glyphicon glyphicon-edit"></span> Edit</a>'),
    t('Alle'),
    t('Content pane'),
    t('more'),
    t('View panes'),
    t('Content pane 2'),
  );
  $export['tester_upcommming_events'] = $view;

  $view = new view();
  $view->name = 'upcomming_iq_test_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcomming IQ Test Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kommende IK test arrangementer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="row">
<div class="col-sm-12 text-center">
   <a href="/iq-test-event-list" class="btn btn-info btn-block"><?php print t(\'View all IQ Test Events\'); ?></a>
</div>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['empty'] = 'Efter aftale.';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'danish_with_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Product: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="row">
<div class="col-sm-12">
   <h3>[title]</h3>
</div>
<div class="col-sm-7">
   <p><span class="glyphicon glyphicon-calendar"></span> [field_date]</p>
</div>
<div class="col-sm-5">
   <p><span class="glyphicon glyphicon-map-marker"></span> [field_location]</p>
</div>

</div>
<hr>';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iq_test_event' => 'iq_test_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 2;
  /* Filter criterion: Commerce Product: Stock (commerce_stock) */
  $handler->display->display_options['filters']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['filters']['commerce_stock_value']['field'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['commerce_stock_value']['operator'] = '>';
  $handler->display->display_options['filters']['commerce_stock_value']['value']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['upcomming_iq_test_events'] = array(
    t('Master'),
    t('Kommende IK test arrangementer'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div class="row">
<div class="col-sm-12 text-center">
   <a href="/iq-test-event-list" class="btn btn-info btn-block"><?php print t(\'View all IQ Test Events\'); ?></a>
</div>
</div>'),
    t('Products referenced by field_product'),
    t('Efter aftale.'),
    t('<div class="row">
<div class="col-sm-12">
   <h3>[title]</h3>
</div>
<div class="col-sm-7">
   <p><span class="glyphicon glyphicon-calendar"></span> [field_date]</p>
</div>
<div class="col-sm-5">
   <p><span class="glyphicon glyphicon-map-marker"></span> [field_location]</p>
</div>

</div>
<hr>'),
    t('Block'),
    t('more'),
  );
  $export['upcomming_iq_test_events'] = $view;

  $view = new view();
  $view->name = 'user_admin_guest_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User admin - Guest members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'active-blocked';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Membership expiration date */
  $handler->display->display_options['fields']['field_membership_expiration_date']['id'] = 'field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['table'] = 'field_data_field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['field'] = 'field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['label'] = '';
  $handler->display->display_options['fields']['field_membership_expiration_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_membership_expiration_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_membership_expiration_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['text'] = '<div class="clearfix">
   <div class="col-sm-1">
       [views_bulk_operations]
   </div>
   <div class="col-sm-1">
       <a href="/user/[uid]/profile">[name]</a>
   </div>
   <div class="col-sm-4">
       [field_first_name] [field_last_name]
   </div>
   <div class="col-sm-3">
      [status]
   </div>
   <div class="col-sm-3">
      [field_membership_expiration_date]
   </div>
</div>';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_deactivate_guest_member' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_deactivate_member' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Deactivate Guest Member',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mailman_manager_mass_subscribe' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mailman_manager_mass_unsubscribe' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_deactivate_membership' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_notify_member_before_deactivation_component_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_user_manager_activate_old_members' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_new_expiration_date_and_send_mail' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    10 => '10',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Guest Member ID';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Fornavn';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Efternavn';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['user_admin_guest_members'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('No results'),
    t('<div class="clearfix">
   <div class="col-sm-1">
       [views_bulk_operations]
   </div>
   <div class="col-sm-1">
       <a href="/user/[uid]/profile">[name]</a>
   </div>
   <div class="col-sm-4">
       [field_first_name] [field_last_name]
   </div>
   <div class="col-sm-3">
      [status]
   </div>
   <div class="col-sm-3">
      [field_membership_expiration_date]
   </div>
</div>'),
    t('Guest Member ID'),
    t('Fornavn'),
    t('Efternavn'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['user_admin_guest_members'] = $view;

  $view = new view();
  $view->name = 'user_admin_new_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'User admin - new members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_sex']['label'] = '';
  $handler->display->display_options['fields']['field_sex']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Participated */
  $handler->display->display_options['fields']['field_participated']['id'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['table'] = 'field_data_field_participated';
  $handler->display->display_options['fields']['field_participated']['field'] = 'field_participated';
  $handler->display->display_options['fields']['field_participated']['label'] = '';
  $handler->display->display_options['fields']['field_participated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_participated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_participated']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Commerce Order: IQ Percentile */
  $handler->display->display_options['fields']['field_iq_percentile']['id'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['field'] = 'field_iq_percentile';
  $handler->display->display_options['fields']['field_iq_percentile']['label'] = '';
  $handler->display->display_options['fields']['field_iq_percentile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iq_percentile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iq_percentile']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Commerce Order: Create user from order */
  $handler->display->display_options['fields']['create_user_from_order']['id'] = 'create_user_from_order';
  $handler->display->display_options['fields']['create_user_from_order']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['create_user_from_order']['field'] = 'create_user_from_order';
  $handler->display->display_options['fields']['create_user_from_order']['label'] = '';
  $handler->display->display_options['fields']['create_user_from_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['create_user_from_order']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['create_user_from_order']['alter']['text'] = '<span class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-user"></span> [create_user_from_order]</span>';
  $handler->display->display_options['fields']['create_user_from_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['create_user_from_order']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['create_user_from_order']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
        <div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>Name:</b> [field_first_name] [field_last_name]</p>
	</div>
	<div class="col-sm-5">
		 
               [create_user_from_order] 
                
	</div>
</section>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Sort criterion: Commerce Order: Order ID */
  $handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['order'] = 'DESC';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Commerce Order: Participated (field_participated) */
  $handler->display->display_options['filters']['field_participated_value']['id'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['table'] = 'field_data_field_participated';
  $handler->display->display_options['filters']['field_participated_value']['field'] = 'field_participated_value';
  $handler->display->display_options['filters']['field_participated_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_participated_value']['group'] = 1;
  /* Filter criterion: Commerce Order: IQ Test type (field_iq_test_type) */
  $handler->display->display_options['filters']['field_iq_test_type_tid']['id'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['table'] = 'field_data_field_iq_test_type';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['field'] = 'field_iq_test_type_tid';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_iq_test_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iq_test_type_tid']['vocabulary'] = 'iq_test_types';
  /* Filter criterion: Commerce Order: IQ Score (field_iq_score) */
  $handler->display->display_options['filters']['field_iq_score_value']['id'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['table'] = 'field_data_field_iq_score';
  $handler->display->display_options['filters']['field_iq_score_value']['field'] = 'field_iq_score_value';
  $handler->display->display_options['filters']['field_iq_score_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_iq_score_value']['group'] = 1;
  /* Filter criterion: Commerce Order: IQ Percentile (field_iq_percentile) */
  $handler->display->display_options['filters']['field_iq_percentile_value']['id'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['filters']['field_iq_percentile_value']['field'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_iq_percentile_value']['group'] = 1;
  /* Filter criterion: Commerce Order: Raw score (field_raw_score) */
  $handler->display->display_options['filters']['field_raw_score_value']['id'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['table'] = 'field_data_field_raw_score';
  $handler->display->display_options['filters']['field_raw_score_value']['field'] = 'field_raw_score_value';
  $handler->display->display_options['filters']['field_raw_score_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_raw_score_value']['group'] = 1;
  /* Filter criterion: Commerce Order: Completed (field_completed) */
  $handler->display->display_options['filters']['field_completed_value']['id'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['table'] = 'field_data_field_completed';
  $handler->display->display_options['filters']['field_completed_value']['field'] = 'field_completed_value';
  $handler->display->display_options['filters']['field_completed_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_completed_value']['group'] = 1;
  /* Filter criterion: Commerce Order: IQ Percentile (field_iq_percentile) */
  $handler->display->display_options['filters']['field_iq_percentile_value_1']['id'] = 'field_iq_percentile_value_1';
  $handler->display->display_options['filters']['field_iq_percentile_value_1']['table'] = 'field_data_field_iq_percentile';
  $handler->display->display_options['filters']['field_iq_percentile_value_1']['field'] = 'field_iq_percentile_value';
  $handler->display->display_options['filters']['field_iq_percentile_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_iq_percentile_value_1']['value']['value'] = '2';
  $handler->display->display_options['filters']['field_iq_percentile_value_1']['group'] = 1;
  /* Filter criterion: Commerce Order: User Order reference (field_user_order_reference) */
  $handler->display->display_options['filters']['field_user_order_reference_target_id']['id'] = 'field_user_order_reference_target_id';
  $handler->display->display_options['filters']['field_user_order_reference_target_id']['table'] = 'field_data_field_user_order_reference';
  $handler->display->display_options['filters']['field_user_order_reference_target_id']['field'] = 'field_user_order_reference_target_id';
  $handler->display->display_options['filters']['field_user_order_reference_target_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_user_order_reference_target_id']['group'] = 1;
  /* Filter criterion: Field: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Fornavn';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    18 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    15 => 0,
    13 => 0,
    9 => 0,
    14 => 0,
    3 => 0,
    12 => 0,
    17 => 0,
  );
  /* Filter criterion: Field: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Efternavn';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    18 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    15 => 0,
    13 => 0,
    9 => 0,
    14 => 0,
    3 => 0,
    12 => 0,
    17 => 0,
  );
  /* Filter criterion: Commerce Order: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Commerce Order: Order ID */
  $handler->display->display_options['filters']['order_id']['id'] = 'order_id';
  $handler->display->display_options['filters']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['order_id']['field'] = 'order_id';
  $handler->display->display_options['filters']['order_id']['group'] = 1;
  $handler->display->display_options['filters']['order_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['order_id']['expose']['operator_id'] = 'order_id_op';
  $handler->display->display_options['filters']['order_id']['expose']['label'] = 'Ordre ID';
  $handler->display->display_options['filters']['order_id']['expose']['operator'] = 'order_id_op';
  $handler->display->display_options['filters']['order_id']['expose']['identifier'] = 'order_id';
  $handler->display->display_options['filters']['order_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['user_admin_new_members'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('No Results'),
    t('No results'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('<span class="pull-right btn btn-default btn-sm"><span class="glyphicon glyphicon-user"></span> [create_user_from_order]</span>'),
    t('<section class="participants_container clearfix">
    <div class="col-sm-1">
		<p><b># [order_id]</b></p>
	</div>
        <div class="col-sm-3">
		<p><b>[mail]</b></p>
	</div>
	<div class="col-sm-3">
		<p><b>Name:</b> [field_first_name] [field_last_name]</p>
	</div>
	<div class="col-sm-5">
		 
               [create_user_from_order] 
                
	</div>
</section>'),
    t('Fornavn'),
    t('Efternavn'),
    t('E-mail'),
    t('Ordre ID'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['user_admin_new_members'] = $view;

  $view = new view();
  $view->name = 'user_admin_old_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User admin - Current members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'active-blocked';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Membership expiration date */
  $handler->display->display_options['fields']['field_membership_expiration_date']['id'] = 'field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['table'] = 'field_data_field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['field'] = 'field_membership_expiration_date';
  $handler->display->display_options['fields']['field_membership_expiration_date']['label'] = '';
  $handler->display->display_options['fields']['field_membership_expiration_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_membership_expiration_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_membership_expiration_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['text'] = '<div class="clearfix">
   <div class="col-sm-1">
       [views_bulk_operations]
   </div>
   <div class="col-sm-1">
       <a href="/user/[uid]/profile">[name]</a>
   </div>
   <div class="col-sm-4">
       [field_first_name] [field_last_name]
   </div>
   <div class="col-sm-3">
      [rid]
   </div>
   <div class="col-sm-3">
      [field_membership_expiration_date] <a class="btn btn-default btn-sm pull-right" href="/user/[uid]/edit/member?destination=/user-management/current-members">Edit</a>
   </div>
</div>';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_deactivate_guest_member' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_deactivate_member' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mailman_manager_mass_subscribe' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mailman_manager_mass_unsubscribe' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_deactivate_membership' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_notify_member_before_deactivation_component_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_mensa_user_manager_activate_old_members' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_new_expiration_date_and_send_mail' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Field: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Member ID';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: First name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Fornavn';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    11 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
    12 => 0,
  );
  /* Filter criterion: Field: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Efternavn';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Membership expiration date (field_membership_expiration_date) */
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['id'] = 'field_membership_expiration_date_value';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['table'] = 'field_data_field_membership_expiration_date';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['field'] = 'field_membership_expiration_date_value';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['expose']['operator_id'] = 'field_membership_expiration_date_value_op';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['expose']['label'] = 'Membership expiration date (field_membership_expiration_date)';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['expose']['operator'] = 'field_membership_expiration_date_value_op';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['expose']['identifier'] = 'field_membership_expiration_date_value';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_membership_expiration_date_value']['default_date'] = 'now';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['user_admin_old_members'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('No results'),
    t('<div class="clearfix">
   <div class="col-sm-1">
       [views_bulk_operations]
   </div>
   <div class="col-sm-1">
       <a href="/user/[uid]/profile">[name]</a>
   </div>
   <div class="col-sm-4">
       [field_first_name] [field_last_name]
   </div>
   <div class="col-sm-3">
      [rid]
   </div>
   <div class="col-sm-3">
      [field_membership_expiration_date] <a class="btn btn-default btn-sm pull-right" href="/user/[uid]/edit/member?destination=/user-management/current-members">Edit</a>
   </div>
</div>'),
    t('Member ID'),
    t('Fornavn'),
    t('Efternavn'),
    t('Membership expiration date (field_membership_expiration_date)'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['user_admin_old_members'] = $view;

  return $export;
}
