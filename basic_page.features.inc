<?php

/**
 * Implementation of hook_content_default_fields().
 */
function basic_page_content_default_fields() {
  module_load_include('inc', 'basic_page', 'basic_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_basic_page_content_default_fields', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function basic_page_fieldgroup_default_groups() {
  module_load_include('inc', 'basic_page', 'basic_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_basic_page_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_node_info().
 */
function basic_page_node_info() {
  module_load_include('inc', 'basic_page', 'basic_page.features.node');
  $args = func_get_args();
  return call_user_func_array('_basic_page_node_info', $args);
}
