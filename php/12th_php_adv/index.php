<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php 
		$secondF = fopen("testF.txt",'w') or die("unable to open file");
		// $secondF = fopen("testF.txt",'a') or die("unable to open file");
		$txt = "random txt\n";
		fwrite($secondF,$txt);
		$txt = "another txt\n";
		fwrite($secondF,$txt);

		fclose($seconfF);

	?>

	<?php 
		$myfile = fopen("webdic.txt","r") or die("unable to open fle!");
		
		// while(!feof($myfile)){
		// 	echo fgets($myfile)."<br>";
		// }
		while(!feof($myfile)) {
			echo fgetc($myfile);
		}		

		
		// echo fread($myfile, filesize("webdic.txt"));

		echo "<br><br>";

		fclose($myfile);
	?>
	<br><br>
	<?php 
	echo readfile("webdic.txt");
	?>
	<br><br>
	<h1> welcome </h1>
	<?php //require "notExist.php"; ?>
	<div>
		<?php include "notExist.php"; ?>
		
		<?php include 'menu.php'; ?>
		<?php include 'variables.php';
			echo "color is $color";
		?>

	</div>
	<?php include 'footer.php'; ?>
</body>
</html>