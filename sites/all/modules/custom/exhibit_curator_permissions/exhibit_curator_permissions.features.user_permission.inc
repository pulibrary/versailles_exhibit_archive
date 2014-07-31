<?php
/**
 * @file
 * exhibit_curator_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function exhibit_curator_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'create exhibit_case content'.
  $permissions['create exhibit_case content'] = array(
    'name' => 'create exhibit_case content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create exhibit_rbsc_item content'.
  $permissions['create exhibit_rbsc_item content'] = array(
    'name' => 'create exhibit_rbsc_item content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create exhibit_subcase content'.
  $permissions['create exhibit_subcase content'] = array(
    'name' => 'create exhibit_subcase content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create exhibition_landing_page content'.
  $permissions['create exhibition_landing_page content'] = array(
    'name' => 'create exhibition_landing_page content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any exhibit_case content'.
  $permissions['delete any exhibit_case content'] = array(
    'name' => 'delete any exhibit_case content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any exhibit_rbsc_item content'.
  $permissions['delete any exhibit_rbsc_item content'] = array(
    'name' => 'delete any exhibit_rbsc_item content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any exhibit_subcase content'.
  $permissions['delete any exhibit_subcase content'] = array(
    'name' => 'delete any exhibit_subcase content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own exhibit_case content'.
  $permissions['delete own exhibit_case content'] = array(
    'name' => 'delete own exhibit_case content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own exhibit_rbsc_item content'.
  $permissions['delete own exhibit_rbsc_item content'] = array(
    'name' => 'delete own exhibit_rbsc_item content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own exhibit_subcase content'.
  $permissions['delete own exhibit_subcase content'] = array(
    'name' => 'delete own exhibit_subcase content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own exhibition_landing_page content'.
  $permissions['delete own exhibition_landing_page content'] = array(
    'name' => 'delete own exhibition_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in exhibit_case_group_labels'.
  $permissions['delete terms in exhibit_case_group_labels'] = array(
    'name' => 'delete terms in exhibit_case_group_labels',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in rbsc_exhibit_item_types'.
  $permissions['delete terms in rbsc_exhibit_item_types'] = array(
    'name' => 'delete terms in rbsc_exhibit_item_types',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any exhibit_case content'.
  $permissions['edit any exhibit_case content'] = array(
    'name' => 'edit any exhibit_case content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any exhibit_rbsc_item content'.
  $permissions['edit any exhibit_rbsc_item content'] = array(
    'name' => 'edit any exhibit_rbsc_item content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any exhibit_subcase content'.
  $permissions['edit any exhibit_subcase content'] = array(
    'name' => 'edit any exhibit_subcase content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any exhibition_landing_page content'.
  $permissions['edit any exhibition_landing_page content'] = array(
    'name' => 'edit any exhibition_landing_page content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own exhibit_case content'.
  $permissions['edit own exhibit_case content'] = array(
    'name' => 'edit own exhibit_case content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own exhibit_rbsc_item content'.
  $permissions['edit own exhibit_rbsc_item content'] = array(
    'name' => 'edit own exhibit_rbsc_item content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own exhibit_subcase content'.
  $permissions['edit own exhibit_subcase content'] = array(
    'name' => 'edit own exhibit_subcase content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own exhibition_landing_page content'.
  $permissions['edit own exhibition_landing_page content'] = array(
    'name' => 'edit own exhibition_landing_page content',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in exhibit_case_group_labels'.
  $permissions['edit terms in exhibit_case_group_labels'] = array(
    'name' => 'edit terms in exhibit_case_group_labels',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in rbsc_exhibit_item_types'.
  $permissions['edit terms in rbsc_exhibit_item_types'] = array(
    'name' => 'edit terms in rbsc_exhibit_item_types',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import exhibit_case_importer feeds'.
  $permissions['import exhibit_case_importer feeds'] = array(
    'name' => 'import exhibit_case_importer feeds',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import exhibit_item_importer feeds'.
  $permissions['import exhibit_item_importer feeds'] = array(
    'name' => 'import exhibit_item_importer feeds',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import exhibit_sub_case_importer feeds'.
  $permissions['import exhibit_sub_case_importer feeds'] = array(
    'name' => 'import exhibit_sub_case_importer feeds',
    'roles' => array(
      'Curator' => 'Curator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
