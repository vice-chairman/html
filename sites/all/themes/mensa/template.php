<?php

/**
 * @file
 * template.php
 */



function mensa_menu_tree__menu_om_mensa(&$variables) {
  return '<ul class="nav nav-pills nav-stacked">' . $variables['tree'] . '</ul>';
}

function mensa_menu_tree__menu_member_guide(&$variables) {
  
  return '<ul class="">' . $variables['tree'] . '</ul>';
}

function mensa_form_views_exposed_form_alter(&$form, &$form_state){
	$form['#action'] = '/' . arg(0) .'/' . arg(1) . '/' . arg(2) . '';
}

//Load images in an overlay - set different HTML and PAGE templates

function mensa_preprocess_html(&$vars) {
  
  if ( arg(0) == 'photo-gallery' && arg(2) != '' ) {         
		$vars['theme_hook_suggestions'][] = 'html__overlay';   
	} 
	
  foreach($vars['user']->roles as $role){
    $vars['classes_array'][] = 'role-' . drupal_html_class($role);
  }
	
}

//Page pverlay

function mensa_preprocess_page(&$vars) {   
	if ( arg(0) == 'photo-gallery' && arg(2) != '' ) {          
		$vars['theme_hook_suggestions'][] = 'page__overlay';   
	} 
	
	//Add print css for certificates
	if ( arg(0) == 'documents' && arg(1) == 'certificates'){
		drupal_add_css(drupal_get_path('theme', 'mensa') . "/css/print-certificates.css");
	}
	
	if ( arg(0) == 'documents' && arg(1) != 'certificates'){
		drupal_add_css(drupal_get_path('theme', 'mensa') . "/css/print-letters.css");
	}
	
	if ( arg(0) == 'event-calendar'){
		drupal_add_css(drupal_get_path('theme', 'mensa') . "/css/print-calendar.css");
	}
} 

// Alter photos almub form to automaticaly set gallery value

function mensa_form_photos_node_form_alter(&$form, &$form_state) {
	
	
	if (!arg(3)){
		
		
		
	}else{
		
		$galleryID = arg(3);
		
		
		//Set title value to avoid submition error and hide it for the end user
		$form['field_gallery']['und']['#default_value'] = $galleryID;
		//$form['field_gallery']['und']['#disabled'] = TRUE;
			
	}
}



