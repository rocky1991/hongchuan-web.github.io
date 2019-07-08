<!DOCTYPE html>
<html>
<head>
	<style>
		table, th, td{
			border: 1px solid black;
			border-collapse: collapse;
		}
		th, td {
			padding: 5ps;
		}
	</style>
</head>
<body>
	<table>
		<tr>
			<th> Filter Name</th>
			<th> Filter ID </th>
		</tr>
		<?php 
		foreach (filter_list() as $id=>$filter) {
			echo "<tr><td>" . $filter . "</td><td>" . filter_id($filter). '</td></tr>';
		}
		?>
	</table>
	<?php 
	$str = "<h1>Hello world!</h1>";
	$newstr = filter_var($str, FILTER_SANITIZE_STRING);
	echo $newstr;
	$int = 0;
	echo "<br>";
	if (filter_var($int, FILTER_VALIDATE_INT)===0 || !filter_var($int, FILTER_VALIDATE_INT)=== false) {
		echo "interger is valid";
	} else {
		echo "integer is not valid";
	}
	echo "<br>";
	$ip = "127.0.1";
	if (!filter_var($ip, FILTER_VALIDATE_IP) === false) {
		echo "valid ip";
	} else {
		echo "not valide ip";
	}
	echo "<br>";
	$email = "hello.@gmail.com";
	$email = filter_var($email, FILTER_SANITIZE_EMAIL);
	if (!filter_var($email, FILTER_VALIDATE_EMAIL) === false) {
		echo "valid email";
	} else {
		echo "invalid email";
	}
	echo "<br>";
	$url = "https://www.w3s.com";
	$url = filter_var($url, FILTER_SANITIZE_URL);
	if(!filter_var($url, FILTER_VALIDATE_URL)===false) {
		echo "valid url";
	} else {
		echo "invalid url";
	}
	?>
</body>
</html>