<?php
/**
 * @file
 * Default theme implementation to display a IIIF image field.
 *
 * Variables available:
 * - $iiif_image_id: The ID of the IIIF Image to display 
 * - $embed_code: The embed code
 *
 */
?>
<pre>
<?php 
  print_r($field);
?>
</pre>
<div style="border: 1px solid red">
<?php 
  print_r($field);
  extract($element);
  print "<img src='http://libimages.princeton.edu/loris/" . $iiif_image_id . "/full/200,/90/native.jpg'/>";
?>
</div>
