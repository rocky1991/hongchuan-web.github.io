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

		$conn = new mysqli($servername, $username, $password);
		if ($conn->connect_error) {
			die("Connection failed: " . $conn->connect_error);
		}

		$sql = "create database myDB1";
		if ($conn->query($sql) === TRUE) {
			echo "db created successfully";
		} else {
			echo "error happend : " . $conn-> error;
		}
		$conn->close();
	?>
</body>
</html>