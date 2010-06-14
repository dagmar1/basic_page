<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _basic_page_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'module' => 'features',
      'description' => t('A page, similar in form to a story, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a page entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
