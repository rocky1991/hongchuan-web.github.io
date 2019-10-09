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
	if( $conn->connect_error) {
		die("Connection failed" . $conn->connect_error);
	}
	$sql = "select * from myGuests";
	$result = $conn->query($sql);
	if($result->num_rows > 0) {
		echo "<table><tr><th>ID</th><th>Name</th></tr>";
		while($row= $result-> fetch_assoc()) {
			// echo "id: " . $row["id"] . " Name: " . $row["firstname"] . " " . $row["lastname"] . "<br>";
			echo "<tr><td>".$row["id"] ."</td><td>" . $row["firstname"] . " " . $row["lastname"]."</td></tr>";
		}
		echo "</table>";
	} else {
		echo "0 results";
	}
	$conn->close();
	?>
</body>
</html>