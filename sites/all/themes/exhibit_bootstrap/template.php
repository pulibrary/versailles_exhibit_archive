<?php

/**
 * @file
 * template.php
 */

function exhibit_bootstrap_preprocess_link(&$variables) {
  if (strpos($variables['path'], 'loris') !== FALSE){
  	$variables['text'] = '<img src="' . $variables['path'] . '" alt="' . $variables['text'] . '" title="' . $variables['text'] . '"/>';
  }

}