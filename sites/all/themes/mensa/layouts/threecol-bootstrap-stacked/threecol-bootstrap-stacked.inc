<?php

// Plugin definition
$plugin = array(
  'title' => t('Three column bootstrap stacked'),
  'category' => t('Bootstrap: 3 columns'),
  'icon' => 'threecol-bootstrap-stacked.png',
  'theme' => 'threecol-bootstrap-stacked',
  'css' => 'threecol-bootstrap-stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);
