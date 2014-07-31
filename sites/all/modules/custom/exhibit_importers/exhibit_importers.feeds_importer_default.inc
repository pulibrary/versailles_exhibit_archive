<?php
/**
 * @file
 * exhibit_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function exhibit_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'exhibit_case_importer';
  $feeds_importer->config = array(
    'name' => 'Exhibit Case Importer',
    'description' => 'Import Exhibit Cases',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'field_exhibit_case_title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Case Number',
            'target' => 'field_exhibit_case_number',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Subcases',
            'target' => 'field_exhibit_sub_cases:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'exhibit_case',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['exhibit_case_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'exhibit_item_importer';
  $feeds_importer->config = array(
    'name' => 'Exhibit Item Importer',
    'description' => 'Import Exhibit Items',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'exhibit_rbsc_item',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'image-1',
            'target' => 'field_exhibit_image_one',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'image-2',
            'target' => 'field_exhibit_image_two',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Source',
            'target' => 'field_exhibit_item_source',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'sort',
            'target' => 'field_exhibit_sort_order',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'type',
            'target' => 'field_exhibit_item_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Case',
            'target' => 'field_exhibit_case:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'group',
            'target' => 'field_exhibit_sub_case_grouping:label',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'case-group',
            'target' => 'field_exhibit_case_group_label',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'image caption1',
            'target' => 'field_exhibit_image_one_caption',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'image caption2',
            'target' => 'field_exhibit_image_two_caption',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          14 => array(
            'source' => 'url',
            'target' => 'field_exhibit_item_url:url',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => '1',
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['exhibit_item_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'exhibit_sub_case_importer';
  $feeds_importer->config = array(
    'name' => 'Exhibit Sub Case Importer',
    'description' => 'Imports Subcase descriptions',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'exhibit_subcase',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'field_exhibit_case_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Subcase',
            'target' => 'field_exhibit_case_number',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Subcase',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => '1',
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['exhibit_sub_case_importer'] = $feeds_importer;

  return $export;
}
