<link href="//fonts.googleapis.com/css?family=Raleway:400,700|Roboto:400,700" rel="stylesheet">
<header>
	<div id="mobilebar" class="hide-on-desktop hide-on-tablet">
		<div class="mobilebarsocial">
			<ul>
				<li><a href="#"><i class="fa fa-facebook fa-2x"><span class="hidden">Facebook</span></i></a></li>
				<li><a href="#"><i class="fa fa-twitter fa-2x"><span class="hidden">Twitter</span></i></a></li>
				<li><a href="#"><i class="fa fa-pinterest fa-2x"><span class="hidden">Pinterest</span></i></a></li>
				<li><a href="#"><i class="fa fa-youtube fa-2x"><span class="hidden">YouTube</span></i></a></li>
			</ul>
		</div>
		<div class="mobilebarnav">
			<ul>
				<li><a href="tel:888-888-8888"><i class="fa fa-phone fa-2x"><span class="hidden">Phone</span></i></a></li>
				<li><a href="#"><i class="fa fa-map-marker fa-2x"><span class="hidden">Map</span></i></a></li>
			</ul>
		</div>
		<div class="clear"></div>
	</div>
	<div class="headerpromo">
		<a href="/room-planner.inc">Start Planning! Use the Interactive Room Planner</a>
	</div><div class="clear"></div>
	<div class="grid-container">
		<div class="grid-50 tablet-grid-50">
			<div class="headerlogo">
				<a href="/"><img src="/css/20126/images/logo.png" width="237" height="77" alt="MicroD Home Furnishings" /></a>
			</div>
		</div>
		<div class="grid-50 tablet-grid-50">
			<nav class="topnav">
				<ul>
					<li><a href="javascript:void(0)">Account</a>
						<ul>
							<li id="login"><a href="/Login.aspx">Log In</a></li>
							<li id="logoutLink" style="display: none; border: 0;"><a href="/HomePage.aspx?logout=true">Log Out</a></li>
							<li id="viewAccountLink" style="display: none;"><a href="/ModifyAccount.aspx">View Account</a></li>
							<li id="registerlink"><a href="/CreateAccount.aspx">Register</a></li>
							<li><a href="/Favorites.aspx">Favorites</a></li>
						</ul>
						<div id="loggedinas" style="display: none; visibility: hidden"></div>
					</li>
					<li><a href="#">View Cart (0)</a></li>
				</ul>
			</nav>
			<div class="headersearch">
				<label class="hidden" for="SearchValue">Search</label>
				<input type="text" id="SearchValue" name="SearchValue" onkeypress="submitsearch(event);" value="">
				<div class="searchbutton">
					<span class="fa fa-search" onclick="goSearch();"></span>
				</div>
				<script type="text/javascript" src="/css/epiphany3/scripts/search.js"></script>
			</div><div class="clear"></div>
		</div><div class="clear"></div>
		<div class="grid-100">
			<nav class="mainnav hide-on-mobile">
				<ul>
					<li><a href="/living-room.inc">Living Room</a>
						<AttributeList id="LivingRoom" ListAttribute="Type" FilterAttribute="Room"  FilterAttributeValue="Living Room" ItemType="item" />
					</li>
					<li><a href="/dining-room.inc">Dining Room</a>
						<AttributeList id="DiningRoom" ListAttribute="Type" FilterAttribute="Room"  FilterAttributeValue="Dining Room" ItemType="item" />
					</li>
					<li><a href="/bedroom.inc">Bedroom</a>
						<AttributeList id="Bedroom" ListAttribute="Type" FilterAttribute="Room" FilterAttributeValue="Bedroom" ItemType="item" />
					</li>
					<li><a href="/entertainment.inc">Entertainment</a>
						<AttributeList id="Entertainment" ListAttribute="Type" FilterAttribute="Department" FilterAttributeValue="Home Entertainment" ItemType="item" />
					</li>
					<li><a href="/home-office.inc">Home Office</a>
						<AttributeList id="HomeOffice" ListAttribute="Type" FilterAttribute="Department" FilterAttributeValue="Home Office" ItemType="item" />
					</li>
					<li><a href="/mattresses/default.inc">Mattresses</a></li>
					<li><a href="/accessories.inc">Accessories</a>
						<AttributeList id="Accessories" ListAttribute="Type" FilterAttribute="Department" FilterAttributeValue="Accessories" ItemType="item" />
					</li>
				</ul>
			</nav>
		</div><div class="clear"></div>
		<nav id="mobilenav" class="hide-on-desktop hide-on-tablet no-print">
			<ul>
				<li><a href="javascript:void(0)"><i class="fa fa-bars fa-1x"></i> Menu</a>
					<ul>
						<li><a href="/living-room.inc">Living Room</a></li>
						<li><a href="/dining-room.inc">Dining Room</a></li>
						<li><a href="/bedroom.inc">Bedroom</a></li>
						<li><a href="/entertainment.inc">Entertainment</a></li>
						<li><a href="/home-office.inc">Home Office</a></li>
						<li><a href="/mattresses/default.inc">Mattresses</a></li>
						<li><a href="/accessories.inc">Accessories</a></li>
					</ul>
				</li>
			</ul>
		</nav><div class="clear"></div>
	</div>
</header>