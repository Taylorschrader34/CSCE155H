#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {
	
	int decibel;
	
	decibel = atoi(argv[1]);
	
	if(decibel > 0 && decibel < 60) {
		printf("Quiet\n");
	} else if(decibel <= 70){
		printf("Convosational\n");
	} else if(decibel <= 90){
		printf("Loud\n");
	} else if(decibel <= 110){
		printf("Very Loud\n");
	} else if(decibel <= 129){
		printf("Dangerous\n");
	} else if(decibel <= 194){
		printf("Very Dangerous\n");
	} else {
		printf("Get help");
	}
	
	return 0;
}