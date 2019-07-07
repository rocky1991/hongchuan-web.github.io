<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php 
		$servername = "localhost";
		$username = "tester1";
		$password = "1122";
		$mydatabase = "myDB1";

		$conn = mysqli_connect($servername, $username, $password);
		if (!$conn) {
			die("Connection failed: " . mysqli_conect_error());
		}

		$sql = "create database myDB1";
		if (mysqli_query($conn, $sql)) {
			echo "db created successfully";
		} else {
			echo "error happend : " . mysqli_error($conn);
		}
		mysqli_close($conn);
	?>
</body>
</html>