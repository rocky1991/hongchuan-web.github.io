<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php 
		$name = $email = $gender = $comment = $website = "";
		$nameErr = $emailErr = $genderErr = $websiteErr = "";

		if ($_SERVER["REQUEST_METHOD"] == "POST") {
			if (empty($_POST["name"])){
				$nameErr = "name is required";
			} else {
				$name = test_input($_POST["name"]);
				if (!preg_match("/^[a-zA-Z ]*$/",$name)) {
					$nameErr = "only letters and white space allowed";
				}
			}
			
			if (empty($_POST["email"])) {
				$emailErr = "email is required";
			} else {
				$email = test_input($_POST["email"]);
				if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
					$emailErr = "Invalid email format";
				}
			}
			if (empty($_POST["website"])) {
				$websiteErr = "";
			} else {
				$website = test_input($_POST["website"]);
				if (!preg_match("/\b(?:(?:https?|ftp):\/\/|www\.)[-a-z0-9+&@#\/%?=~_|!:,.;]*[-a-z0-9+&@#\/%=~_|]/i",$website)){
					$websiteErr = "invalid URL";
				}
			}
			
			if (empty($_POST["comment"])) {
				$comment = "";
			} else {
				$comment = test_input($_POST["comment"]);
			}
			if (empty($_POST["gender"])) {
				$genderErr = "Gender is required";
			} else {
				$gender = test_input($_POST["gender"]);
			}
			
		}
		function test_input($data){
			$data = trim($data);
			$data = stripslashes($data);
			$data = htmlspecialchars($data);
			return $data;
		}

	?>
	<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">

		Name: <input type="text" name="name" value="<?php echo $name?>">
		<span class="error"> * <?php echo $nameErr?></span> <br>
		Email: <input type="text" name="email" value="<?php echo $email?>">
		<span class="error">* <?php echo $emailErr?></span><br>
		Website: <input type="text" name="website" value="<?php echo $website?>">
		<span class="error"><?php echo $websiteErr?> </span><br>
		Comment: <textarea name="comment" rows="5" cols="40"><?php echo $comment ?></textarea>
		<br>
		Gender:<br>
		<input type="radio" name="gender" 
		<?php if (isset($gender) && $gender=="female") echo "checked";?> value="female">Female<br>
		<input type="radio" name="gender" 
		<?php if (isset($gender) && $gender=="male") echo "checked";?> value="male"> MALE<br>
		<input type="radio" name="gender" 
		<?php if (isset($gender) && $gender=="other") echo "checked";?> value="other">Other<br>
		<input type="submit" name="submit" value="Submit">
	</form>
	<?php 
		echo $name, "<br>";
		echo $email, "<br>";
		echo $website, "<br>";
		echo $comment, "<br>";
		echo $gender, "<br>";

	?>

</body>
</html>