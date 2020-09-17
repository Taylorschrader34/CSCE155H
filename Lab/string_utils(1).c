
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include "string_utils.h"

int strContains(const char *str, const char *subStr){

		//Checks if substring is in string
		if(strstr(str, subStr) != NULL){

			return 1;

		}

	//Otherwise return false
	return 0;
}

char * acronymizer(const char *s){

		int a, i, count;

		//Sets int value
		a = 2;
		count = 1;

			//Counts words
			for(i = 0; i<=strlen(s);i++){
				if(' ' == s[i]){
					a += 1;
				}
			}

			//Creates string
			char *acronym = (char *) malloc((a) * sizeof(char));
			acronym[0] = s[0];

			//Gets first letter from each word
			for(i = 0; i<=strlen(s); i++){
				if(' ' == s[i]){
					acronym[count] = s[i + 1];
					count++;
				}
			}
			
			//Adds null terminating char
			acronym[a] = '\0';
			
			//Return
			return acronym;

}

void replaceChar(char *src, char oldChar, char newChar){

		int i;

		//Loops through length
		for(i = 0; i<=strlen(src); i++){
			//Checks if char is what is wanted to be replaced
			if(src[i] == oldChar){
				//Replace with new char
				src[i] = newChar;
			}
		}


}

void removeChar(char *src, char c){

	int i, j;
	
	//Creates new string
	char *temp = (char *) malloc((strlen(src)) * sizeof(char));
	
	//Copies old string to new
	strcpy(temp, src);
	
	//Loops through length
	for(i = 0; i<=strlen(temp); i++){
		//Skip is the char @ i is the char to be replaced
		if(temp[i] == c){
			for(j = i; j<strlen(temp); j++){
				temp[j] = temp[j+1];
			}
		}
	}

	//Copies new editted string to source
	strcpy(src, temp);
	
	//Free temp string
	free(temp);

}

char **lengthSplit(const char *s, int n){

	//Sets int values
	int len = strlen(s);
	int size = (strlen(s)/n)+1;
	int i, j, k, l;
	
	//Creates new string
	char **str = (char**)malloc((len + 1) * sizeof(char *));
	
	for(l=0; l< size; l++){
		str[l] = (char *) malloc( (n+1)  * sizeof(char *));
	
	}

	k=0;

	// creates a temp string and loops though the ith - ith + 3
	// element and sets the string to those elements and add that 
	// string to the array output
	for(i = 0; i < size; i ++){
		char * temper = (char*)malloc((n + 1) * sizeof(char));
		for(j = 0; j < n; j++){

			temper[j] = s[j + (n*k)];
		}
		strcpy(str[i],temper);
					
		k++;
		free(temper);
	}
	
	return str;
}
