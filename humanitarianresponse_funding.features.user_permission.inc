<?php
/**
 * @file
 * humanitarianresponse_funding.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_funding_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer funding vocabulary terms.
  $permissions['administer funding vocabulary terms'] = array(
    'name' => 'administer funding vocabulary terms',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'vppr',
  );

  return $permissions;
}
