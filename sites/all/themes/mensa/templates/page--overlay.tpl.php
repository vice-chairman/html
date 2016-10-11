
	
		
		
		
		<?php 
		
		$uri =  request_uri();  
		$pos = strrpos($uri, "http");
		$pos = $pos += 7;
		$rest = substr($uri, $pos);
		
		?>
		<table cellpadding="0" cellspacing="0" id="table_img_hack">
			<tr>
				<td valign="middle">
					<img src="http://<?php print $rest; ?>">
				</td>
			</tr>
		</table>