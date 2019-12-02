public class ATMbankAmerica implements ATM{
	String pin;

	public boolean verifyPIN(String pin){
		if(pin.equals(this.pin)) {
			return true;
		} else {
			return false;
		}

	}
	public String selectAccount() {
		return "account";
	}
	public boolean withdraw(String account, double amount) {
		return true;
	}
	public void display(String account, double amount, boolean success) {

	}
	public void display(String pin, boolean success){

	}
	public void showBallance(String account){
		
	}


}