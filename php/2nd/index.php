<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<form method="post" action="<?php echo $_SERVER['PHP_SELF'];?>">
		name: <input type="text" name="fname">
		<input type = "submit">
	</form>
	<?php
	if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // collect value of input field
    	$name = htmlspecialchars($_REQUEST['fname']); 
    	if (empty($name)) {
        	echo "Name is empty";
    	} else {
        	echo $name;
    	}
	}
	?>

	<?php
		echo $_SERVER['PHP_SELF'];
		echo "<br>";
		echo $_SERVER['SERVER_NAME'];
		echo "<br>";
		echo $_SERVER['HTTP_HOST'];
		echo "<br>";
		echo $_SERVER['HTTP_REFERER'];
		echo "<br>";
		echo $_SERVER['HTTP_USER_AGENT'];
		echo "<br>";
		echo $_SERVER['SCRIPT_NAME'];
		echo "<br>";
		$arr4 = array("car1"=> "bmw","car2"=> "toyota", "car3" => "nissan");
		echo "<br>" . $arr4[car3];
		foreach ($arr4 as $x => $x_value) {
			echo "<br> key is $x and  value is $x_value";
		}
		$arr3 = array("bmw","toyota","nissan");
		echo "<br>length is ". count($arr3);
		function testArg($name = "joe") {
			echo "<br>Name is $name";
			return 5;
		}
		testArg("John");
		testArg();
		echo "<br>haha " . testArg();
		$arr2 = array(5,2,3);
		foreach($arr2 as $item ){
			echo "<br> $item";
		} 
		for ($x4 = 1; $x4 < 3; $x4++) {
			echo "<br> hello $x4";
		}
		$x3 = 1;
		do {
			echo "<br> Hello $x3";
			$x3+=1;
		} while($x3 <3); 

		$x2 = 1;
		while($x2 <3) {
			echo "<br> Hello $x2";
			$x2+=1;
		}

		$t1 = date("M");
		switch($t1) {
			case "Jan":
			echo "one";
			break;
			case "Jul":
			echo "seven";
			break;
			default:
			echo "not one or seven";
		}
		echo "<br>";
		
		$t = date("H");
		if($t < 10) {
			echo "great day";
		} elseif ($t <21) {
			echo "oh";
		}
		echo "<br>";

		define("greet","welcome friend",false);
		function constTest() {
			echo greet . "<br>";
		}
		constTest();
		// constant
		
		echo greet, "<br>";

		echo str_replace("hello", "what", "hello world"). " replace<br>";
		echo strpos("Hello world","world") . "position<br>";

		echo "reverse str " . strrev("hello world") . "<br>";
		echo str_word_count("weras asdfsa") . "word count<br>";
		echo strlen("Hello world") . " the length<br>";

		$x2 = null;
		var_dump($x2);
		echo "<br>";


		class Car {
			function Car() {
				$this->model = "vw";
			}
		}
		$newCar = new Car();
		echo $newCar->model;
		echo "<br>";

		$arr1 = array("volve","benz","toyota");
		var_dump($arr1);
		echo "<br>";

		$x1 = 234.5234;
		var_dump($x1);
		echo "<br>";
		$x = 5985;
		var_dump($x);
		echo "<br>";

		echo "hello";
		echo "<br>";
		echo "another hello";

		print "<h1> php is fun </h1>";

		$txt = "random";
		echo "<h1>" .$txt. "<h1>";

		echo "<h2> PHP is fun!</h2>";
		echo "this ", "string ", "is ","multiple ", "parameters";

	?>
</body>
</html>