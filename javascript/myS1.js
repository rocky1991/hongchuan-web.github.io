function myF(){
	var d = new Date(2019,10,6,12,23,5,23)
	var d1 = new Date("2015-11-02")
	var arr = [5,3,2,6]
	// document.getElementById("demo1").innerHTML = d1.getDate();
	// document.getElementById("demo1").innerHTML= Math.max(5,3,2,6);
	var add = function(a,b){return a + b;};
	const sub = function(a,b){return a-b;};
	const arrow = (a,b) => {return a * b};
	// document.getElementById("demo1").innerHTML = add(3,5);S
	// document.getElementById("demo1").innerHTML = sub(5,2);
	document.getElementById("demo1").innerHTML = arrow(3,2);
	
}