<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>

<?php if ($view_mode == 'media_object'):?>
  <div id="node-<?php print $node->nid; ?>" class="media" <?php print $attributes; ?>>

    <a href="<?php print $node_url; ?>" class="img">
      <?php if (!empty($node->field_iiif_image['und'][0]['iiif_image_id'])):
        $rotation = 0;
        if(!empty($node->field_iiif_image['und'][0]['iiif_image_rotation'])){ $rotation = $node->field_iiif_image['und'][0]['iiif_image_rotation']; }
        $hw = "200,";
        if($rotation == 90 || $rotation == 270){ $hw = ",200"; }
      ?>
        <img src="http://libimages.princeton.edu/loris/<?php print $node->field_iiif_image['und'][0]['iiif_image_id']; ?>/full/<?php print $hw; ?>/<?php print $rotation; ?>/native.jpg" alt="<?php print $title; ?>" />
      <?php endif; ?>
    </a>

    <div class="bd">
      <h3><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
      <?php print render($content);?>
    </div>

  </div>
<?php endif; ?>
<?php if ($view_mode != 'media_object'):?>
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

<?php 
      print "<div class='prev-next-wrapper'>";      
      $curIndex = $node->field_exhibit_sort_order['und'][0][value];
      $curCase = $node->field_exhibit_case['und'][0][target_id];

      $queryPrev = new EntityFieldQuery();

      $queryPrev->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'exhibit_rbsc_item')
        ->propertyCondition('status', NODE_PUBLISHED)
        ->fieldCondition('field_exhibit_case', 'target_id', $curCase, '=')
        ->fieldCondition('field_exhibit_sort_order', 'value', $curIndex, '<')
        ->fieldOrderBy('field_exhibit_sort_order', 'value', 'DESC')
        ->range(0, 1)
        ->addMetaData('account', user_load(1)); // Run the query as user 1.

      $result = $queryPrev->execute();

      if (isset($result['node'])) {
        $prev_nid = array_keys($result['node']);
        print "<a class='prev-button' title='Previous Exhibit Item' href='" . $prev_nid[0] . "'><i class='fa fa-chevron-left'></i></a>";
      }

      $queryNext = new EntityFieldQuery();

      $queryNext->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'exhibit_rbsc_item')
        ->propertyCondition('status', NODE_PUBLISHED)
        ->fieldCondition('field_exhibit_case', 'target_id', $curCase, '=')
        ->fieldCondition('field_exhibit_sort_order', 'value', $curIndex, '>')
        ->fieldOrderBy('field_exhibit_sort_order', 'value', 'ASC')
        ->range(0, 1)
        ->addMetaData('account', user_load(1)); // Run the query as user 1.

      $result = $queryNext->execute();

      if (isset($result['node'])) {
        $next_nid = array_keys($result['node']);
        print "<a class='next-button' title='Next Exhibit Item' href='" . $next_nid[0] . "'><i class='fa fa-chevron-right'></i></a>";
      }

      print "</div>"; 

     ?>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>>
        <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
      </h2>
    <?php endif; ?>



    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
      <div class="meta submitted">
        <?php print $user_picture; ?>
        <?php print $submitted; ?>
      </div>
    <?php endif; ?>

    

    <div class="content clearfix"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        print render($content);
      ?>
    </div>

    <?php
      // Remove the "Add new comment" link on the teaser page or if the comment
      // form is being displayed on the same page.
      if ($teaser || !empty($content['comments']['comment_form'])) {
        unset($content['links']['comment']['#links']['comment-add']);
      }
      // Only display the wrapper div if there are links.
      $links = render($content['links']);
      if ($links):
    ?>
      <div class="link-wrapper">
        <?php print $links; ?>
      </div>
    <?php endif; ?>

    <?php print render($content['comments']); ?>

  </div>
<?php endif; ?>