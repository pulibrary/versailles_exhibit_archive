<?php
/**
 * @file
 * versailles_contributor_pages_and_views.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function versailles_contributor_pages_and_views_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Contributor',
    'no_blocks' => 0,
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
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'contributor' => 'contributor',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '88af693c-44c9-4be9-ba1a-202467821f6d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-822c0147-a07f-47f6-a6bc-72f8be754eed';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '822c0147-a07f-47f6-a6bc-72f8be754eed';
    $display->content['new-822c0147-a07f-47f6-a6bc-72f8be754eed'] = $pane;
    $display->panels['middle'][0] = 'new-822c0147-a07f-47f6-a6bc-72f8be754eed';
    $pane = new stdClass();
    $pane->pid = 'new-bfc78a5e-ec7c-4636-86e2-3454f7f01177';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ver_related_items-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bfc78a5e-ec7c-4636-86e2-3454f7f01177';
    $display->content['new-bfc78a5e-ec7c-4636-86e2-3454f7f01177'] = $pane;
    $display->panels['middle'][1] = 'new-bfc78a5e-ec7c-4636-86e2-3454f7f01177';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-822c0147-a07f-47f6-a6bc-72f8be754eed';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  return $export;
}
