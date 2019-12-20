public class Test {

	public static void main(String [] args) {
		Object o = new String("hello");
		String s = (String)o;
		Object p = 25; 
		int k = (int)p;
		Number n = k;
		Computer a = new Computer("dell", "intel", 2.0, 4, 50);
		Computer b = new Notebook("dell", "intel", 2.0, 4, 50, 2.0, 3.0);
		System.out.println(a.equals(b));
	}
}