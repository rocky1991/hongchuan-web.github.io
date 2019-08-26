package com.vehicles;

public class Car implements Vehicle{
	public void drive() {
		System.out.println("drive");
	}
	public void horn() {
		System.out.println("horn");
	}

	public static void main(String []args) {
		Car c = new Car();
		c.drive();
		c.horn();
	}
}