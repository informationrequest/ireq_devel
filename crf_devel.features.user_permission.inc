<?php
/**
 * @file
 * crf_devel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_devel_user_default_permissions() {
  $permissions = array();

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'devel',
  );

  // Exported permission: administer maillog.
  $permissions['administer maillog'] = array(
    'name' => 'administer maillog',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'maillog',
  );

  // Exported permission: delete maillog.
  $permissions['delete maillog'] = array(
    'name' => 'delete maillog',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'maillog',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'devel',
  );

  // Exported permission: view devel_node_access information.
  $permissions['view devel_node_access information'] = array(
    'name' => 'view devel_node_access information',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'devel_node_access',
  );

  // Exported permission: view maillog.
  $permissions['view maillog'] = array(
    'name' => 'view maillog',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'maillog',
  );

  return $permissions;
}
