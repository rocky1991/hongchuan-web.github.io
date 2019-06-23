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
function findMax(){
	var i;
	var len = arguments.length;
	var max = -Infinity;
	for(i = 0; i < len; i++){
		if(arguments[i]>max){
			max = arguments[i];
		}
	}
	// return max;
	return this;
}
var a = {
	firstN: "hongchuan",
	lastN: "wang",
	fullN: function(){
		return this.firstN + " " + this.lastN;
	}
}
function myF1(arg1,arg2){
	this.firstN = arg1;
	this.lastN = arg2;

}
var person = {
	fullN: function(age){
		return this.firstN + " " + this.lastN+" " +age;
	}
}
var person1 = {
	firstN: "john",
	lastN: "doe"
}
var a1 = new myF1("hongchuan","w");

// document.getElementById("demo3").innerHTML = findMax(21,2,3,5,2.3);
// document.getElementById("demo3").innerHTML = a.fullN();
// document.getElementById("demo3").innerHTML = a1.firstN;
document.getElementById("demo3").innerHTML = person.fullN.call(person1,"50");  
// person().fullN().call(person1);
 // myF1("a","b").fullN().call(person1);
 var add = (function () {
 	var counter = 0;
 	// return 1;
 return function () {counter += 1; return counter;}
})();

//  var add = (function () {
//   var counter = 0;
//   return function () {counter += 1; return counter;}
// })();
 function increClosure(){
 	document.getElementById("demo4").innerHTML =add();
 }
 function test(){
 	document.getElementsByTagName("h1").innerHTML = 5555;
 }