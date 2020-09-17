#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
	
	//Define variables
	double n, a, b, integral, x, f;
	
	//Get values for n, a, and b
	a = atof(argv[1]);
	b = atof(argv[2]);
	n = atof(argv[3]);
	
	//Finds width
	double w = (b-a)/n;

	//Loop until i is n
	int i;
	for(i = 1; i < n + 1; i++){
		
		//Sets x to new value for each loop
		x = a + (i * w);
		//Calculates value of function at x
		f = sin(x)/x;
		//Adds new value to previous value to calculate the final
		integral = integral + (f * w);
	}
	//Print
	printf("Integral of sin(x)/x on [%lf, %lf] ~= %lf", a, b, integral);
	
	//End
	return 0;
	
}
