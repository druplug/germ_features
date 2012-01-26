<?php
/**
 * @file
 * germ_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function germ_features_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'issues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'issues';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_assign_to' => 'field_assign_to',
    'field_status' => 'field_status',
    'field_priority' => 'field_priority',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_assign_to' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_priority' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Id';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Assign To */
  $handler->display->display_options['fields']['field_assign_to']['id'] = 'field_assign_to';
  $handler->display->display_options['fields']['field_assign_to']['table'] = 'field_data_field_assign_to';
  $handler->display->display_options['fields']['field_assign_to']['field'] = 'field_assign_to';
  $handler->display->display_options['fields']['field_assign_to']['label'] = 'Assigned to';
  $handler->display->display_options['fields']['field_assign_to']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_assign_to']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_assign_to']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_assign_to']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_assign_to']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_assign_to']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_assign_to']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_status']['field_api_classes'] = 0;
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_priority']['id'] = 'field_priority';
  $handler->display->display_options['fields']['field_priority']['table'] = 'field_data_field_priority';
  $handler->display->display_options['fields']['field_priority']['field'] = 'field_priority';
  $handler->display->display_options['fields']['field_priority']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_priority']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_priority']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_priority']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_priority']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_priority']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_priority']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_priority']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_priority']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_priority']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Project (field_project) */
  $handler->display->display_options['arguments']['field_project_nid']['id'] = 'field_project_nid';
  $handler->display->display_options['arguments']['field_project_nid']['table'] = 'field_data_field_project';
  $handler->display->display_options['arguments']['field_project_nid']['field'] = 'field_project_nid';
  $handler->display->display_options['arguments']['field_project_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_project_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project_nid']['not'] = 0;
  /* Filter criterion: Content: Roadmap (field_roadmap) */
  $handler->display->display_options['filters']['field_roadmap_nid']['id'] = 'field_roadmap_nid';
  $handler->display->display_options['filters']['field_roadmap_nid']['table'] = 'field_data_field_roadmap';
  $handler->display->display_options['filters']['field_roadmap_nid']['field'] = 'field_roadmap_nid';
  $handler->display->display_options['filters']['field_roadmap_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_roadmap_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_roadmap_nid']['expose']['operator_id'] = 'field_roadmap_nid_op';
  $handler->display->display_options['filters']['field_roadmap_nid']['expose']['label'] = 'Roadmap';
  $handler->display->display_options['filters']['field_roadmap_nid']['expose']['operator'] = 'field_roadmap_nid_op';
  $handler->display->display_options['filters']['field_roadmap_nid']['expose']['identifier'] = 'field_roadmap_nid';
  $handler->display->display_options['filters']['field_roadmap_nid']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Priority (field_priority) */
  $handler->display->display_options['filters']['field_priority_tid']['id'] = 'field_priority_tid';
  $handler->display->display_options['filters']['field_priority_tid']['table'] = 'field_data_field_priority';
  $handler->display->display_options['filters']['field_priority_tid']['field'] = 'field_priority_tid';
  $handler->display->display_options['filters']['field_priority_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_priority_tid']['value'] = array(
    8 => '8',
    7 => '7',
    9 => '9',
  );
  $handler->display->display_options['filters']['field_priority_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_priority_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_priority_tid']['expose']['operator_id'] = 'field_priority_tid_op';
  $handler->display->display_options['filters']['field_priority_tid']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_priority_tid']['expose']['operator'] = 'field_priority_tid_op';
  $handler->display->display_options['filters']['field_priority_tid']['expose']['identifier'] = 'field_priority_tid';
  $handler->display->display_options['filters']['field_priority_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_priority_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_priority_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_priority_tid']['vocabulary'] = 'priority';
  $handler->display->display_options['filters']['field_priority_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_priority_tid']['error_message'] = 1;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    6 => '6',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['error_message'] = 1;
  /* Filter criterion: Content: Assign To (field_assign_to) */
  $handler->display->display_options['filters']['field_assign_to_uid']['id'] = 'field_assign_to_uid';
  $handler->display->display_options['filters']['field_assign_to_uid']['table'] = 'field_data_field_assign_to';
  $handler->display->display_options['filters']['field_assign_to_uid']['field'] = 'field_assign_to_uid';
  $handler->display->display_options['filters']['field_assign_to_uid']['group'] = 1;
  $handler->display->display_options['filters']['field_assign_to_uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_assign_to_uid']['expose']['operator_id'] = 'field_assign_to_uid_op';
  $handler->display->display_options['filters']['field_assign_to_uid']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_assign_to_uid']['expose']['operator'] = 'field_assign_to_uid_op';
  $handler->display->display_options['filters']['field_assign_to_uid']['expose']['identifier'] = 'field_assign_to_uid';
  $handler->display->display_options['filters']['field_assign_to_uid']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Project (field_project) */
  $handler->display->display_options['arguments']['field_project_nid']['id'] = 'field_project_nid';
  $handler->display->display_options['arguments']['field_project_nid']['table'] = 'field_data_field_project';
  $handler->display->display_options['arguments']['field_project_nid']['field'] = 'field_project_nid';
  $handler->display->display_options['arguments']['field_project_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_project_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project_nid']['not'] = 0;
  $handler->display->display_options['path'] = 'issues';
  $handler->display->display_options['menu']['title'] = 'Issues';
  $handler->display->display_options['menu']['description'] = 'issues in this project';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $export['issues'] = $view;

  $view = new view;
  $view->name = 'roadmaps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'roadmaps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'roadmaps';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Roadmap';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_start_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'roadmap',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_start_date']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Project (field_project) */
  $handler->display->display_options['arguments']['field_project_nid']['id'] = 'field_project_nid';
  $handler->display->display_options['arguments']['field_project_nid']['table'] = 'field_data_field_project';
  $handler->display->display_options['arguments']['field_project_nid']['field'] = 'field_project_nid';
  $handler->display->display_options['arguments']['field_project_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_project_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project_nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'roadmap' => 'roadmap',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'roadmaps';
  $export['roadmaps'] = $view;

  return $export;
}
