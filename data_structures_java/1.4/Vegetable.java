public class Vegetable extends Food {
	private double VEG_PROTEIN_CAL = 100.0, VEG_FAT_CAL = 200.0, VEG_CARBO_CAL = 30.0;

	public Vegetable() {
		setCalories(VEG_PROTEIN_CAL + VEG_FAT_CAL + VEG_CARBO_CAL);
	}

	public double percentProtein(){
		return VEG_PROTEIN_CAL / getCalories(); 
	}

	public double percentFat(){
		return VEG_FAT_CAL / getCalories();
	}

	public double percentCarb() {
		return VEG_CARBO_CAL / getCalories();
	}
	public static void main(String [] args ) {
		Food a = new Vegetable();

		System.out.println(a.percentProtein());
	}

}