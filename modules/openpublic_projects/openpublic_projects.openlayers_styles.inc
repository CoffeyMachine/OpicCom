<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function openpublic_projects_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'project';
  $openlayers_styles->title = 'Project pin';
  $openlayers_styles->description = 'Project pin';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#F6DD49',
    'strokeColor' => '#F6DD49',
    'strokeWidth' => 1,
    'fillOpacity' => 0.3,
    'strokeOpacity' => 0.9,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['project'] = $openlayers_styles;

  return $export;
}
