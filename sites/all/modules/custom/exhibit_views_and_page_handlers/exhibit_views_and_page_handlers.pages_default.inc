<?php
/**
 * @file
 * exhibit_views_and_page_handlers.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function exhibit_views_and_page_handlers_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Subcase Listing',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Exhibit Case List [field_exhibit_case_list])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_exhibit_case_list-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Exhibit Case List [field_exhibit_case_list]) 2',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_exhibit_case_list-node-node',
        'delta' => '0',
        'context' => 'relationship_entity_from_field:field_exhibit_case_list-node-node_1',
        'id' => 2,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'exhibit_subcase' => 'exhibit_subcase',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node_2:field-exhibit-case-title',
    'panels_breadcrumbs_paths' => '%node_2:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'golden';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'branding' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'footer' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:field-exhibit-case-title';
  $display->uuid = '36e87238-2dc5-4f6f-9cdf-e326577d36b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-087eb4a4-eaee-42c7-927c-37617425ac87';
    $pane->panel = 'first';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '087eb4a4-eaee-42c7-927c-37617425ac87';
    $display->content['new-087eb4a4-eaee-42c7-927c-37617425ac87'] = $pane;
    $display->panels['first'][0] = 'new-087eb4a4-eaee-42c7-927c-37617425ac87';
    $pane = new stdClass();
    $pane->pid = 'new-0b2794b4-1416-4229-bf57-f5efc3a43ba4';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibit_case_number';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0b2794b4-1416-4229-bf57-f5efc3a43ba4';
    $display->content['new-0b2794b4-1416-4229-bf57-f5efc3a43ba4'] = $pane;
    $display->panels['first'][1] = 'new-0b2794b4-1416-4229-bf57-f5efc3a43ba4';
    $pane = new stdClass();
    $pane->pid = 'new-ee639063-6989-4f50-8dfc-ad5f06249ba9';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibit_item_views-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ee639063-6989-4f50-8dfc-ad5f06249ba9';
    $display->content['new-ee639063-6989-4f50-8dfc-ad5f06249ba9'] = $pane;
    $display->panels['first'][2] = 'new-ee639063-6989-4f50-8dfc-ad5f06249ba9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Exhibit Item Display',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Sub Case Grouping [field_exhibit_sub_case_grouping])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_exhibit_sub_case_grouping-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Case  [field_exhibit_case])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_exhibit_case-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'exhibit_rbsc_item' => 'exhibit_rbsc_item',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node_3:field-exhibit-case-title
%node_2:field-exhibit-case-title',
    'panels_breadcrumbs_paths' => '%node_3:url
%node_2:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0746a651-45fc-49d2-9fe1-bd417b95a66e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3541e9e2-4dca-447f-956d-9a625aec6a27';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibit_item_views-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3541e9e2-4dca-447f-956d-9a625aec6a27';
    $display->content['new-3541e9e2-4dca-447f-956d-9a625aec6a27'] = $pane;
    $display->panels['left'][0] = 'new-3541e9e2-4dca-447f-956d-9a625aec6a27';
    $pane = new stdClass();
    $pane->pid = 'new-560eee98-42af-4adf-bda6-25e86e97d49a';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibit_image_one_caption';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '560eee98-42af-4adf-bda6-25e86e97d49a';
    $display->content['new-560eee98-42af-4adf-bda6-25e86e97d49a'] = $pane;
    $display->panels['middle'][0] = 'new-560eee98-42af-4adf-bda6-25e86e97d49a';
    $pane = new stdClass();
    $pane->pid = 'new-70fe17a7-fa00-4688-91a1-70e4c0a88fff';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibit_item_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '70fe17a7-fa00-4688-91a1-70e4c0a88fff';
    $display->content['new-70fe17a7-fa00-4688-91a1-70e4c0a88fff'] = $pane;
    $display->panels['middle'][1] = 'new-70fe17a7-fa00-4688-91a1-70e4c0a88fff';
    $pane = new stdClass();
    $pane->pid = 'new-17f2bd22-1d72-4bf9-b845-00f1092db126';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibit_item_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '17f2bd22-1d72-4bf9-b845-00f1092db126';
    $display->content['new-17f2bd22-1d72-4bf9-b845-00f1092db126'] = $pane;
    $display->panels['middle'][2] = 'new-17f2bd22-1d72-4bf9-b845-00f1092db126';
    $pane = new stdClass();
    $pane->pid = 'new-c08f42e9-d9e7-4101-84df-6bd15b0f6739';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibit_item_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c08f42e9-d9e7-4101-84df-6bd15b0f6739';
    $display->content['new-c08f42e9-d9e7-4101-84df-6bd15b0f6739'] = $pane;
    $display->panels['right'][0] = 'new-c08f42e9-d9e7-4101-84df-6bd15b0f6739';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3541e9e2-4dca-447f-956d-9a625aec6a27';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Top Level Exhibit Case',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Sub Cases [field_exhibit_sub_cases])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_exhibit_sub_cases-node-node',
        'delta' => '0',
        'context' => 'relationship_entity_from_field:field_exhibit_sub_cases-node-node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'exhibit_case' => 'exhibit_case',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:field-exhibit-case-title';
  $display->uuid = '3632494f-a8e6-4a04-8171-44616cac83b2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d6a2727d-0116-4673-b14f-726db0524c4d';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6a2727d-0116-4673-b14f-726db0524c4d';
    $display->content['new-d6a2727d-0116-4673-b14f-726db0524c4d'] = $pane;
    $display->panels['left'][0] = 'new-d6a2727d-0116-4673-b14f-726db0524c4d';
    $pane = new stdClass();
    $pane->pid = 'new-90623804-1b06-4e5b-b97d-fe20bb6be206';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-exhibit-top-level-case-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Exhibition Menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '90623804-1b06-4e5b-b97d-fe20bb6be206';
    $display->content['new-90623804-1b06-4e5b-b97d-fe20bb6be206'] = $pane;
    $display->panels['left'][1] = 'new-90623804-1b06-4e5b-b97d-fe20bb6be206';
    $pane = new stdClass();
    $pane->pid = 'new-4b4ea09d-5518-4fef-b69b-166f96db1db6';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4b4ea09d-5518-4fef-b69b-166f96db1db6';
    $display->content['new-4b4ea09d-5518-4fef-b69b-166f96db1db6'] = $pane;
    $display->panels['right'][0] = 'new-4b4ea09d-5518-4fef-b69b-166f96db1db6';
    $pane = new stdClass();
    $pane->pid = 'new-1d0c0a97-131c-4602-9ae4-3957a50d35d8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibit_sub_cases';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'links' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1d0c0a97-131c-4602-9ae4-3957a50d35d8';
    $display->content['new-1d0c0a97-131c-4602-9ae4-3957a50d35d8'] = $pane;
    $display->panels['right'][1] = 'new-1d0c0a97-131c-4602-9ae4-3957a50d35d8';
    $pane = new stdClass();
    $pane->pid = 'new-5a21ad1e-f63f-4c21-88e7-8bcdc427f61e';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibit_items_top_level_cases-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5a21ad1e-f63f-4c21-88e7-8bcdc427f61e';
    $display->content['new-5a21ad1e-f63f-4c21-88e7-8bcdc427f61e'] = $pane;
    $display->panels['right'][2] = 'new-5a21ad1e-f63f-4c21-88e7-8bcdc427f61e';
    $pane = new stdClass();
    $pane->pid = 'new-28b0cc6c-7159-4438-9bb9-9e1b1b70c11e';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'subcase_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '28b0cc6c-7159-4438-9bb9-9e1b1b70c11e';
    $display->content['new-28b0cc6c-7159-4438-9bb9-9e1b1b70c11e'] = $pane;
    $display->panels['right'][3] = 'new-28b0cc6c-7159-4438-9bb9-9e1b1b70c11e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4b4ea09d-5518-4fef-b69b-166f96db1db6';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Exhibit Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'exhibition_landing_page' => 'exhibition_landing_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '073d273b-7d24-4fe8-80c2-70a7e163e1b2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-305eea85-0f01-4dd1-bc35-9ac6cbe413d0';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '305eea85-0f01-4dd1-bc35-9ac6cbe413d0';
    $display->content['new-305eea85-0f01-4dd1-bc35-9ac6cbe413d0'] = $pane;
    $display->panels['left'][0] = 'new-305eea85-0f01-4dd1-bc35-9ac6cbe413d0';
    $pane = new stdClass();
    $pane->pid = 'new-fa919a33-fc46-4b33-96c5-970e04ffa670';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-exhibit-top-level-case-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Exhibition Menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa919a33-fc46-4b33-96c5-970e04ffa670';
    $display->content['new-fa919a33-fc46-4b33-96c5-970e04ffa670'] = $pane;
    $display->panels['left'][1] = 'new-fa919a33-fc46-4b33-96c5-970e04ffa670';
    $pane = new stdClass();
    $pane->pid = 'new-22d7b5f4-5425-439f-9cb7-d1012d4531f5';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'exhibition_credits',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '22d7b5f4-5425-439f-9cb7-d1012d4531f5';
    $display->content['new-22d7b5f4-5425-439f-9cb7-d1012d4531f5'] = $pane;
    $display->panels['left'][2] = 'new-22d7b5f4-5425-439f-9cb7-d1012d4531f5';
    $pane = new stdClass();
    $pane->pid = 'new-34628a6c-c4fc-4e4b-a54e-334454c8e9a9';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34628a6c-c4fc-4e4b-a54e-334454c8e9a9';
    $display->content['new-34628a6c-c4fc-4e4b-a54e-334454c8e9a9'] = $pane;
    $display->panels['right'][0] = 'new-34628a6c-c4fc-4e4b-a54e-334454c8e9a9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-34628a6c-c4fc-4e4b-a54e-334454c8e9a9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
