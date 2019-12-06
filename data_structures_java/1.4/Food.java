/** Abstract class that models a kind of Food */

public abstract class Food {
	//Data Field 
	private double calories;

	//Abstract Methods
	/** Calculates the percent of protein in a Food object. */
	public abstract double percentProtein();

	/** Calculates the percent of fat in a food object. */
	public abstract double percentFat();

	/** Calculates the percent of carbohydrates. */
	public abstract double percentCarb();

	// Actual methods
	public double getCalories() { return calories; }

	public void setCalories(double cal){
		calories = cal;
	}

}
 