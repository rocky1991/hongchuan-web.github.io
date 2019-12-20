/** Class that represents a computer */
public class Computer {

	// Data Fields
	private String manufacturer;
	private String processor;
	private double ramSize;
	private int diskSize;
	private double processorSpeed;

	//Methods

	/** no-parameter constructor */
	public Computer(){}
	/** Initiazes a computer object
		@param man The computer manufacturer
		@param processor The processor Type
		@param ram The RAM size
		@param disk The disk size
		@param procSpeed The processor speed
	*/
	public Computer(String manufacturer, String processor, double ramSize, int diskSize, double processorSpeed){
		this.manufacturer = manufacturer;
		this.processor = processor;
		this.ramSize = ramSize;
		this.diskSize = diskSize;
		this.processorSpeed = processorSpeed;
	}

	/** Constructor with 3 parameters: processor, ramSize, diskSize
		@param processor
		@param ramSize
		@param diskSize
	*/
	public Computer(String processor, double ramSize, int diskSize) {
		this("aManu", processor, ramSize, diskSize, 5.5);
	}

	public double computePower() { return ramSize * processorSpeed; }
	public double getRamSize() { return ramSize; }
	public double getProcessorSpeed() { return processorSpeed; }
	public int getDiskSize() { return diskSize; }
	public String getMan() { return manufacturer; }
	public String getProc() { return processor; }

	public void setMan(String man) { manufacturer = man; }
	public void setProc(String proc) {processor = proc; }
	public void setRamSize(double ramS) {ramSize = ramS; }
	public void setDiskSize(int ds) { diskSize = ds; }
	public void setProcSpeed(double speed) { processorSpeed = speed; }



	public String toString() {
		String result = "Nanufacturer: " + manufacturer + "\nCPN: " + processor + "\nRAM: " + ramSize + "\nDisk: " + diskSize + "\nProcessor speed: " + processorSpeed + "\n";
		return result;
	}

	/** Compares power of this computer and its argument computer 
		@param aComputer The computer being compared to this computer
		@return -1 if this computer has less power
				0 if same power
				1 otherwise
	*/
	public int comparePower(Computer aComputer) {
		if (this.computePower() < aComputer.computePower()) {
			return -1;
		} else if(this.computePower() == aComputer.computePower()) {
			return 0;
		} else {
			return 1;
		}
	}

	@Override
	public boolean equals(Object obj) {
		System.out.println("Computer computer objects");
		if (obj == this) return true;
		if (obj == null) return false;
		if (obj.getClass() == this.getClass()){
			Computer aCom = (Computer) obj;
			return manufacturer.equals(aCom.manufacturer) && processor.equals(aCom.processor);
		} else{
			return false;
		}
	}
  

}