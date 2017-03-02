<footer>
	<div class="grid-container">
		<div class="grid-25 tablet-grid-25">
			<div class="footercolumn">
				<p><span class="footerheading">About MicroD</span></p>
				<ul>
					<li><a href="/about-us.inc">About Us</a></li>
					<li><a href="/displayflyer.aspx">Promotions</a></li>
					<li><a href="/design-center.inc">Design Center</a></li>
					<li><a href="/room-planner.inc">Room Planner</a></li>
					<li><a href="/brands.inc">Brands</a></li>
					<li><a href="/join-email.inc">Join Email</a></li>
					<li><a href="/contact-us.inc">Contact</a></li>
			</div>
			</ul>
		</div>
		<div class="grid-25 tablet-grid-25">
			<div class="footercolumn">
				<p><span class="footerheading">Contact Us</span></p>
				<ul>
					<li><a href="/living-room.inc">Living Room</a></li>
					<li><a href="/dining-room.inc">Dining Room</a></li>
					<li><a href="/bedroom.inc">Bedroom</a></li>
					<li><a href="/entertainment.inc">Entertainment</a></li>
					<li><a href="/home-office.inc">Home Office</a></li>
					<li><a href="/mattresses/default.inc">Mattresses</a></li>
					<li><a href="/accessories.inc">Accessories</a></li>
				</ul>
			</div>
		</div>
		<div class="grid-25 tablet-grid-25">
			<div class="footercolumn">
				<p><span class="footerheading">Brands You Trust</span></p>
					<ul>
						<li><a href="javascript:void(0)" id="brandslist_expand" title="View Brands">+ View All Brands</a></li>
					</ul>
					<div id="brandslistbox">
						<AttributeList id="FooterBrands" ListAttribute="Brand" ItemType="item" />
					</div>
			</div>
		</div>
		<div class="grid-25 tablet-grid-25">
			<div class="footercolumn">
				<p><span class="footerheading">Contact Us</span></p>
					<p>MicroD Home Furnishings</p>
					<p>13301 Carmel Commons Blvd<br />Charlotte, NC 28226</p><br />
					<p><strong>Phone:</strong> <span>888-555-1212</span><br /><br /><a href="/contact-us.inc"><strong>Get Directions</strong></a></p>
				</ul>
			</div>
		</div><div class="clear"></div>
		<div class="grid-100">
			<nav class="socialmediaicons">
				<ul>
					<li><a href="#" target="_blank"><i class="fa fa-twitter fa-2x"><span class="hidden">Twitter</span></i></a></li>
					<li><a href="#" target="_blank"><i class="fa fa-facebook fa-2x"><span class="hidden">Facebook</span></i></a></li>
					<li><a href="#" target="_blank"><i class="fa fa-pinterest fa-2x"><span class="hidden">Pinterest</span></i></a></li>
					<li><a href="#" target="_blank"><i class="fa fa-instagram fa-2x"><span class="hidden">YouTube</span></i></a></li>
				</ul>
			</nav><div class="clear"></div>
			<div class="footercopyright">
				<p>&copy; <script>document.write(new Date().getFullYear())</script> MicroD. All rights reserved. | <a href="http://www.microdinc.com" target="_blank">Design and Development: MicroD, LLC</a> | <a href="javascript:void(0)" id="siteindex_expand" title="About MicroD Home Furnishings">+ About MicroD Home Furnishings</a></p>
			</div>
			<div id="seocontentbox">
				<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
			</div>
		</div>
	</div>
</footer>
<script type="text/javascript"> 
  $(document).ready(function(){

	$('#siteindex_expand').click(function(){
		var iteration=$(this).data('iteration')||1
		switch ( iteration) {
			case 1:
				$("#seocontentbox").slideDown('slow');
				$("html, body").animate({ scrollTop: $(document).height() }, "slow");
				break;
			
			case 2:
				$("#seocontentbox").slideUp('slow');
				break;
		}
		iteration++;
		if (iteration>2) iteration=1
		$(this).data('iteration',iteration)
	});
	
	$('#brandslist_expand').click(function(){
		var iteration=$(this).data('iteration')||1
		switch ( iteration) {
			case 1:
				$("#brandslistbox").slideDown('slow');
				break;
			
			case 2:
				$("#brandslistbox").slideUp('slow');
				break;
		}
		iteration++;
		if (iteration>2) iteration=1
		$(this).data('iteration',iteration)
	});


  $("#seocontentbox").hide();
  $("#brandslistbox").hide();
	
	//Check to see if the window is top if not then display button
	$(window).scroll(function(){
		if ($(this).scrollTop() > 100) {
			$('.scrolltotop').fadeIn();
		} else {
			$('.scrolltotop').fadeOut();
		}
	});
	
	//Click event to scroll to top
	$('.scrolltotop').click(function(){
		$('html, body').animate({scrollTop : 0},800);
		return false;
	});

  $('.slideout-menu-toggle').on('click', function(event){
  	event.preventDefault();
  	// create menu variables
  	var slideoutMenu = $('.slideout-menu');
  	var slideoutMenuWidth = $('.slideout-menu').width();
  	
  	// toggle open class
  	slideoutMenu.toggleClass("open");
  	
  	// slide menu
  	if (slideoutMenu.hasClass("open")) {
    	slideoutMenu.animate({
	    	left: "0px"
    	});	
  	} else {
    	slideoutMenu.animate({
	    	left: -slideoutMenuWidth
    	}, 250);	
  	}
  });

	$("#Form1").validationEngine({promptPosition : "topLeft"});
	$("#form1").validationEngine({promptPosition : "topLeft"});

});
</script>