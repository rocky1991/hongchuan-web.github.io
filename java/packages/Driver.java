package com.vehicles;

public class Driver{
	public static void initiateHonk(){
		Car c = new Car();
		c.horn();
	}

	public static void main(String[]args){
		initiateHonk();
	}
}