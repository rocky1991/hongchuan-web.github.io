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
	public static void main(String [] args) {
		Computer c = new Computer();
	}

}