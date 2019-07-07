<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php 
		$servername = "localhost";
		$username = "tester1";
		$password = "1122";

		try {
			$conn = new PDO("mysql:host=$servername",$username, $password);
			$conn->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
			$sql = "create database myDB3";
			$conn->exec($sql);
			echo "database created successfully <br>";
		
		} 
		catch(PHOException $e) {
			echo $sql . "<br>" . $e->getMessage();
		}
		$conn = null;
		?>
</body>
</html>