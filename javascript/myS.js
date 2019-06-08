var txt = "";
function eFunc(){
	var a = {firstName:"John",
			 lastName:"Doe"};
	var cars = ["Saab","bmw","Benz"];
	var str = "mystrimghahaimg";
	var nums = [40,100,1,5,23];
	cars.sort();
	cars.reverse();

	// document.getElementById("demo1").innerHTML= typeof cars;
	// document.getElementById("demo1").innerHTML= Date();
	// document.getElementById("demo1").innerHTML= str.search("ing");
	// document.getElementById("demo1").innerHTML = cars.toString();
	// document.getElementById("demo1").innerHTML = nums.sort(function(a,b){return a-b});
	// document.getElementById("demo1").innerHTML = findArrMax(nums);
	
	nums.forEach(myFunction);
	var nums2 = nums.map(myFun1);
	var nums3 = nums.filter(myFun2);
	var nums4 = nums.reduce(myFun3,100);
	var nums5 = nums.every(myFun4);
	var nums6 = nums.some(myFun4);
	var nums7 = nums.find(myFun4);
	var nums8 = nums.findIndex(myFun4);
	document.getElementById("demo1").innerHTML = nums8;
}

function myFun4(value, index, array) {
  return value > 18;
}

function myFun3(total,value,index,array){
	return total + value;
}
function myFun2(value,index,array){
	return value > 10;
}
function myFun1(value ,index,array){
	return value *2;
}
function myFunction(value,index,array) {
  txt = txt + value + "<br>";
}
function findArrMax(arr){

	var cur_max = -Infinity;
	var i;
	for(i=0;i<arr.length;i++){
		if(arr[i]>cur_max){
			cur_max = arr[i];
		}
	}
	return cur_max;
}