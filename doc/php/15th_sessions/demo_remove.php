<?php 
session_start();
?>
<!DOCTYPE html>
<html>
<body>
	<?php
	session_unset();

	session_destroy();
	print_r($_SESSION);
	?>
</body>
</html>