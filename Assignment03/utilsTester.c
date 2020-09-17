#include<stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
	
//Degrees to Radians

double deg = 50.0;
double POINTER = 0;
double OTHER = 0;
double CHARM = 0;
double *rtdpointer = &POINTER;
double *otherpointer = &OTHER;
double *threeischarm = &CHARM;


degreesToRadian(deg, rtdpointer);
printf("Radians: %f", *rtdpointer);

deg = deg + 20; 

degreesToRadian(deg, otherpointer);
printf("\nRadians: %f", *otherpointer);

deg = deg - 39;

degreesToRadian(deg, threeischarm);
printf("\nRadians: %f", *threeischarm);
	
	
//Annual Percentage Yield
	
double apy1 = 0;
double apy2 = 0;
double apy3 = 0;
double *papy1 = &apy1;
double *papy2 = &apy2;
double *papy3 = &apy3;
double apr1 = 0.2;
double apr2 = 0.4;
double apr3 = 0.7;
	
	annualPercentageYield(apr1, papy1);
	printf("\n\nAPY : %f", *papy1);

	annualPercentageYield(apr2, papy2);
	printf("\nAPY : %f", *papy2);
	
	annualPercentageYield(apr3, papy3);
	printf("\nAPY : %f", *papy3);
	
//getAirDistance

double latA = -20;
double longA = 50;
double latB = 100;
double longB = -94;
double distance = 0.0;
double *pdistance = &distance;

getAirDistance(latA, longA, latB, longB, pdistance);
	printf("\n\nDistance : %f", *pdistance);
latA += 2;
latA += 24;
latB += 20;
longB += 24;
getAirDistance(latA, longA, latB, longB, pdistance);
	printf("\nDistance : %f", *pdistance);
latA += 2;
latA += 24;
latB += 20;
longB += 24;
getAirDistance(latA, longA, latB, longB, pdistance);
	printf("\nDistance : %f", *pdistance);
	
	
//rgb to cmyk

int r1 = 72;
int g1 = 51;
int b1 = 94;
double c1 = 0;
double m1 = 0;
double y1 = 0;
double k1 = 0;
double *pc1 = &c1;
double *pm1 = &m1;
double *py1 = &y1;
double *pk1 = &k1;

rgbToCMYK(r1,g1,b1,pc1,pm1,py1,pk1);
	printf("\n\nC : %f", *pc1);
	printf("\nM : %f", *pm1);
	printf("\nY : %f", *py1);
	printf("\nK : %f", *pk1);
r1 = 245;
g1 = 10;
b1 = 12;
rgbToCMYK(r1,g1,b1,pc1,pm1,py1,pk1);
	printf("\nC : %f", *pc1);
	printf("\nM : %f", *pm1);
	printf("\nY : %f", *py1);
	printf("\nK : %f", *pk1);
r1 = 150;
g1 = 102;
b1 = 255;
rgbToCMYK(r1,g1,b1,pc1,pm1,py1,pk1);
	printf("\nC : %f", *pc1);
	printf("\nM : %f", *pm1);
	printf("\nY : %f", *py1);
	printf("\nK : %f", *pk1);

//cmyk  to rgb

double c2 = 0.39;
double m2 = 0.76;
double y2 = 0.0;
double k2 = 0.31;
int r2 = 0;
int g2 = 0;
int b2 = 0;
int *pr2 = &r2;
int *pg2 = &g2;
int *pb2 = &b2;

cmykToRGB(c2,m2,y2,k2,pr2,pg2,pb2);
	printf("\n\nR : %d", *pr2);
	printf("\nG : %d", *pg2);
	printf("\nB : %d", *pb2);
c2 = 0.93;
m2 = 0.0;
y2 = 0.65;
k2 = 0.15;
cmykToRGB(c2,m2,y2,k2,pr2,pg2,pb2);
	printf("\nR : %d", *pr2);
	printf("\nG : %d", *pg2);
	printf("\nB : %d", *pb2);
c2 = 0.0;
m2 = 0.1;
y2 = 0.58;
k2 = 0.67;
cmykToRGB(c2,m2,y2,k2,pr2,pg2,pb2);
	printf("\nR : %d", *pr2);
	printf("\nG : %d", *pg2);
	printf("\nB : %d", *pb2);

//grayscale

int r3 = 2;
int g3 = 4;
int b3 = 6;
int *pr3 = &r3;
int *pg3 = &g3;
int *pb3 = &b3;
Mode m = 1;

toGrayScale(pr3,pg3,pb3,m);
	printf("\n\nR : %d", *pr3);
	printf("\nG : %d", *pg3);
	printf("\nB : %d", *pb3);

	r3 = 100;
	g3 = 120;
	b3 = 22;
	m = 2;
	
toGrayScale(pr3,pg3,pb3,m);
	printf("\nR : %d", *pr3);
	printf("\nG : %d", *pg3);
	printf("\nB : %d", *pb3);
	
	r3 = 245;
	g3 = 1;
	b3 = 61;
	m = 3;
	
toGrayScale(pr3,pg3,pb3,m);
	printf("\nR : %d", *pr3);
	printf("\nG : %d", *pg3);
	printf("\nB : %d", *pb3);

 return 0;
}