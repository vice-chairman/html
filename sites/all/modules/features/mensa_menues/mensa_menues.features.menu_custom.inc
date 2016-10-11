<?php
/**
 * @file
 * mensa_menues.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mensa_menues_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-administration.
  $menus['menu-administration'] = array(
    'menu_name' => 'menu-administration',
    'title' => 'Administration',
    'description' => 'Administration menu for Mensa site administrators (Not to confuse with the Admin role & Drupal Admin pages)',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-bliv-medlem.
  $menus['menu-bliv-medlem'] = array(
    'menu_name' => 'menu-bliv-medlem',
    'title' => 'Bliv Medlem',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-member-guide.
  $menus['menu-member-guide'] = array(
    'menu_name' => 'menu-member-guide',
    'title' => 'Member guide',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-member-user-admin.
  $menus['menu-member-user-admin'] = array(
    'menu_name' => 'menu-member-user-admin',
    'title' => 'Member user menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-om-mensa.
  $menus['menu-om-mensa'] = array(
    'menu_name' => 'menu-om-mensa',
    'title' => 'Om Mensa',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-test-eaxminer-menu.
  $menus['menu-test-eaxminer-menu'] = array(
    'menu_name' => 'menu-test-eaxminer-menu',
    'title' => 'Test Eaxminer Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-test-examiner-menu.
  $menus['menu-test-examiner-menu'] = array(
    'menu_name' => 'menu-test-examiner-menu',
    'title' => 'Test Coordinator Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-user-management.
  $menus['menu-user-management'] = array(
    'menu_name' => 'menu-user-management',
    'title' => 'User Management',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Administration menu for Mensa site administrators (Not to confuse with the Admin role & Drupal Admin pages)');
  t('Bliv Medlem');
  t('Main menu');
  t('Member guide');
  t('Member user menu');
  t('Om Mensa');
  t('Test Coordinator Menu');
  t('Test Eaxminer Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User Management');
  t('User menu');


  return $menus;
}
