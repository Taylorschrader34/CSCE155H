#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "matrix_utils.h"

int isEqual(int **A, int **B, int n){

	int i, j;

	for(i = 0; i < n; i++){

		for(j = 0; j < n; j++){

			if(A[i][j] != B[i][j]){

				return 0;

			}
		}
	}

	return 1;

}

int *getRow(int **A, int n, int i){

	int j, b[n];

	for(j = 0; j < n; j++){

		b[j] = A[i][j];

	}

	int *pointerb = b;

	return pointerb;

}

int *getCol(int **A, int n, int j){

	int k, c[n];

	for(k = 0; k < n; k++){

		c[k] = A[k][j];

	}

	int *pointerc = c;

	return pointerc;

}

int ** product(int **A, int **B, int n){

	int i, j, k, counter;
	counter = 0;
	int **C = (int **)malloc( n * sizeof(int*));

	for(k = 0; k < n; k++ ){
		C[k] = (int *)malloc( n * sizeof(int));

	}
	for(i = 0; i < n; i++){

		for(j = 0; j < n; j++){

			C[i][counter] += A[i][j] * B[j][i];

		}
		counter++;
	}

	return C;

}

int ** matrixPower(int **A, int size, int n){
	int i, k;
	int **B = (int **)malloc( n * sizeof(int*));

	for(k = 0; k < n; k++ ){
			B[k] = (int *)malloc( n * sizeof(int));

		}

	while(i = 0){
		B = product(A,A,size);
		i++;
	}
	while(i>0 && i<n){
		B = product(B,A,size);
		i++;
	}
	return B;

}
