<?php
/**
 * @file
 * exhibit_views_and_page_handlers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exhibit_views_and_page_handlers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibit_item_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Item Views';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_exhibit_image_one' => 'field_exhibit_image_one',
    'field_exhibit_image_two' => 'field_exhibit_image_two',
    'field_exhibit_sort_order' => 'field_exhibit_sort_order',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exhibit_image_one' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exhibit_image_two' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exhibit_sort_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  /* Field: Content: Image One */
  $handler->display->display_options['fields']['field_exhibit_image_one']['id'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['table'] = 'field_data_field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['field'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['label'] = 'Obverse';
  $handler->display->display_options['fields']['field_exhibit_image_one']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_one']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Image Two */
  $handler->display->display_options['fields']['field_exhibit_image_two']['id'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['table'] = 'field_data_field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['field'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['label'] = 'Reverse';
  $handler->display->display_options['fields']['field_exhibit_image_two']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_two']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Exhibit Sort order */
  $handler->display->display_options['fields']['field_exhibit_sort_order']['id'] = 'field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['table'] = 'field_data_field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['field'] = 'field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['label'] = 'Order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Exhibit Sort order (field_exhibit_sort_order) */
  $handler->display->display_options['sorts']['field_exhibit_sort_order_value']['id'] = 'field_exhibit_sort_order_value';
  $handler->display->display_options['sorts']['field_exhibit_sort_order_value']['table'] = 'field_data_field_exhibit_sort_order';
  $handler->display->display_options['sorts']['field_exhibit_sort_order_value']['field'] = 'field_exhibit_sort_order_value';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: All Imported Items */
  $handler = $view->new_display('page', 'All Imported Items', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Exhibit Sort order */
  $handler->display->display_options['fields']['field_exhibit_sort_order']['id'] = 'field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['table'] = 'field_data_field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['field'] = 'field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['label'] = 'Order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Case  */
  $handler->display->display_options['fields']['field_exhibit_case']['id'] = 'field_exhibit_case';
  $handler->display->display_options['fields']['field_exhibit_case']['table'] = 'field_data_field_exhibit_case';
  $handler->display->display_options['fields']['field_exhibit_case']['field'] = 'field_exhibit_case';
  $handler->display->display_options['fields']['field_exhibit_case']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Sub Case Grouping */
  $handler->display->display_options['fields']['field_exhibit_sub_case_grouping']['id'] = 'field_exhibit_sub_case_grouping';
  $handler->display->display_options['fields']['field_exhibit_sub_case_grouping']['table'] = 'field_data_field_exhibit_sub_case_grouping';
  $handler->display->display_options['fields']['field_exhibit_sub_case_grouping']['field'] = 'field_exhibit_sub_case_grouping';
  $handler->display->display_options['fields']['field_exhibit_sub_case_grouping']['label'] = 'Sub Case';
  $handler->display->display_options['fields']['field_exhibit_sub_case_grouping']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Image One */
  $handler->display->display_options['fields']['field_exhibit_image_one']['id'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['table'] = 'field_data_field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['field'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['label'] = 'Obverse';
  $handler->display->display_options['fields']['field_exhibit_image_one']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_one']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Image Two */
  $handler->display->display_options['fields']['field_exhibit_image_two']['id'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['table'] = 'field_data_field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['field'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['label'] = 'Reverse';
  $handler->display->display_options['fields']['field_exhibit_image_two']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_two']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_exhibit_item_source']['id'] = 'field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['table'] = 'field_data_field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['field'] = 'field_exhibit_item_source';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['path'] = 'items';

  /* Display: Items by Sub-Case */
  $handler = $view->new_display('panel_pane', 'Items by Sub-Case', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image One */
  $handler->display->display_options['fields']['field_exhibit_image_one']['id'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['table'] = 'field_data_field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['field'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_one']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image_one']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_one']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_exhibit_sub_case_grouping_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Item Images */
  $handler = $view->new_display('panel_pane', 'Item Images', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Image One */
  $handler->display->display_options['fields']['field_exhibit_image_one']['id'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['table'] = 'field_data_field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['field'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_one']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image_one']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_one']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_exhibit_image_one']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => 'large',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Image Two */
  $handler->display->display_options['fields']['field_exhibit_image_two']['id'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['table'] = 'field_data_field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['field'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_two']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image_two']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_two']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_exhibit_image_two']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => 'large',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Exhibit Sort order */
  $handler->display->display_options['fields']['field_exhibit_sort_order']['id'] = 'field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['table'] = 'field_data_field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['field'] = 'field_exhibit_sort_order';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_sort_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_sort_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_sort_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  $export['exhibit_item_views'] = $view;

  $view = new view();
  $view->name = 'subcase_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subcase View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subcase Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_exhibit_case_title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'body',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'row';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column thumbnail col-md-3';
  $handler->display->display_options['style_options']['row_classes'] = 'views-row row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_exhibit_sub_cases_node']['id'] = 'reverse_field_exhibit_sub_cases_node';
  $handler->display->display_options['relationships']['reverse_field_exhibit_sub_cases_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_exhibit_sub_cases_node']['field'] = 'reverse_field_exhibit_sub_cases_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_exhibit_sub_case_grouping_node']['id'] = 'reverse_field_exhibit_sub_case_grouping_node';
  $handler->display->display_options['relationships']['reverse_field_exhibit_sub_case_grouping_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_exhibit_sub_case_grouping_node']['field'] = 'reverse_field_exhibit_sub_case_grouping_node';
  /* Field: Content: Case Title */
  $handler->display->display_options['fields']['field_exhibit_case_title']['id'] = 'field_exhibit_case_title';
  $handler->display->display_options['fields']['field_exhibit_case_title']['table'] = 'field_data_field_exhibit_case_title';
  $handler->display->display_options['fields']['field_exhibit_case_title']['field'] = 'field_exhibit_case_title';
  $handler->display->display_options['fields']['field_exhibit_case_title']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_case_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_case_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_exhibit_case_title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_exhibit_item_source']['id'] = 'field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['table'] = 'field_data_field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['field'] = 'field_exhibit_item_source';
  $handler->display->display_options['fields']['field_exhibit_item_source']['relationship'] = 'reverse_field_exhibit_sub_case_grouping_node';
  $handler->display->display_options['fields']['field_exhibit_item_source']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_item_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_item_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_item_source']['alter']['text'] = '([field_exhibit_item_source])';
  $handler->display->display_options['fields']['field_exhibit_item_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_item_source']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_exhibit_sub_case_grouping_node';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Image One */
  $handler->display->display_options['fields']['field_exhibit_image_one']['id'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['table'] = 'field_data_field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['field'] = 'field_exhibit_image_one';
  $handler->display->display_options['fields']['field_exhibit_image_one']['relationship'] = 'reverse_field_exhibit_sub_case_grouping_node';
  $handler->display->display_options['fields']['field_exhibit_image_one']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_one']['element_label_colon'] = FALSE;
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
  /* Field: Content: Image Two */
  $handler->display->display_options['fields']['field_exhibit_image_two']['id'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['table'] = 'field_data_field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['field'] = 'field_exhibit_image_two';
  $handler->display->display_options['fields']['field_exhibit_image_two']['relationship'] = 'reverse_field_exhibit_sub_case_grouping_node';
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
  /* Field: Content: Image One Caption */
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['id'] = 'field_exhibit_image_one_caption';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['table'] = 'field_data_field_exhibit_image_one_caption';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['field'] = 'field_exhibit_image_one_caption';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['relationship'] = 'reverse_field_exhibit_sub_case_grouping_node';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['alter']['text'] = '[field_exhibit_image_one_caption] [field_exhibit_item_source]';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_exhibit_image_one_caption']['element_wrapper_class'] = 'caption';
  /* Field: Content: Image Two Caption */
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['id'] = 'field_exhibit_image_two_caption';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['table'] = 'field_data_field_exhibit_image_two_caption';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['field'] = 'field_exhibit_image_two_caption';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['relationship'] = 'reverse_field_exhibit_sub_case_grouping_node';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image_two_caption']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_exhibit_sub_cases_node';
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
    'exhibit_subcase' => 'exhibit_subcase',
  );

  /* Display: Subcase Listings by Case */
  $handler = $view->new_display('panel_pane', 'Subcase Listings by Case', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
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
  $export['subcase_view'] = $view;

  return $export;
}
