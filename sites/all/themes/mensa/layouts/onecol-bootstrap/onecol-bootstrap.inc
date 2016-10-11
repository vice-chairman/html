<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Single column - Bootstrap'),
  'category' => t('Columns: 1'),
  'icon' => 'onecol-bootstrap.png',
  'theme' => 'onecol-bootstrap',
  'css' => 'onecol-bootstrap.css',
  'regions' => array('middle' => t('Middle column')),
);
