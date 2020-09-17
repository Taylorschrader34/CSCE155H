#include<stdio.h>
#include "pressure.h"

int main(int argc, char **argv) {
	
	//Initiates vars and enum
	double unit = 0;
	double pa = 0;
	double psi = 0;
	double atm = 0;
	double torr = 0;
	double *pap = &pa;
	double *psip = &psi;
	double *atmp = &atm;
	double *torrp = &torr;
	Scale scale;
	
	//Asks user for input
	printf("Choose a unit:\n1: Pascal\n2: PSI\n3: Atmosphere\n4: Torr");
	
	scanf("%d", scale);
	
	printf("Enter Value: ");
	
	scanf("%d", unit);
	
	//Checks for scale to know which unit is given
	if(scale == 1){
		*pap = unit;
	}	else if(scale == 2){
		*psip = unit;
	}	else if(scale == 3){	
		*atmp = unit;
	}	else{
		*torrp = unit;
	}
	
	//Runs function
	convertPressure( pap, psip, atmp, torrp, scale);

	//Prints output
	printf("Pascal: %f\nPSI: %f\nAtmosphere: %f\nTorr: %f", *pap, *psip, *atmp, *torrp);
	
}