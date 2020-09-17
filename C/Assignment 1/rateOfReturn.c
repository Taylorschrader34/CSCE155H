#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
	
	double initial, final, finalD, years, weeks, year, week, day, days, rate;

	
	scanf("%lf", &initial);
	scanf("%lf", &final);
	scanf("%lf", &year);
	scanf("%lf", &week);
	scanf("%lf", &day);
	
  weeks = ((week * 7)/ 365);
  days = day / 365;
  years = 1/(year + weeks + days);
  
  finalD = (final/initial);
  
  rate = ceil(((pow(finalD, years)-1)*100) *1000) / 1000;
  
  printf("Initial Value: $%lf\nFinal Value: $%lf\nYears: %lf\nAnnualized Rate of Return: %lf%%", initial, final, year + days + weeks, rate);

	
	
	return 0;
}