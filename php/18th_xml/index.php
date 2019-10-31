<!DOCTYPE html>
<html>
<head>
</head>
<body>
	<?php
	$xml3 = simplexml_load_file("books.xml") or die("Error: cannot create object");
	echo $xml3->book[0]->title . "<br>";
	echo $xml3->book[1]->title . "<br>";
	echo $xml3->book[0]['category']."<br>";
	foreach($xml3->children() as $books) {
		echo $books->title .",";
		echo $books->author .",";
		echo $books->year . ",";
		echo $books->price. ",";
	}



	$xml2=simplexml_load_file("note.xml") or die("Error: cannot create object");
	echo $xml2->to ."<br>";
	echo $xml2->heading ."<br>";



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