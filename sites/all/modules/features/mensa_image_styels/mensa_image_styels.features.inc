<?php
/**
 * @file
 * mensa_image_styels.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function mensa_image_styels_image_default_styles() {
  $styles = array();

  // Exported image style: forum_mentum_cover.
  $styles['forum_mentum_cover'] = array(
    'name' => 'forum_mentum_cover',
    'label' => 'Forum Mentum cover',
    'effects' => array(
      1 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '170',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      9 => array(
        'label' => 'Beskær',
        'help' => 'Beskæring fjerner dele af billedet for at give det de angivne dimensioner.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '170',
          'height' => '241',
          'anchor' => 'center-top',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: md_slider_1_thumb.
  $styles['md_slider_1_thumb'] = array(
    'name' => 'md_slider_1_thumb',
    'label' => 'md_slider_1_thumb',
    'effects' => array(
      5 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '75',
          'scaleup' => FALSE,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: photo_gallery.
  $styles['photo_gallery'] = array(
    'name' => 'photo_gallery',
    'label' => 'Photo gallery',
    'effects' => array(
      8 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
