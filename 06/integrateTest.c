#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "integrate.h"

int main(int argc, char **argv) {

	//Defines vars
	//Sets vars
	a = 1.0;
	b = 92.6;
	n = 10000;
	x = 5;

	//Tests each function with each method
	double rect = rectangleIntegration(a, b, n, &linear);

	double rect2 = rectangleIntegration(a, b, n, &quadratic);

	double rect3 = trapazoidIntegration(a, b, n, &sinByX);

	double trap = trapazoidIntegration(a, b, n, &linear);

	double trap2 = trapazoidIntegration(a, b, n, &quadratic);

	double trap3 = trapazoidIntegration(a, b, n, &sinByX);
	
	double simp = simpsonIntegration(a, b, n, &linear);

	double simp2 = simpsonIntegration(a, b, n, &quadratic);

	double simp3 = simpsonIntegration(a, b, n, &sinByX);

	//Prints
	printf("Linear rect: %lf\n Linear trap: %lf\n Linear simp%lf\nQuad rect: %lf\n Quad trap: %lf\n Quad simp%lf\nSinByX rect: %lf\n SinByX trap: %lf\n SinByX simp%lf\n", rect, trap, simp, rect2, trap2, simp2, rect3, trap3, simp3);
}