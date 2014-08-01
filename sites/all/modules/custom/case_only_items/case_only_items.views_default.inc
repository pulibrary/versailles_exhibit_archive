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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_exhibit_item_source']['id'] = 'field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['table'] = 'field_data_field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['field'] = 'field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_item_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_item_source']['alter']['text'] = '([field_exhibit_item_source])';
  $handler->display->display_options['fields']['field_exhibit_item_source']['element_label_colon'] = FALSE;
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
