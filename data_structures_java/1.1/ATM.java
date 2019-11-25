/** The interface for an ATM */
public interface ATM {
	
	/** Verifies a user's pin
		@param pin The user's pin 
	*/
	boolean verifyPIN(String pin);

	/** allows the user to select an account
		@return a String representing the acount selected
	*/
	String selectAccount();

	/** withdraws s specified amount of money
		@param account The account from which the money comes
		@param amount The amount of money withdrawn
		@return whether the operation is successful or not
	*/
	boolean withdraw(String account, double amount);

	/** Display the result of an operation
		@param account The account from which the money comes
		@param amount The amount of money
		@param success whether or not the operation is successful
	*/
	void display(String account, double amount, boolean success);

	/** Display the result of pin verification
		@param pin The user's pin
		@param success whether or not the PIN was valid
	*/
	void display(String pin, boolean success);

	/** Display an account balance
		@param account The account selected 
	*/
	void showBallance(String account);
 
}