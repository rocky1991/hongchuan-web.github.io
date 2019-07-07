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
			die("connection failed: " . $conn->connect_error);
		}
		$sql = "create table myGuests (
				id int(6) unsigned auto_increment primary key,
				firstname varchar(30) not null,
				lastname varchar(30) not null,
				email varchar(50),
				reg_data timestamp
			)";
		if ($conn->query($sql) === true) {
			echo "Table myGuests created successfully";
		} else {
			echo "error creating table: " . $conn->error;
		}
		$conn->close();
	?>
</body>
</html>