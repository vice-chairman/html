
      
      <?php hide($content['links']); ?>
      
      <h2<?php print $title_attributes; ?> class="news_header"><?php print $title; ?></h2>
       <?php print render($content['field_news_image']); ?>
       
      <br>
      <small><p><span class="glyphicon glyphicon-pencil"></span> <?php print $date; ?> </p></small><br>
      
     
      
      
	    
	  
	  
      <?php print render($content['body']); ?>
      <?php print render($content['comments']); ?>

   