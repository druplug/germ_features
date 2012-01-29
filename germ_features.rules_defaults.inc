<?php
/**
 * @file
 * germ_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function germ_features_default_rules_configuration() {
  $items = array();
  $items['rules_issue_atomatic_title'] = entity_import('rules_config', '{ "rules_issue_atomatic_title" : {
      "LABEL" : "issue atomatic title",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "issue" : "issue" } } } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "$node = node_load([node:nid]);\\r\\n$node-\\u003etitle = \'[node:field_project]-[node:field_id]\';\\r\\nnode_save($node);\\r\\n" } }
      ]
    }
  }');
  return $items;
}
