<?php
/**
 * @file
 * humanitarianresponse_funding.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_funding_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_funding_views_api() {
  return array("api" => "3.0");
}
