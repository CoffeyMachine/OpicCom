<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function openpublic_projects_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'project_map';
  $openlayers_presets->title = 'Project map';
  $openlayers_presets->description = 'A map showing all projects';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'http://js.mapbox.com/theme/dark/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-97.382812,37.178873',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '-23054631.204743,-8639218.683361,26074199.083957,17346924.944039',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_plus_behavior_scalepoints' => array(
        'min' => array(
          'value' => '0',
          'pointRadius' => '5',
          'fillOpacity' => '',
          'strokeWidth' => '',
        ),
        'max' => array(
          'value' => '',
          'pointRadius' => '20',
          'fillOpacity' => '',
          'strokeWidth' => '',
        ),
        'method' => 'area',
        'distinct' => '5',
        'fields' => 'count',
        'min_label' => '-1',
      ),
      'openlayers_plus_behavior_popup' => array(),
    ),
    'default_layer' => 'world_glass',
    'layers' => array(
      'world_glass' => 'world_glass',
      'project_listing_openlayers_1' => 'project_listing_openlayers_1',
      'project_listing_openlayers_2' => 0,
    ),
    'layer_styles' => array(
      'project_listing_openlayers_1' => 'project',
      'project_listing_openlayers_2' => '0',
    ),
    'layer_activated' => array(
      'project_listing_openlayers_1' => 'project_listing_openlayers_1',
      'project_listing_openlayers_2' => 0,
    ),
    'layer_switcher' => array(
      'project_listing_openlayers_1' => 0,
      'project_listing_openlayers_2' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'airport',
      'select' => 'airport',
      'temporary' => 'airport',
    ),
  );
  $export['project_map'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'project_map_detail';
  $openlayers_presets->title = 'Project map (detail)';
  $openlayers_presets->description = 'A map showing a single project';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '180px',
    'image_path' => 'http://js.mapbox.com/theme/dark/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-97.382812,37.178873',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '-23054631.204743,-8639218.683361,26074199.083957,17346924.944039',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'project_listing_openlayers_2',
        'point_zoom_level' => '3',
      ),
      'openlayers_plus_behavior_scalepoints' => array(
        'min' => array(
          'value' => '0',
          'pointRadius' => '5',
          'fillOpacity' => '',
          'strokeWidth' => '',
        ),
        'max' => array(
          'value' => '',
          'pointRadius' => '20',
          'fillOpacity' => '',
          'strokeWidth' => '',
        ),
        'method' => 'area',
        'distinct' => '5',
        'fields' => 'count, weight',
        'min_label' => '-1',
      ),
    ),
    'default_layer' => 'world_glass',
    'layers' => array(
      'world_glass' => 'world_glass',
      'project_listing_openlayers_2' => 'project_listing_openlayers_2',
      'project_listing_openlayers_1' => 0,
    ),
    'layer_styles' => array(
      'project_listing_openlayers_2' => 'project',
      'project_listing_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'project_listing_openlayers_2' => 'project_listing_openlayers_2',
      'project_listing_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'project_listing_openlayers_1' => 0,
      'project_listing_openlayers_2' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'airport',
      'select' => 'airport',
      'temporary' => 'airport',
    ),
  );
  $export['project_map_detail'] = $openlayers_presets;

  return $export;
}
