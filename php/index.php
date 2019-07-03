<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php 
		echo "My first php";
		$x = 5 + 5;
		echo "hello $x";
		echo "\$x";
		echo "hello ". $x;
		$y = 11;
		echo $x + $y;
	?>
	<?php
		$x = 10;
		function test() {
			echo "<p> variable x inside function is $x</p>";
		}
		test();

		echo "<p> variablex x outside function is $x</p>";
	?>
	<?php
		function test1() {
			$x = 5;
			echo "<p> variable x inside function is $x</p>";
		}
		test1();
		echo "<p> variable x outside function is $x</p>";
		function test2() {
			global $x;
			$x = $x +20;
		}
		test2();
		echo "<p> variable x is $x</p>";
		$y = 5;
		function test3() {
			$GLOBALS['y'] = $GLOBALS['y'] + 30;
		}
		test3();
		echo "<p> variable y is $y</p>";
		function test4() {
			static $z = 0;
			echo "<p> variable z is $z</p>";
			$z++;
		}
		test4();
		test4();
		test4();

	?>
</body>
</html>