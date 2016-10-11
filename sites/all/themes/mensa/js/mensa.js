// We define a function that takes one parameter named $.
(function ($) {
 
$(document).ready(function(){
	
	/*
$(".editable_field_container a.submit_inline_form").click(function(){
		
		$(this).closest('.editable_field_container').find('button').trigger('click');
		$(this).closest('.editable_field_container').find('input').attr('disabled', 'disabled');
		return false;
	});
	
	$('.editable_field_container').on('DOMNodeInserted', function(e) {
		//$(this).css('background', '#eee');
		//$('body').append('test - ');
		
	});
*/
	
	/*
$("a.submit_forms").click(function(){
		
		$('.editable_field_container').find('button').trigger('click');
		$('.editable_field_container').find('input').attr('disabled', 'disabled');
		return false;
	});
*/
	
	$('.editablefield-item select').live('change', function(){
		$(this).closest('.editablefield-item ').find('button').trigger('click');
		$(this).closest('.editablefield-item ').find('input').attr('disabled', 'disabled');
		//$(this).closest('.editablefield-item').css('background', 'red');
	});
	
	$('.editablefield-item input').live('change', function(){
	
		$(this).closest('.editablefield-item ').find('button').trigger('click');
		$(this).closest('.editablefield-item ').find('input').attr('disabled', 'disabled');
		
		
		//$(this).closest('.editablefield-item').css('background', 'red');
	});
	
	/*
$("#views-form-test-examiner-send-mails-page-1 > div > div > button").click(function(event){
		event.preventDefault();
		$('.editablefield-item ').find('button').trigger('click');
		$('.editablefield-item ').find('input').attr('disabled', 'disabled');
		//$("#views-form-test-examiner-send-mails-page-1").submit();
	});
*/
	
	//Build calendar filter
	
	$(".page-event-calendar .view-filters #edit-field-locsec-area-tid option").each(function() {
		$(".page-event-calendar .view-header #region_filter").append('<p class="pull-left"><span style="width: 10px; height: 10px; display: inline-block;" class="_' + $(this).val() + '"></span>' + $(this).text() + ' <input class="region-checkbox" type="checkbox" name="' + $(this).text() + '" value="' + $(this).val() + '"></p>');
		//alert($(this).text());
		
	});
	//Fix calendar exposed filter to use checkboxes
	
	$("#edit-field-locsec-area-tid option").each(function() {
		var optionVal = $(this).val();
		var optionName = $(this).text();
		if($(this).is(':selected')) {
			var selected = true;
		}else{
			var selected = false;
		}
		
		//alert(selected + ".region-checkbox[value='" + optionVal + "']" );
		$(".region-checkbox[value='" + optionVal + "']").prop('checked', selected);
	//$(".views-exposed-widgets").prepend('<p class=" pull-left"><input class="region-checkbox" type="checkbox" name="' + optionName + '" value="' + optionVal + '" ' + selected + '> ' + optionName + '</p>');
	});
	
	$(".region-checkbox").on('click', function() {
		
		var clickedVal = $(this).val();
		
		if ($(this).is(':checked')){
			$("#edit-field-locsec-area-tid").find('option[value=' + clickedVal + ']').attr('selected', 'selected');
			
		}else{
			$("#edit-field-locsec-area-tid").find('option[value=' + clickedVal + ']').removeAttr('selected');
			
		}
		
		//$("#views-exposed-form-calendar-page-1").submit();
	});
	
	//Fix calendar form action to always include date
	
	/*
if ( $("body").hasClass('page-event-calendar-year') ){
		
		$("#views-exposed-form-calendar-page").attr('action', '');
		
	}else if ( $("body").hasClass('page-event-calendar-month') ){
		
		$("#views-exposed-form-calendar-page-1").attr('action', '');
		
	}else if ( $("body").hasClass('page-event-calendar-week') ){
	
		$("#views-exposed-form-calendar-page-2").attr('action', '');
		
	}else if ( $("body").hasClass('page-event-calendar-day') ){
	
		$("#views-exposed-form-calendar-page-3").attr('action', '');
	}
*/

	//Photoalbum
	
	$("body.page-mensa-shop .product-info a").each(function(){
		$galleryId = '#blueimp-gallery-' + $(this).parent().attr('id');
		$(this).attr('data-gallery', $galleryId);
	});
	
	
	$("body.page-photo-gallery- .view-content a").attr('data-gallery', '');
	
	
	
	
	/*
$("table#table_img_hack td").click(function(e){
		if(e.target != this) return;
		$("#overlay").fadeOut('200');
		$("#overlay_inner").html('');
		$("body.page-photo-gallery- .view-content a.active").removeClass('active');
	});
*/
	$("#overlay_close").click(function(e){
		$("#overlay").fadeOut(200);
		$("#overlay_inner").html('');
		$("body.page-photo-gallery- .view-content a.active").removeClass('active');
	});
	
	$("#overlay_prev").click(function(){
		$("#overlay_inner").fadeOut(200);
		
		if ( $("body.page-photo-gallery- .view-content a.active").parent().prev().find('a').length ){
			var newImg = $("body.page-photo-gallery- .view-content a.active").parent().prev().find('a').attr('href');
			$("body.page-photo-gallery- .view-content a.active").parent().prev().find('a').addClass("new_active");
		}else{
			var newImg = $("body.page-photo-gallery- .view-content > div:last-child a").attr('href');
			$("body.page-photo-gallery- .view-content > div:last-child a").addClass("new_active");
		}
		$("#overlay_inner").load('/photo-gallery/*/' + newImg + '', function(){
			$("#overlay_inner").fadeIn(200);
		});
		$("body.page-photo-gallery- .view-content a.active").addClass("temp_active");
		$("body.page-photo-gallery- .view-content a.active").removeClass('active');
		$("body.page-photo-gallery- .view-content a.new_active").addClass('active');
		$("body.page-photo-gallery- .view-content a.new_active").removeClass('new_active');
		$("body.page-photo-gallery- .view-content a.temp_active").removeClass('temp_active');
	});
	
	$("#overlay_next").click(function(){
		$("#overlay_inner").fadeOut(200);
		if ( $("body.page-photo-gallery- .view-content a.active").parent().next().find('a').length ){
			var newImg = $("body.page-photo-gallery- .view-content a.active").parent().next().find('a').attr('href');
			$("body.page-photo-gallery- .view-content a.active").parent().next().find('a').addClass("new_active");
		}else{
			var newImg = $("body.page-photo-gallery- .view-content > div:first-child a").attr('href');
			$("body.page-photo-gallery- .view-content > div:first-child a").addClass("new_active");
		}
		$("#overlay_inner").load('/photo-gallery/*/' + newImg + '', function(){
			$("#overlay_inner").fadeIn(200);
		});
		$("body.page-photo-gallery- .view-content a.active").addClass("temp_active");
		$("body.page-photo-gallery- .view-content a.active").removeClass('active');
		$("body.page-photo-gallery- .view-content a.new_active").addClass('active');
		$("body.page-photo-gallery- .view-content a.new_active").removeClass('new_active');
		$("body.page-photo-gallery- .view-content a.temp_active").removeClass('temp_active');
	});
	
	//Set tabindex for input fields for Test Coordinator

	/*
$(".page-test-coordinator-new-testees input").each(function(index){
		$(this).attr('tabindex', index);
	});
*/
	
	//Make bagground f new forum comments yellow
	$("body.node-type-forum .new").closest('.forum-post').css('background', '#fffeee');
	
	//Shopping cart show hide
	
	$(".commerce-add-to-cart .form-submit").on('click', function(){
		$.cookie("cart", "added");
	});
	
	
	
	/*
if ($("body").hasClass('page-mensa-shop')){	
		//Check if product just was added
		var cartCookie = $.cookie("cart");
		if ( cartCookie == "added"){
			$("#block-commerce-cart-cart .view-content, #block-commerce-cart-cart .view-footer").css('display', 'block');
			setTimeout(function() {
				$("#block-commerce-cart-cart .view-content, #block-commerce-cart-cart .view-footer").fadeOut(700);
			}, 3000);
			$.cookie("cart", "");
		}else if (cartCookie == 'removed'){
			$("#block-commerce-cart-cart .view-content, #block-commerce-cart-cart .view-footer").css('display', 'block');
			$.cookie("cart", "");
		}
	};
*/
	
	$("#block-commerce-cart-cart .view-header").click(function(event){
		event.preventDefault();
		
		if ( $("#block-commerce-cart-cart .view-content").css('display') == 'block'){
			$("#block-commerce-cart-cart .view-content, #block-commerce-cart-cart .view-footer").css('display', 'none');
		}else{
			$("#block-commerce-cart-cart .view-content, #block-commerce-cart-cart .view-footer").css('display', 'block');
		}
	});
	
});
 
 
 //Add Hover effect to menus
jQuery('ul.nav li.dropdown').hover(function() {
  jQuery(this).find('.dropdown-menu').stop(true, true).delay(200).fadeIn();
}, function() {
  jQuery(this).find('.dropdown-menu').stop(true, true).delay(200).fadeOut();
});
 

 
 
}(jQuery));