
//Sets enum type
typedef enum {
	AVERAGE = 1,
	LIGHTNESS = 2,
	LUMINOSITY = 3
}Mode;

//Initiates functions
int degreesToRadian(double degree, double *radians);

int annualPercentageYield(double apr, double *apy);

int getAirDistance(double latA, double longA, double latB, double longB, double *distance);

int rgbToCMYK(int r, int g, int b, double *c, double *m, double *y, double *k);

int cmykToRGB(double c, double m, double y, double k, int *r, int *g, int *b);

int toGrayScale(int *r, int *g, int *b, Mode m);