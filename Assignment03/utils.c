#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "utils.h"

int degreesToRadian(double degree, double *radians){	
	
	//Checks for out of bounds
	if(*radians = NULL || degree < 0 || degree > 360){
		printf("Cant do");
		return 1;
	}
	else{
		//Calculates radians from X degrees
		double val = degree * M_PI / 180;
		*radians = val;
		return 0;
	}
	
}

int annualPercentageYield(double apr, double *apy){
	
	//Checks for out of bounds
	if(*apy = NULL || apr < 0 || apr > 1){
		return 1;
	}
	else{
		//Initiates vars 
		double val;
		double e = 2.71828183;
		
		//Finds value for apy and then applies it to pointer
		val = pow(e, apr) - 1;
		*apy = val;
		return 0;
	}
}

int getAirDistance(double latA, double longA, double latB, double longB, double 
*distance){
	
	//Checks for out of bounds
	if(*distance = NULL || latA < -180 || latA > 180 || latB < -180 || latB > 
180 || longA < -180 || longA > 180 || longB < -180 || longB > 180 ){
		return 1;	
	
	}else{
		//Sets var
		double r = 6371;
	
		//Finds distance
		latA = latA * M_PI / 180;
		latB = latB * M_PI / 180;
		longA = longA * M_PI / 180;
		longB = longB * M_PI / 180;
		double val = acos(sin(latA) * sin(latB) + cos(latA) * cos(latB) * 
cos(longB - longA)) * r;
		
		*distance = val;
		
		return 0;
	}
}

int rgbToCMYK(int r, int g, int b, double *c, double *m, double *y, double *k){
	
	//Checks for out of bounds
	if( r > 255 || g > 255 || b > 255 || r < 0 || g < 0|| b < 0){
		return 1;
	}
	//Calculates CMYK from RGB
	else{
		double r1 = (double) r/255;
		double g1 = (double) g/255;
		double b1 = (double) b/255;
		double max = 0.0;
		max = fmax(r1, g1);
		max = fmax(max, b1);
		
		double valk = 1 - max;
		double valc = (1.0 - r1 - valk)/(1.0 - valk);
		double valm = (1.0 - g1 - valk)/(1.0 - valk);
		double valy = (1.0 - b1 - valk)/(1.0 - valk);
		
		*c = valc;
		*m = valm;
		*y = valy;
		*k = valk;
		
		return 0;
	}	
}

int cmykToRGB(double c, double m, double y, double k, int *r, int *g, int *b){
	
	//Checks for out of bounds
	if(c > 1|| m> 1 || y > 1|| k > 1 || c < 0|| m< 0 || y< 0 || k < 0){
		return 1;
	}
	else{
	//Gets value for RGB
	double valr = 255 * (1 - c) * (1 - k);
	double valg = 255 * (1 - m) * (1 - k);
	double valb = 255 * (1 - y) * (1 - k);
	valr = round(valr);
	valg = round(valg);
	valb = round(valb);

	*r = (int)valr;
	*g = (int)valg;
	*b = (int)valb;
	
	return 0;
	}
	
}

int toGrayScale(int *r, int *g, int *b, Mode mode){
	
	//Checks for out of bounds
	if(*r> 255 || *g> 255 || *b > 255 || *r< 0 || *g< 0 || *b < 0){
	printf("Suck it bish");
	return 1;
	
	}
	//Calculates grayscale values from RGB
	else{
	int m = mode;
	int max = fmax(*r, *g);
	max = fmax(max, *b);
	
	int min = fmin(*r, *g);
	min = fmin(min, *b);
	
	//Uses enum chose to decide which method to use
	if(m == AVERAGE){
		int all = (*r + *g + *b)/3;
			*r = all;
			*g = all;
			*b = all;
	}else if(m == LIGHTNESS){
			int all = (max + min)/2;
			*r = all;
			*g = all;
			*b = all;
	}else{
			int all = 0.21*(*r) + 0.72*(*g) + 0.07*(*b);
			*r = all;
			*g = all;
			*b = all;
	}
	return 0;
	}	
}