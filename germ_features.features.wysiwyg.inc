<?php
/**
 * @file
 * germ_features.features.wysiwyg.inc
 */

/**
 * Implements hook_features_default_wysiwyg().
 */
function germ_features_features_default_wysiwyg() {
  $profiles = array(
    'rich_text_editor' => array(
      'format' => 'rich_text_editor',
      'editor' => 'ckeditor',
      'settings' => array(
        'default' => 1,
        'user_choose' => 0,
        'show_toggle' => 1,
        'theme' => 'advanced',
        'language' => 'en',
        'buttons' => array(
          'default' => array(
            'Bold' => 1,
            'Italic' => 1,
            'Underline' => 1,
            'Strike' => 1,
            'BulletedList' => 1,
            'NumberedList' => 1,
            'Undo' => 1,
            'Redo' => 1,
            'Link' => 1,
            'Image' => 1,
            'Blockquote' => 1,
            'Source' => 1,
            'Table' => 1,
            'Scayt' => 1,
          ),
        ),
        'toolbar_loc' => 'top',
        'toolbar_align' => 'left',
        'path_loc' => 'bottom',
        'resizing' => 1,
        'verify_html' => 1,
        'preformatted' => 0,
        'convert_fonts_to_spans' => 1,
        'remove_linebreaks' => 1,
        'apply_source_formatting' => 0,
        'paste_auto_cleanup_on_paste' => 0,
        'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
        'css_setting' => 'theme',
        'css_path' => '',
        'css_classes' => '',
      ),
    ),
  );

  return $profiles;
}
