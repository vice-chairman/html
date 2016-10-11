<?php
/**
 * @file
 * menu-tree.func.php
 */

/**
 * Overrides theme_menu_tree().
 */
function bootstrap_menu_tree(&$variables) {
  return '<ul class="menu nav-pills ">' . $variables['tree'] . '</ul>';
}

/**
 * Bootstrap theme wrapper function for the primary menu links.
 */
function bootstrap_menu_tree__primary(&$variables) {
  return '<ul class="menu nav navbar-nav">' . $variables['tree'] . '</ul>';
}

/**
 * Bootstrap theme wrapper function for the secondary menu links.
 */
function bootstrap_menu_tree__secondary(&$variables) {
  return '<ul class="menu nav navbar-nav secondary">' . $variables['tree'] . '</ul>';
}


function mensa_menu_tree__menu_om_mensa(&$variables) {
  return '<ul class="nav nav-pills nav-stacked">' . $variables['tree'] . '</ul>';
}