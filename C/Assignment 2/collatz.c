#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
	
	//Define variables
	int i, o;
	
	//Gets int value
	int n = atoi(argv[1]);
	
	//Sets o equal to int
	o = n;
	
	//Print input int
	printf("Input n: %d\n", n);
	
	
	if(n > 0){
	//Loop until int is 1
	for(i = 0; n != 1; i++){
	  
	  //If int is even, diide by 2 and print
	  if(n % 2 == 0){
	    printf("%d", n);
	    n = n/2;
	    printf(" / 2 = %d\n", n);
	  }
	  //Otherwise, multiply int by 3 and add 1, then print
	  else{
	    printf("3 * %d + 1 = ", n);
	    n = 3 * n +1;
	    printf("%d\n", n);
	  }
	}
	}else{
		printf("Invalid input, not defined for non-positive integers");
		
		//End
		return 0;
	}
	
	//Print original int and collatz number
	printf("==================\n");
	printf("Collatz Number for n = %d is %d", o, i);
	
	//End
	return 0;
	
}
