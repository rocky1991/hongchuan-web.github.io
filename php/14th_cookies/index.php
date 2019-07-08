<!DOCTYPE html>
<html>
<head>
	<?php 
	$cookie_name = "user1";
	$cookie_value = "john doe1";
	setcookie($cookie_name, $cookie_value, time() + (86400 *30), "/");
	?>

</head>
<body>

	<?php
	if(!isset($_COOKIE[$cookie_name])) {
		echo "Cookie named '" . $cookie_name . "' is not set!";
	} else {
		echo "Cookie '" . $cookie_name . "' is set !<br>";
		echo "Value is: " . $_COOKIE[$cookie_name];
	}
	echo "<br>";
	if(count($_COOKIE) > 0 ) {
		echo "cookies are enabled";
	} else {
		echo "cookies are not enables";
	}
	?>

</body>
</html>