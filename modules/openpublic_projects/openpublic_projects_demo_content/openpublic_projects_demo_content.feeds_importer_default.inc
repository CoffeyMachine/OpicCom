<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function openpublic_projects_demo_content_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'openpublic_projects_demo_location';
  $feeds_importer->config = array(
    'name' => 'Project location import',
    'description' => 'Imports Open Public Project Locations for demonstration',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'location',
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'lat',
            'target' => 'field_location:lat',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'lon',
            'target' => 'field_location:lon',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['openpublic_project_location_demo'] = $feeds_importer;

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'openpublic_projects_demo';
  $feeds_importer->config = array(
    'name' => 'Project import',
    'description' => 'Imports Open Public Projects for demonstration',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
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
        'content_type' => 'project',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'location',
            'target' => 'field_geoterm',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'attribution_url',
            'target' => 'field_project_attribution:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'attribution_name',
            'target' => 'field_project_attribution:title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'picture',
            'target' => 'field_project_image',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['openpublic_projects_demo'] = $feeds_importer;

  return $export;
}
