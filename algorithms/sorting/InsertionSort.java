import java.util.Arrays;
import java.util.Random;

public class InsertionSort {
	public static void main(String [] args) {
		Random rand = new Random();

		int [] arr = new int[rand.nextInt(20)];
		for (int i = 0; i < arr.length; i++) {
			arr[i] = rand.nextInt(1000);
		}
		sort1(arr);
		sort2(arr);

	}

	public static void sort2(int [] arr) {
		int len = arr.length;
		int i, j;
		for (i = 1; i < len; i++) {
			j = i-1;	
			int temp = arr[i];
			while (j >= 0 && arr[j] > arr[i]) {
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = temp;
		}
		System.out.println(Arrays.toString(arr));
	}

	public static void sort1(int [] arr) {
		int len = arr.length;
		int i,j;
		for (i = 1; i<len; i++ ) {
			int temp = arr[i];
			for (j = i-1; j >=0; j-- ) {
				if (arr[j] > temp) {
					arr[j+1] = arr[j];
				} else {
					break;
				}
			}
			arr[j+1] = temp;

		}
		System.out.println(Arrays.toString(arr));
	}
}