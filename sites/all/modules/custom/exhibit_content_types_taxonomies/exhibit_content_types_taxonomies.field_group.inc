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
  $field_group->identifier = 'group_exhibit_geo_info|node|exhibit_rbsc_item|form';
  $field_group->group_name = 'group_exhibit_geo_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit_rbsc_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map Information',
    'weight' => '26',
    'children' => array(
      0 => 'field_exhibit_item_url',
      1 => 'field_map_thumbnail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibit-geo-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exhibit_geo_info|node|exhibit_rbsc_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibit_item_images|node|exhibit_rbsc_item|form';
  $field_group->group_name = 'group_exhibit_item_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit_rbsc_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '8',
    'children' => array(
      0 => 'field_exhibit_image_one',
      1 => 'field_exhibit_image_two',
      2 => 'field_exhibit_image_one_caption',
      3 => 'field_exhibit_image_two_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibit-item-images field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exhibit_item_images|node|exhibit_rbsc_item|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_exhibit_item_type',
      2 => 'field_exhibit_item_source',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibit-item-info field-group-fieldset',
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
    'weight' => '7',
    'children' => array(
      0 => 'field_exhibit_case_group_label',
      1 => 'field_exhibit_case',
      2 => 'field_exhibit_sort_order',
      3 => 'field_exhibit_sub_case_grouping',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibit-item-placement field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exhibit_item_placement|node|exhibit_rbsc_item|form'] = $field_group;

  return $export;
}
