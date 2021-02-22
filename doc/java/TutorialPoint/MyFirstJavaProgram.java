

public class MyFirstJavaProgram{

	enum FreshJuiceSize{SMALL,LARGE}
	FreshJuiceSize size;

	public static void pushZerosToEnd(int [] input){
		//find the index of the left most zero
		// every time a non-zero number if found, swap that number with the index of the left most zero
		int left_most_zero = 0;
		int temp;
		for (int i = 0; i < input.length; i++) {

			if(input[i] == 0) {
				if (input[left_most_zero] != 0){
					left_most_zero = i;
				}
			} else {
				if (left_most_zero < i) {
					temp = input[i];
					input[i] = input[left_most_zero];
					input[left_most_zero] = temp;
					left_most_zero++;
				}
			}
			// System.out.println("i is " + i);
			// System.out.println("left_most_zero is " + left_most_zero);
			// for (int j = 0; j < input.length; j++) {
			// 	System.out.print(input[j] + " ");
			// }
			// System.out.println();
			// System.out.println();
		}

		for (int i = 0; i < input.length; i++) {
			System.out.print(input[i] + " ");
		}
		System.out.println();
	}

	public static void main(String[]args) {

		int [] example_arr = {1,0,0, 20,0,3,0};
		pushZerosToEnd(example_arr);


		// MyFirstJavaProgram juice = new MyFirstJavaProgram();
		// juice.size = FreshJuiceSize.LARGE;
		// System.out.println("Size: " + juice.size);
	}



}