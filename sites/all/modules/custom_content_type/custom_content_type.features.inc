<?php
/**
 * @file
 * custom_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function custom_content_type_node_info() {
  $items = array(
    'custom_content_type' => array(
      'name' => t('Custom Content Type'),
      'base' => 'node_content',
      'description' => t('Test that will be exported with Features'),
      'has_title' => '1',
      'title_label' => t('Title With Changes'),
      'help' => t('This is the explanation'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
