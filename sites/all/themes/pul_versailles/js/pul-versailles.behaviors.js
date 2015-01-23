(function ($) {

  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */
  Drupal.theme.prototype.pulVersaillesExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    //return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');

    return $('.views-row a.active').closest('views-row').addClass('active_row');

  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */
  Drupal.behaviors.pulVersaillesExampleBehavior = {
    attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of this behavior to ignore them.
      $('.some-selector', context).once('foo', function () {
        // Now, we are invoking the previously declared theme function using two
        // settings as arguments.
        var $anchor = Drupal.theme('pulVersaillesExampleButton', settings.myExampleLinkPath, settings.myExampleLinkTitle);

        // The anchor is then appended to the current element.
        $anchor.appendTo(this);
      });
    }
  };

  Drupal.behaviors.pulVersaillesMapBehavior = {
    attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of this behavior to ignore them.
      $('.map', context).once('iif-leaflet', function () {
        
        (function(window, document, L, undefined) {
          'use strict';

          L.Icon.Default.imagePath = Drupal.settings.pathToTheme + '/images/markers';

          var BASE_ITEM_URL = '/versailles/item/',
            BASE_MAP = 'http://libimages.princeton.edu/loris2/' +
              'exhibits%2FVersailles%2Fversailles_13%2FImage00120_vert.jp2/info.json',
            THUMBNAIL_SIZE = 250,
            //GEOJSON_URL =  'http://github-raw-cors-proxy.herokuapp.com/' +
            //  'eliotjordan/versailles-demo/gh-pages/app/scripts/map.json';
            GEOJSON_URL = '/versailles/map.json';
          // create leaflet-iiif map
          
          var map = L.map('map', {
            center: [0, 0],
            crs: L.CRS.Simple,
            zoom: 0
          });

          // add Versailles iiif tile layer

          var tileLayer = L.tileLayer.iiif(BASE_MAP, {}).addTo(map);

          // load geojson from server  https://gist.github.com/mazell/8843945
          function loadJSON(jsonUrl,callback) {   
              var xobj = new XMLHttpRequest();
                  xobj.overrideMimeType("application/json");
            xobj.open('GET', jsonUrl, true);
            
            xobj.onreadystatechange = function () {
                    if (xobj.readyState == 4 && xobj.status == "200") {
                      callback(xobj.responseText);
                    }
              };
              xobj.send(null);  
           }

           // parse features in geosjon
          function onEachFeature(feature, layer) {
            var imageUrl = feature.properties.field_image_id,
              thumbnailUrl = '',
              rotation = feature.properties.rotation || 0,
              title = feature.properties.name || '',
              itemUrl = BASE_ITEM_URL + feature.properties.nid,
              thumbnailParams = '';

            // generate thumbnail params
            if (rotation !== 0) {
              // if image needs rotation, swap width and height in image request
              thumbnailParams = 'full/' + ',' + THUMBNAIL_SIZE +
                '/' + rotation + '/native.jpg';
            } else {
              thumbnailParams = 'full/' + THUMBNAIL_SIZE +',' +
                '/' + rotation + '/native.jpg';
            }

            // generate thumbnail url
            if (imageUrl) {

              // strip 'info.json' from iiif url and add thumbnail params
              thumbnailUrl = imageUrl.replace(new RegExp('(.*/)[^/]+$'), '$1') +
                thumbnailParams;
            }

            // format popup
            var popupContent = '<div style="width:' + THUMBNAIL_SIZE + 'px;"">' +
              '<a class="popup" href=' + itemUrl + '>' +
              '<h3 class="popup-text">' + title + '</h3>' +
              '<img src=' + thumbnailUrl + '>' +
              '</a>' + '</div>';
            layer.bindPopup(popupContent, {
              minWidth: THUMBNAIL_SIZE
            });
          }

          // add markers to map after all tiles loaded
          function onTilesLoaded() {

            // load geojson from server
            loadJSON(GEOJSON_URL, function(response) {

              // when ready, parse into JSON object
              var itemJSON = JSON.parse(response);

              // create geojson layer 
              var geoJsonLayer = L.geoJson(itemJSON, {
                style: function(feature) {
                  return feature.properties && feature.properties.style;
                },

                onEachFeature: onEachFeature
              });

              // create marker cluster with non-default params
              var markers = L.markerClusterGroup({
                spiderfyDistanceMultiplier: 3,
                showCoverageOnHover: false
              });

              // add geojson layer to map
              markers.addLayer(geoJsonLayer);
              map.addLayer(markers);
            });
          }
          tileLayer.on('load', onTilesLoaded);
        }(window, document, L));

      });
    }
  };


})(jQuery);
