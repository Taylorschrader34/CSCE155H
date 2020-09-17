#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

main ( int argc, char **argv ) {

	//Set int values
	int n = 120000;
	int counter = 0;
	int i;
	
	//Makes string
	char *sequence = (char *) malloc((n+1) * sizeof(char));

	//Opens file
	FILE * dnaFile = fopen(argv[1], "r");

	//Gets first char
	char char1 = fgetc(dnaFile);

	//Copies all chars from file to string
	while(char1 != EOF){
		if(char1 != ' '){
			if(char1 == 'A' || char1 == 'C' || char1 == 'G' || char1 == 'T'){
				sequence[counter] = char1;
				counter ++;
			}
		}11
		char1 = fgetc(dnaFile);
	}

	//Loops through sequence
	for(i = 0; i < 120000; i++){

		//If coden is Threonine or Alanine, then replace with artificial codon
		if(sequence[i] == 'A' && sequence[i + 1] == 'C' && sequence[i + 2] == 'T'){
			sequence[i + 1] = 'Y';
			i += 2;
		} else if(sequence[i] == 'A' && sequence[i + 1] == 'C' && sequence[i + 2] == 'C'){
			sequence[i + 1] = 'Y';
			sequence[i + 2] = 'Y';
			i += 2;
		} else if(sequence[i] == 'A' && sequence[i + 1] == 'C' && sequence[i + 2] == 'A'){
			sequence[i + 1] = 'Y';
			i += 2;
		} else if(sequence[i] == 'A' && sequence[i + 1] == 'C' && sequence[i + 2] == 'G'){
			sequence[i + 1] = 'Y';
			sequence[i + 2] = 'X';
			i += 2;
		} else if(sequence[i] == 'G' && sequence[i + 1] == 'C' && sequence[i + 2] == 'T'){
			sequence[i] = 'X';
			sequence[i + 1] = 'Y';
			i += 2;
		} else if(sequence[i] == 'G' && sequence[i + 1] == 'C' && sequence[i + 2] == 'C'){
			sequence[i] = 'X';
			sequence[i + 1] = 'Y';
			sequence[i + 2] = 'Y';
			i += 2;
		} else if(sequence[i] == 'G' && sequence[i + 1] == 'C' && sequence[i + 2] == 'A'){
			sequence[i] = 'X';
			sequence[i + 1] = 'Y';
			i += 2;
		} else if(sequence[i] == 'G' && sequence[i + 1] == 'C' && sequence[i + 2] == 'G'){
			sequence[i] = 'X';
			sequence[i + 1] = 'Y';
			sequence[i + 2] = 'X';
			i += 2;
		} else if(sequence[i] == ' ' || sequence[i] == '\n'){
			i+=0;
		} else {
			i += 2;
		}
	}

	//Gets output name
	char* outputName = argv[2];

	//Makes file
	FILE * outputDNA = fopen(outputName, "w");

	//Prints string to file
	fprintf(outputDNA, sequence);

	//Close file
	fclose(outputDNA);
}
