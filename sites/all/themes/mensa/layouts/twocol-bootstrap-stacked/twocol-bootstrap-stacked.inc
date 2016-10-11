<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column bootstrap stacked'),
  'category' => t('Bootstrap: 2 columns'),
  'icon' => 'twocol-bootstrap-stacked.png',
  'theme' => 'twocol-bootstrap-stacked',
  'css' => 'twocol-bootstrap-stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);
