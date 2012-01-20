<?php
/**
 * @file
 * germ_features.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function germ_features_filter_default_formats() {
  $formats = array();

  // Exported format: Rich Text Editor
  $formats['rich_text_editor'] = array(
    'format' => 'rich_text_editor',
    'name' => 'Rich Text Editor',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(),
  );

  return $formats;
}
