<?php
/**
 * @file
 * humanitarianresponse_funding.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function humanitarianresponse_funding_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|funding|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'funding';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
  );
  $export['taxonomy_term|funding|default'] = $ds_layout;

  return $export;
}
