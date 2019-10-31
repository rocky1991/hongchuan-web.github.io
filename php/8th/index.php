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
		// $sql = "create table myGuests (
		// 		id int(6) unsigned auto_increment primary key,
		// 		firstname varchar(30) not null,
		// 		lastname varchar(30) not null,
		// 		email varchar(50),
		// 		reg_data timestamp
		// 	)";
		$sql = "insert into myGuests (firstname,lastname,email)
				values ('John','Doe','john@email.com');";
		$sql .= "insert into myGuests (firstname,lastname,email)
				values ('John1','Doe1','john@email.com');";
		$sql .= "insert into myGuests (firstname,lastname,email)
				values ('John2','Doe2','john@email.com')";
		if ($conn->multi_query($sql) === true) {
		// if ($conn->query($sql) === true) {
			$last_id = $conn->insert_id;
			// echo "Table myGuests created successfully";
			// echo "new records created successfully";
			echo "new records created successfully, last inserted id is " . $last_id;
		} else {
			echo "error: " . $conn->error;
		}
		$conn->close();
	?>
</body>
</html>