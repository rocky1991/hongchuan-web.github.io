<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php
	libxml_use_internal_errors(true);
	$myXMLData = 
		"<?xml version='1.0' encoding='UTF-8'?>
		<note>
		<to> tove</to>
		<from> re</from>
		</note>
		";
	$xml = simplexml_load_string($myXMLData) or die("error: cannot create object");
	if ($xml === false) {
		echo "failed loading xml:";
		foreach(libxml_get_errors() as $error) {
			echo "<br>" , $error->message;
		}
	} else {
		print_r($xml);
	}
	echo "<br>";
	$xml1=simplexml_load_file("note.xml") or die("error: cannot create object");
	print_r($xml1);
	?>

</body>
</html>