<?php

/**
 * @file
 * template.php
 */

function exhibit_bootstrap_preprocess_link(&$variables) {
  if (strpos($variables['path'], 'loris') !== FALSE){
  	$variables['text'] = '<img class="thumbnail" src="' . $variables['path'] . '" alt="' . $variables['text'] . '" title="' . $variables['text'] . '"/>';
  	$p = str_replace("http://libimages.princeton.edu/loris/", "http://diglib.princeton.edu/tools/ib/", $variables['path']);
  	$pos = strpos($variables['path'], 'full/');
  	$p = substr($p, 0, $pos);
  	$rpos = strrpos($p, '%2F', 0);
  	$variables['path'] = urldecode(substr($p, 0, $rpos));
  }

}