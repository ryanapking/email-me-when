<?php
/**
 * @file
 * custom_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function custom_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-custom_content_type-body'.
  $field_instances['node-custom_content_type-body'] = array(
    'bundle' => 'custom_content_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The is the body help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body With Changes',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 14,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body With Changes');
  t('The is the body help text.');

  return $field_instances;
}
