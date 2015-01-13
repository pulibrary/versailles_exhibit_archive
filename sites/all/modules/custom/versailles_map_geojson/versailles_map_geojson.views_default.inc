<?php
/**
 * @file
 * versailles_map_geojson.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function versailles_map_geojson_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'versailles_map_coordinates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Versailles Map Coordinates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Versailles Map Coordinates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_geojson';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_map_latitude';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_map_longitude';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'title';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'field_provenance';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  /* Relationship: Content: Geographic Section (field_ver_geographic_section) */
  $handler->display->display_options['relationships']['field_ver_geographic_section_tid']['id'] = 'field_ver_geographic_section_tid';
  $handler->display->display_options['relationships']['field_ver_geographic_section_tid']['table'] = 'field_data_field_ver_geographic_section';
  $handler->display->display_options['relationships']['field_ver_geographic_section_tid']['field'] = 'field_ver_geographic_section_tid';
  $handler->display->display_options['relationships']['field_ver_geographic_section_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image ID */
  $handler->display->display_options['fields']['field_image_id']['id'] = 'field_image_id';
  $handler->display->display_options['fields']['field_image_id']['table'] = 'field_data_field_image_id';
  $handler->display->display_options['fields']['field_image_id']['field'] = 'field_image_id';
  $handler->display->display_options['fields']['field_image_id']['label'] = '';
  $handler->display->display_options['fields']['field_image_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_id']['alter']['text'] = 'http://libimages.princeton.edu/loris/[field_image_id]/info.json';
  $handler->display->display_options['fields']['field_image_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_id']['delta_offset'] = '0';
  /* Field: Content: Geographic Section */
  $handler->display->display_options['fields']['field_ver_geographic_section']['id'] = 'field_ver_geographic_section';
  $handler->display->display_options['fields']['field_ver_geographic_section']['table'] = 'field_data_field_ver_geographic_section';
  $handler->display->display_options['fields']['field_ver_geographic_section']['field'] = 'field_ver_geographic_section';
  $handler->display->display_options['fields']['field_ver_geographic_section']['label'] = '';
  $handler->display->display_options['fields']['field_ver_geographic_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ver_geographic_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Latitude */
  $handler->display->display_options['fields']['field_map_latitude']['id'] = 'field_map_latitude';
  $handler->display->display_options['fields']['field_map_latitude']['table'] = 'field_data_field_map_latitude';
  $handler->display->display_options['fields']['field_map_latitude']['field'] = 'field_map_latitude';
  $handler->display->display_options['fields']['field_map_latitude']['relationship'] = 'field_ver_geographic_section_tid';
  /* Field: Taxonomy term: Longitude */
  $handler->display->display_options['fields']['field_map_longitude']['id'] = 'field_map_longitude';
  $handler->display->display_options['fields']['field_map_longitude']['table'] = 'field_data_field_map_longitude';
  $handler->display->display_options['fields']['field_map_longitude']['field'] = 'field_map_longitude';
  $handler->display->display_options['fields']['field_map_longitude']['relationship'] = 'field_ver_geographic_section_tid';
  $handler->display->display_options['fields']['field_map_longitude']['label'] = '';
  $handler->display->display_options['fields']['field_map_longitude']['element_label_colon'] = FALSE;
  /* Field: Content: Provenance */
  $handler->display->display_options['fields']['field_provenance']['id'] = 'field_provenance';
  $handler->display->display_options['fields']['field_provenance']['table'] = 'field_data_field_provenance';
  $handler->display->display_options['fields']['field_provenance']['field'] = 'field_provenance';
  $handler->display->display_options['fields']['field_provenance']['label'] = '';
  $handler->display->display_options['fields']['field_provenance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_provenance']['type'] = 'text_plain';
  /* Sort criterion: Content: Geographic Section (field_ver_geographic_section) */
  $handler->display->display_options['sorts']['field_ver_geographic_section_tid']['id'] = 'field_ver_geographic_section_tid';
  $handler->display->display_options['sorts']['field_ver_geographic_section_tid']['table'] = 'field_data_field_ver_geographic_section';
  $handler->display->display_options['sorts']['field_ver_geographic_section_tid']['field'] = 'field_ver_geographic_section_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exhibit_rbsc_item' => 'exhibit_rbsc_item',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'map.json';
  $export['versailles_map_coordinates'] = $view;

  return $export;
}
