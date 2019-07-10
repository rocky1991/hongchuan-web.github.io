<!DOCTYPE html>
<html>
<head>
	<style>
		table {
			width: 100%;
			border-collapse:collapse;
		}
		table, td, th {
			border: 1px solid black;
			padding:5px;
		}
		th {text-align:left;}
	</style>
</head>
<body>
	<?php
	$q = intval($_GET['q']);
	$conn = mysqli_connect('localhost','tester1','1122','myDB1');
	if (!$conn) {
		die("could not connect: " . mysqli_error($conn));
	}

	$sql = "select * from myGuests where id = '".$q."'";
	$result = mysqli_query($conn,$sql);

	echo "<table>
	<tr>
	<th> id</th>
	<th> firstname</th>
	<th> lastname</th>
	</tr>";

	while($row = mysqli_fetch_array($result)) {
		echo "<tr>";
		echo "<td>".$row['id']."</td>";
		echo "<td>".$row['firstname']."</td>";
		echo "<td>".$row['lastname']."</td>";
		echo "<td>".$row['email']."</td";
		echo "</tr>";
	}
	echo "</table>";
	mysqli_close($conn);
	?>

</body>
</html>
