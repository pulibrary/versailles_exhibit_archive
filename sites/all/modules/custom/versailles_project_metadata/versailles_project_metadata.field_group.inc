<?php
/**
 * @file
 * versailles_project_metadata.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function versailles_project_metadata_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ver_contributers|node|exhibit_rbsc_item|form';
  $field_group->group_name = 'group_ver_contributers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit_rbsc_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contributors',
    'weight' => '26',
    'children' => array(
      0 => 'field_ver_ent_engraver',
      1 => 'field_ver_ent_artist',
      2 => 'field_ver_ent_book_author',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ver-contributers field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ver_contributers|node|exhibit_rbsc_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ver_metadata|node|exhibit_rbsc_item|form';
  $field_group->group_name = 'group_ver_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit_rbsc_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Versailles Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'field_ver_translated_print_title',
      1 => 'field_ver_publisher',
      2 => 'field_ver_date',
      3 => 'field_ver_series_book_title',
      4 => 'field_ver_pages',
      5 => 'field_ver_source',
      6 => 'field_ver_held_by',
      7 => 'field_ver_accession_callnum',
      8 => 'field_ver_resource_link',
      9 => 'field_ver_display_date',
      10 => 'field_ver_on_view',
      11 => 'field_ver_map_geo',
      12 => 'field_ver_image_link',
      13 => 'field_ver_tags',
      14 => 'field_ver_medium',
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
  $export['group_ver_metadata|node|exhibit_rbsc_item|form'] = $field_group;

  return $export;
}
