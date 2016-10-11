<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a three column bootstrap 4-8-4 panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<div class="panel-display panel-2col-stacked clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="panel-panel panel-col-top row">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  <?php endif ?>

  <div class="row">
    <div class="panel-panel panel-col-first col-sm-3">
      <div class="inside"><?php print $content['left']; ?></div>
    </div>

    <div class="panel-panel panel-col col-sm-9">
      <div class="inside"><?php print $content['right']; ?></div>
    </div>

   
  </div>

  <?php if ($content['bottom']): ?>
    <div class="panel-panel panel-col-bottom row">
      <div class="inside"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif ?>
</div>
