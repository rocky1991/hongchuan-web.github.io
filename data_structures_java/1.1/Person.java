public class Person{
	String lastName;
	String firstName;


	/** Compare two person
		@param per A Person object
	  	@return comparison result of two person's name
		
	*/
	public int compareTo(Person per) {
		if (lastName.equals(per.lastName)){
			return firstName.compareTo(per.firstName);
		} else {
			return lastName.compareTo(per.lastName);
		}
	}

	/** change a person's last name if the person is just married
		@param justMarried flag indicating whether a person is just married
		@param newLast the new last name to be assigned to the person
	*/

	public void changeLastName(boolean justMarried, String newLast) {
		if (justMarried) {
			lastName = newLast;
		}
	}
}