<?php 

/**
 *  Provides a simple field for easily embedding images from IIIF Image Servers (currently supports Image API 2.0 only, with plans to support previous versions)
 *
 *  This module is not intended to replace media - it does not allow for any local storage of images, custom players or anything else
 *  It simply allows users to embed images from IIIF Image Servers - and provides a hook to allow other modules to provide more providers.
 *
 *  @author shaune
 */

/**
 *  Implementation of hook_field_info
 *  Define the fields we're creating
 */
function iiif_image_field_field_info(){
  return array(
    'iiif_image_field' => array(
      'label' => 'IIIF Image Embed',
      'description' => 'Embed images from IIIF Image Server',
      'settings' => array(
        //no settings currently - not sure what we need
      ),
      'instance_settings' => array(
        'allowed_types' => array('libimages')
      ),
      'default_widget' => 'iiif_image_field_widget',
      'default_formatter' => 'iiif_image_field_formatter',
    )
  );
}