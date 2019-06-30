<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php
	$myObj->name = "john";
	$myObj->age =30;
	$myObj->city = "New Yord";

	$myJson = json_encode($myObj);
	echo $myJson;
	$Obj1 = array("john","mary","peter");
	$json = json_encode($Obj1);

	echo $json
	?>
</body>
</html>