<?php
// $Id$
/**
 * @file page.footer.inc
 * Footer template.
 * @ingroup page
 */
?>


</div><!--/wrap-inner-->
</div><!--/wrap-->


  <div id="footer" class="clearfix clear">
  <div id="footer-inner" class="center-on-page clearfix">

    <div id="footer-nav">
      <div class="clearfix">
        <?php print drupal_render($footer_menu); ?>
      </div>
      <?php print render($page['footer']); ?>
      
    </div>
    <?php print $footer_utility ?>
    
  </div><!--/footer inner-->
    
  </div><!--/#footer-->

</div><!--/page wrapper-->

