<?php
session_start();
?>

<!DOCTYPE html>
<html>
<body>
	<?php
	$_SESSION["favcolor"] = "yellow";
	print_r($_SESSION);
	?>
	
</body>
</html>