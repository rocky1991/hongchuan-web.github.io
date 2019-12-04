public class Test {

	/** Tests classes Computer and Notebook. Creates and object of each and displays them.
		@param args[] No control parameters
	*/
	
	public static void main(String [] args) {
		Computer c = new Computer("Intel", 2.4, 160);
		Notebook n = new Notebook("DelGAte", "AMD", 4, 240, 1.8, 15.0, 7.5);

		// System.out.println("Computer: " + c.toString());
		// System.out.println("Notebook: " + n.toString());

		Notebook n1 = new Notebook("Intel", 2, 160, 1.8, 14, 6.5);
		System.out.println("Notebook: " + c.toString());
	}

}