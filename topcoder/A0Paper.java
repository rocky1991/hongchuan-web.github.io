import java.lang.Math.*;
public class A0Paper {

	public String canBuild(int [] A) {
		
		num_A0 = 0.0;
		for (int i = 0; i < A.length; i++) {
			num_A0 += A[i] / Math.pow(2, i);
			
		}
		if (num_A0 - 1.0 >= 0.0){
			return "Possible";
			
		} else {
			return "Impossible";
		}

		
	}
}