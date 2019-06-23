function test1(){
	document.getElementById("demo5").onclick = test11();
}
function test11(){
	document.getElementById("demo4").innerHTML = document.URL;
}

function test2(){
	var i = 0;
	var len = document.getElementsByTagName("p").length;
	for(i; i < len-1; i++){
		document.getElementsByTagName("p")[i].innerHTML = len;
	}
	

}