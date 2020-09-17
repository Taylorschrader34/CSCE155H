#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "integrate.h"

//Defines functions
double linear(double x){
	return x;
}

double quadratic(double x){
	double quad = x * x;
	return quad;
}

double sinByX(double x){
	double ans = (sin(x))/(x);
	return ans;
}


double rectangleIntegration(double a, double b, double n, double (*f)(double)){
	
	//Define variables
	double integral =0;

	//Loops over integral
	int i;
	for(i = 0; i < n; i++){	
		double c = (double) i;

		integral += ((f)(a + (c * (b-a)/n))) * ((b-a)/n);
	}
	return integral;
}

double trapazoidIntegration(double a, double b, double n, double (*f)(double)){
	
	//Define variables
	double integral = 0;
	
	//Loop until i is n
	int i;
	for(i = 0; i < n; i++){	
		double c = (double) i;
		
		integral += ((((f)(a + (c * (b-a)/n))) + (f)(a + ((c + 1) * ((b-a)/n))))/2) * ((b-a)/n);
	}
	return integral;
	
}

double simpsonIntegration(double a, double b, double n, double (*f)(double)){
	
	//Define variables
	double integral = 0;

	//Loop until i is n
	int i;
	for(i = 0; i < n; i++){	
		double c = (double) i;
		
		integral += (((b-a)/n)/6) * (((f)(a + (c * ((b-a)/n)))) + (4 * ((f)(((((a + (c * ((b-a)/n))) + (a + ((c + 1) *((b-a)/n))))/2)))) + ((f)((a + ((c + 1) * ((b-a)/n)))))));
	}
	return integral;
	
}
