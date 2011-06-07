<?php

/**
 * Implementation of hook_openlayers_layers().
 */
function openpublic_projects_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'world_glass';
  $openlayers_layers->title = 'World glass';
  $openlayers_layers->description = 'World glass';
  $openlayers_layers->data = array(
    'layername' => 'world-glass',
    'layer_type' => 'openlayers_layer_type_mapbox',
    'osm' => 0,
    'baselayer' => 1,
    'type' => 'png',
    'resolutions' => array(
      0 => 39135.758475,
      1 => 19567.8792375,
      2 => 9783.93961875,
      3 => 4891.969809375,
      4 => 2445.9849046875,
      5 => 1222.9924523438,
      6 => 611.49622617188,
      7 => 305.74811308594,
    ),
    'projection' => array(
      0 => '900913',
    ),
  );
  $export['world_glass'] = $openlayers_layers;

  return $export;
}
