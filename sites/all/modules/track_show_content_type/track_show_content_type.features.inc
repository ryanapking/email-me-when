<?php
/**
 * @file
 * track_show_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function track_show_content_type_node_info() {
  $items = array(
    'show_tracker' => array(
      'name' => t('Show Tracker'),
      'base' => 'node_content',
      'description' => t('A user tracking a TV show.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
