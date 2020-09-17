
//Sets enum
typedef enum {
	PASCAL = 1,
	PSI = 2,
	ATM = 3,
	TORR = 4
} Scale;

//Initiates functions
int convertPressure( double *pap, double *psip, double *atmp, double *torrp, Scale scale);
