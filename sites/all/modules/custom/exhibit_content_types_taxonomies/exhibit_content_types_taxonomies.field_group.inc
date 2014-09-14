<?php
/**
 * @file
 * exhibit_content_types_taxonomies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function exhibit_content_types_taxonomies_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibit_item_info|node|exhibit_rbsc_item|form';
  $field_group->group_name = 'group_exhibit_item_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit_rbsc_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exhibit_item_info|node|exhibit_rbsc_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibit_item_placement|node|exhibit_rbsc_item|form';
  $field_group->group_name = 'group_exhibit_item_placement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit_rbsc_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exhibit Placement',
    'weight' => '2',
    'children' => array(
      0 => 'field_exhibit_case',
      1 => 'field_exhibit_case_group_label',
      2 => 'field_exhibit_sort_order',
      3 => 'field_exhibit_sub_case_grouping',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exhibit_item_placement|node|exhibit_rbsc_item|form'] = $field_group;

  return $export;
}
