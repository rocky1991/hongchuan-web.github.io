<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php 
		$servername = "localhost";
		$username = "tester1";
		$password = "1122";
		$dbname = "myDB1";
		$conn = new mysqli($servername, $username, $password, $dbname);

		if ($conn->connect_error) {
			die("Connection failed: " . $conn->connect_error); 
		}

		// $sql  = "delete from myGuests where id=13;";
		$sql = "update myGuests set lastname='sfasdfasdf' where id=5;";
		if ($conn->query($sql) === true) {
			echo "record deleted successfully";
		}
		else {
			echo "error deleting record" . $conn->error;
		} 
		$conn->close();
	?>
</body>
</html>
