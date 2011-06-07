<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function openpublic_projects_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_projects';
  $context->description = 'Navigation for projects';
  $context->tag = 'Openpublic Navigation';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'projects',
    'menu' => 'projects',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for projects');
  t('Openpublic Navigation');
  $export['nav_projects'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projects_landing_page';
  $context->description = 'Landing page for projects.';
  $context->tag = 'Openpublic Projects';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'project_listing:page_1' => 'project_listing:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-project_listing-block_1' => array(
          'module' => 'views',
          'delta' => 'project_listing-block_1',
          'region' => 'content_prefix',
          'weight' => 0,
        ),
      ),
      'layout' => 'full',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing page for projects.');
  t('Openpublic Projects');
  $export['projects_landing_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projects_page';
  $context->description = 'Single project page';
  $context->tag = 'Openpublic Projects';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-project_listing-block_3' => array(
          'module' => 'views',
          'delta' => 'project_listing-block_3',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'views-project_listing-block_2' => array(
          'module' => 'views',
          'delta' => 'project_listing-block_2',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Openpublic Projects');
  t('Single project page');
  $export['projects_page'] = $context;

  return $export;
}
