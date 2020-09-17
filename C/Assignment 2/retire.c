#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
	
	double start, monthly, arr, ari, years, iar, months, interest, balance, total;
	int i;
	
	//Scans for inputs
	start = atof(argv[1]);
	monthly = atof(argv[2]);
	arr = atof(argv[3]);
	ari = atof(argv[4]);
	years = atof(argv[5]);
	
	//Sets current balance to starting amount
	balance = start;
	
	//Calc inflation-adjusted rate of return
	iar = (((1 + arr)/(1 + ari)) - 1)/12;
	
	//Calc number of months
	months = years * 12;
	
	//Prints header
	
	if(monthly * 12 > 17500){
	printf("Illegal: monthly contributions exceed $17,500 annual limit");
	}else{
	printf("Month\tInterest\tBalance\n");
	
	//Loops for number of months
	for(i = 1; i < months + 1; i++){
		
		interest = iar * balance;
		
		interest = round(interest * 100.0)/100.0;
		
		total = interest + total;
		
		balance = balance + monthly + interest;
		
		printf("%d \t$%lf \t$%lf\n", i, interest, balance);
	}
	
	printf("Total Interest Earned: $ %lf\nTotal Nest Egg: $ %lf", total, balance);
	}

	return 0;
	
}