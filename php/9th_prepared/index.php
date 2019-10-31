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

		$conn = new mysqli($servername,$username,$password,$dbname);
		if ($conn->connect_error) {
			die("Connection failed:" .$conn->connect_error);
		}

		$stmt = $conn->prepare("insert into myGuests (firstname, lastname, email) values (?,?,?)");
		$stmt->bind_param("sss",$firstname,$lastname,$email);

		$firstname = "john";
		$lastname = "doe";
		$email = "john@x.com";
		$stmt->execute();

		$firstname = "mary";
		$lastname = "mo";
		$email = "mo@es.com";
		$stmt->execute();

		echo "new records created successfully";
		$stmt->close();
		$conn->close();
	?>
</body>
</html>