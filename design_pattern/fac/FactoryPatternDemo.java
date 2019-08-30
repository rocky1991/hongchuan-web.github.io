package fac;
public class FactoryPatternDemo{
	public static void main(String [] args) {
		ShapeFactory shapeFac = new ShapeFactory();

		Shape shape1 = shapeFac.getShape("circle");

		shape1.draw();
	}
}