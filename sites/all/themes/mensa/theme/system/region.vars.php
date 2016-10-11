<?php
/**
 * @file
 * region.vars.php
 */

/**
 * Implements hook_preprocess_region().
 */
function bootstrap_preprocess_region(&$variables) {
  global $theme;
  static $wells;
  

  switch ($variables['region']) {
    // @todo is this actually used properly?
    case 'content':
      $variables['theme_hook_suggestions'][] = 'region__no_wrapper';
      break;

    case 'help':
      $variables['content'] = _bootstrap_icon('question-sign') . $variables['content'];
      $variables['classes_array'][] = 'alert';
      $variables['classes_array'][] = 'alert-info';
      break;
  }
  if (!empty($wells[$variables['region']])) {
    $variables['classes_array'][] = $wells[$variables['region']];
  }
}
