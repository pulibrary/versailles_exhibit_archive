<?php
/**
 * @file
 * case_only_items.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function case_only_items_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibit_items_top_level_cases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'exhibit_items_top_level_cases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'row';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column thumbnail col-md-3';
  $handler->display->display_options['style_options']['row_classes'] = 'views-row row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_exhibit_case_target_id']['id'] = 'field_exhibit_case_target_id';
  $handler->display->display_options['relationships']['field_exhibit_case_target_id']['table'] = 'field_data_field_exhibit_case';
  $handler->display->display_options['relationships']['field_exhibit_case_target_id']['field'] = 'field_exhibit_case_target_id';
  $handler->display->display_options['relationships']['field_exhibit_case_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_exhibit_sub_case_grouping_target_id']['id'] = 'field_exhibit_sub_case_grouping_target_id';
  $handler->display->display_options['relationships']['field_exhibit_sub_case_grouping_target_id']['table'] = 'field_data_field_exhibit_sub_case_grouping';
  $handler->display->display_options['relationships']['field_exhibit_sub_case_grouping_target_id']['field'] = 'field_exhibit_sub_case_grouping_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_exhibit_item_source']['id'] = 'field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['table'] = 'field_data_field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['field'] = 'field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_item_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_item_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_item_source']['alter']['text'] = '([field_exhibit_item_source])';
  $handler->display->display_options['fields']['field_exhibit_item_source']['element_label_colon'] = FALSE;
  /* Field: Content: Image One */
  $handler->display->display_options['fields']['field_exhibit_image_one']['id'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['table'] = 'field_data_field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['field'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_one']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image_one']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image_one']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_one']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_exhibit_image_one']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => 'large',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Image One Caption */
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['id'] = 'field_exhibit_image_one_caption';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['table'] = 'field_data_field_exhibit_image_one_caption';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['field'] = 'field_exhibit_image_one_caption';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['alter']['text'] = '[field_exhibit_image_one_caption] [field_exhibit_item_source] ';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['hide_empty'] = TRUE;
  /* Field: Content: Image Two */
  $handler->display->display_options['fields']['field_exhibit_image_two']['id'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['table'] = 'field_data_field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['field'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_two']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image_two']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_two']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_exhibit_image_two']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => 'large',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Image Two Caption */
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['id'] = 'field_exhibit_image_two_caption';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['table'] = 'field_data_field_exhibit_image_two_caption';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['field'] = 'field_exhibit_image_two_caption';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Map Thumbnail */
  $handler->display->display_options['fields']['field_map_thumbnail']['id'] = 'field_map_thumbnail';
  $handler->display->display_options['fields']['field_map_thumbnail']['table'] = 'field_data_field_map_thumbnail';
  $handler->display->display_options['fields']['field_map_thumbnail']['field'] = 'field_map_thumbnail';
  $handler->display->display_options['fields']['field_map_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_map_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_map_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_map_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Item URL */
  $handler->display->display_options['fields']['field_exhibit_item_url']['id'] = 'field_exhibit_item_url';
  $handler->display->display_options['fields']['field_exhibit_item_url']['table'] = 'field_data_field_exhibit_item_url';
  $handler->display->display_options['fields']['field_exhibit_item_url']['field'] = 'field_exhibit_item_url';
  $handler->display->display_options['fields']['field_exhibit_item_url']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_item_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_item_url']['alter']['text'] = '
<a href="[field_exhibit_item_url-url]" title="[title]" target="_blank">[field_map_thumbnail]</a>
<div>
[title] 
</div>';
  $handler->display->display_options['fields']['field_exhibit_item_url']['alter']['path'] = '[field_exhibit_item_url-url]';
  $handler->display->display_options['fields']['field_exhibit_item_url']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_exhibit_item_url']['alter']['link_class'] = 'rbsc-historic-map';
  $handler->display->display_options['fields']['field_exhibit_item_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_exhibit_item_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_item_url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_exhibit_item_url']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_exhibit_item_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_item_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_exhibit_item_url']['type'] = 'link_plain';
  /* Sort criterion: Content: Exhibit Sort order (field_exhibit_sort_order) */
  $handler->display->display_options['sorts']['field_exhibit_sort_order_value']['id'] = 'field_exhibit_sort_order_value';
  $handler->display->display_options['sorts']['field_exhibit_sort_order_value']['table'] = 'field_data_field_exhibit_sort_order';
  $handler->display->display_options['sorts']['field_exhibit_sort_order_value']['field'] = 'field_exhibit_sort_order_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_exhibit_case_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Content: Sub Case Grouping (field_exhibit_sub_case_grouping) */
  $handler->display->display_options['filters']['field_exhibit_sub_case_grouping_target_id']['id'] = 'field_exhibit_sub_case_grouping_target_id';
  $handler->display->display_options['filters']['field_exhibit_sub_case_grouping_target_id']['table'] = 'field_data_field_exhibit_sub_case_grouping';
  $handler->display->display_options['filters']['field_exhibit_sub_case_grouping_target_id']['field'] = 'field_exhibit_sub_case_grouping_target_id';
  $handler->display->display_options['filters']['field_exhibit_sub_case_grouping_target_id']['operator'] = 'empty';

  /* Display: Top Level Case Items Only */
  $handler = $view->new_display('panel_pane', 'Top Level Case Items Only', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Renders only items attached to a top-level case. ';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['exhibit_items_top_level_cases'] = $view;

  return $export;
}
