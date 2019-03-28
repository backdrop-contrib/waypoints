<?php
/**
 * @file
 *
 *
 *
 * @author Kálmán Hosszu - hosszu.kalman@gmail.com - http://www.kalman-hosszu.com
 */

/**
 * Build waypoints_settings_form form.
 *
 * @param array $form_state
 * @return array The created form.
 */
function waypoints_settings_form($form_state) {
  $form = array();

  $form['waypoints_always_add_js'] = array(
    '#type' => 'checkbox',
    '#title' => t('Always include JavaScript file to the site.'),
    '#default_value' => config_get('waypoints.settings', 'always_add_js'),
  );


  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type'   => 'submit',
    '#value'  => t('Save configuration'),
  );

  return $form;
}

/**
 * Submit handler for waypoints_settings_form().
 */
function waypoints_settings_form_submit($form, &$form_state) {
  config_set('waypoints.settings', 'always_add_js', $form_state['values']['waypoints_always_add_js']);
}