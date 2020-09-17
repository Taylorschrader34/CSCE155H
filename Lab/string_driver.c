#include<stdlib.h>
#include<stdio.h>
#include<math.h>
//#include "string_utils.h"

int main(int argc, char **argv) {

	const char str[] = "Nebraska";
	const char subStr[] = "Neb";
	const char s[] = "International Business Machines";
	char strR[] = "Nebraska";
	char strRemove[] = "Nebraska";
	char stringStr[] = "Hello worlddd";
	char ** c;
	int i, j;

	char *strP = str;
	char *subStrP = subStr;
	char *sP = s;
	char *strRP = strR;
	char *strRemoveP = strRemove;
	char *stringStrP = stringStr;

	int sub = strContains(strP, subStrP);

	char *string = acronymizer(sP);
	 printf("%s\n", string);

	replaceChar(strRP, 'a', 'b');

	removeChar(strRemoveP, 'a');

	c = lengthSplit(stringStrP, 3);


	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){

			printf("%c", c[i][j]);

		}

		printf("\n");

	}
	

	printf("Contains sub: %d\nNew string: %s\nNew remove: %s\n", sub, strR, strRemove);

}
