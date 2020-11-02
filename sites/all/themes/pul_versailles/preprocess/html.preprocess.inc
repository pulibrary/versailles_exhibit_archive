<?php

/**
 * Implements hook_preprocess_html().
 */

// function pul_versailles_preprocess_html(&$variables) {
//   print_r($variables);
// }

function pul_versailles_html_head_alter(&$elements) {
	$core_tags = array(
	  'generator',
	  'shortlink',
	  'shortcut icon',
	);
	foreach ($elements as $name => &$element) {
	  foreach ($core_tags as $tag) {
		if (!empty($element['#attributes']['rel']) && $element['#attributes']['rel'] == $tag) {
		  unset($elements[$name]);
		}
		elseif (!empty($element['#attributes']['name']) && strtolower($element['#attributes']['name']) == $tag) {
		  unset($elements[$name]);
		}
	  }
	}
  }