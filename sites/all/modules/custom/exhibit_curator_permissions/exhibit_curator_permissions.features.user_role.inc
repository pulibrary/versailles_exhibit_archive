<?php
/**
 * @file
 * exhibit_curator_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function exhibit_curator_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Curator.
  $roles['Curator'] = array(
    'name' => 'Curator',
    'weight' => 3,
  );

  return $roles;
}
