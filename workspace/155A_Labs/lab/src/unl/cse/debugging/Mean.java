package unl.cse.debugging;

public class Mean {

	public static Double computeMean(Double a[]) {
		
		Double sum = 0.0;
		for(int i=0; i<a.length; i++) {
			sum += a[i];
		}
		return sum / a.length;
	}
	
	public static void main(String args[]) {
		Double array[] = new Double[10];
		array[0] = 2.3;
		array[1] = 1.25;
		array[2] = 3.14;
		array[3] = 8.12;
		array[4] = 10.5;
		array[5] = 1.0;
		array[6] = 3.0;
		array[7] = 9.25;
		array[8] = 2.1;
		array[9] = 0.95;
		
		//enter 1 for array[6] = 3.0, mean should be: 4.161
		double m = computeMean(array);
		System.out.println("mean = "+m);
	}
	
}
