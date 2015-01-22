<?php

/**
 * Implements hook_preprocess_html().
 */

// function pul_versailles_preprocess_html(&$variables) {
//   print_r($variables);
// }

function pul_versailles_html_head_alter(&$head_elements) {
  //print_r($head_elements);
  foreach($head_elements as $key => $value) {
    if (strlen(strstr($key,'canonical'))>0) {
      if(drupal_is_front_page()) {
        $head_elements[$key]['#attributes']['href'] = $base_url . "/versailles";
      } 
    }
    // No idea where the "old" value is being attached
    // so remove it. 
    if (strlen(strstr($key,'old'))>0) {
      unset($head_elements[$key]);
    }
  }
}