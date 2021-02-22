import java.lang.Math.*;
public class Test {
	public static void main(String [] args) {
		String myStr = "abc";
		char a = 'a';
		// char b = 'b';
		System.out.println(myStr.charAt(myStr.length() -1));
		System.out.println((int)a +1);
		char b = (char)((int)a + 1);
		System.out.println(b);
		String test = "abd" + b;
		System.out.println(test);
		boolean c = true;
		System.out.println(c);

		System.out.println(Math.pow(2, 5));
	}
}