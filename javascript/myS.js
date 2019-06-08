function eFunc(){
	var a = {firstName:"John",
			 lastName:"Doe"};
	var cars = ["Saab","bmw","Benz"]
	var str = "mystrimghahaimg"
	var nums = [40,100,1,5,23]
	cars.sort()
	cars.reverse()
	// document.getElementById("demo1").innerHTML= typeof cars;
	// document.getElementById("demo1").innerHTML= Date();
	// document.getElementById("demo1").innerHTML= str.search("ing");
	// document.getElementById("demo1").innerHTML = cars.toString();
	// document.getElementById("demo1").innerHTML = nums.sort(function(a,b){return a-b});
	document.getElementById("demo1").innerHTML = findArrMax(nums);
	
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