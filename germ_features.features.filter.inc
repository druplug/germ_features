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

  // Exported format: PHP code
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => '0',
    'status' => '1',
    'weight' => '11',
    'filters' => array(
      'php_code' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

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
