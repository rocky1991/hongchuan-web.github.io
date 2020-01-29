package test;
public class Test {
	
	public static void check(int n) {
		if (n < 0) {
			throw new IllegalArgumentException("Invalid negative argument");
		} else{
			System.out.println("n is valid");
		}
	}

	public static void main(String [] args) {
		check(5);
		check(-1);
	}
}