#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "pressure.h"

int convertPressure(double *pap, double *psip, double *atmp, double *torrp, Scale scale){
	
	//Checks for out of bounds
	if( 0 >= scale >= 3 ) {

	printf("Error: invalid scale");
	return 1;
	}	
	
	//Calculates pressure values based on scale given
	if(scale == PASCAL){
	
		*psip = *pap / 6894.75729;
		*atmp = *pap / 101325;
		*torrp = *pap * 760 / 101325;
	
	}	else if(scale == PSI){
	
		*pap = *psip * 6894.75729;
		*atmp = *psip * 14.695949;
		*torrp = *atmp * 760;
	
	}	else if(scale == ATM){
		
		*psip = *atmp / 0.068045964;
		*pap = *atmp * 101325;
		*torrp = *atmp / 760;
	
	}else{
		
		*pap = *torrp * 760 * 0.068045964;
		*atmp = *pap  / 101325;
		*psip = *pap / 6894.75729;
	
	}
	return 0;
	
}
