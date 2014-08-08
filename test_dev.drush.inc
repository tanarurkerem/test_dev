<?php

/**
 * Implementation of hook_drush_command().
 */
function test_dev_drush_command() {
  $items = array();
  $items['build'] = array(
    'description' => 'Build a drupal project',
    'arguments' => array(),
    'options' => array(),
    'examples' => array(
    'drush build' => 'Build a project'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );
  return $items;
}

function drush_test_dev_build() {
  drush_shell_exec('rm -rf www');
  drush_shell_exec('drush make test_dev/build.make www');
}
