public class Notebook extends Computer {
	// Data fields
	private double screenSize;
	private double weight;

	// Methods 
	/** Initializes a Notebook object with all properties specified.
		@param man The computer manufacturer
		@param proc
		@param ram
		@param disk
		@param procSpeed
		@param screen
		@param wei
	*/
	public Notebook(String man, String proc, double ram, int disk, double procSpeed, double screen, double wei){
		super(man, proc, ram, disk, procSpeed);
		screenSize = screen;
		weight = wei;
	}
	public double getScreen() { return screenSize; }
	public double getWei() { return weight; }

	public void setScreen(double scrSize) { screenSize = scrSize; }
	public void setWei(double wei) { weight = wei; }
	
}