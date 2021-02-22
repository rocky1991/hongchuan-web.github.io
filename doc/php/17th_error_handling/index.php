<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php
	class customException extends Exception {
		public function errorMessage() {
			$errorMsg = "error on line " . $this->getLine() . ' in' . $this->getFile() . ' :<b>'.$this->getMessage(). ' </b> is not a valid email address';
			return $errorMsg;
		}
	}

	$email = "someone@example.com";
	try {
		try {
			if(strpos($email, "example")!==false) {
				throw new Exception($email);
			}

		} catch (Exception $e) {
			throw new customException($email);
		}


	} catch (customException $e) {
		echo $e->errorMessage();
	}

	echo "<br>";
	function myException($exception) {
		echo "<b>Exception:</b> " . $exception->getMessage();
	}
	set_exception_handler('myException');
	throw new Exception("uncaught Exception");

	// if(!file_exists("welcom.txt")) {
	// 	die("file not found");
	// } else {
	// 	$file = fopen("welcome.txt",'r');
	// }
	// function customError($errno, $errstr) {
	// 	echo "<b>Error:</b> [$errno] $errstr <br>";
	// 	error_log("Error: [$errno] $errstr", 1,"hongchuan91@hotmail.com","From:hongchuan91@gmail.com");
	// 	echo "ending script";
	// 	die();
	// }
	// set_error_handler("customError",E_USER_WARNING);
	
	// $test=2;
	// if ($test>=1) {
 //  		trigger_error("Value must be 1 or below", E_USER_WARNING);
	// }

	// echo($test);
	
	// $email = "someone@sdf.com";
	// try {
	// 	if(filter_var($email, FILTER_VALIDATE_EMAIL) === false) {
	// 		throw new customException($email);
	// 	}

	// 	if(strpos($email, "sdf") !== false) {
	// 		throw new Exception("Example email");
	// 	}
	// } catch (customException $e) {
	// 	echo $e->errorMessage();
	// } catch (Exception $e) {
	// 	echo $e->getMessage();
	// }
	// function checkNum($number) {
	// 	if ($number > 1) {
	// 		throw new Exception("value must be below 1");
	// 	}
	// 	return true;
	// }
	// try{
	// 	checkNum(2);
	// } catch(Exception $e) {
	// 	echo 'Message: ' . $e->getMessage();
	// }
	
	?>
</body>
</html>