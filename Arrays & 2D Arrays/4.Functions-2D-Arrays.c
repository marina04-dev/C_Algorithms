#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create_array(int ***array, int m, int n);
void init_array(int **array, int m, int n, int a, int b);
void sum_array(int **array3, int **array1, int **array2, int m, int n);
void print_array(int **array, int m, int n);
void release_array(int **array, int m, int n);

main()
{
	int **array1, **array2, **array3;
	int M=4, N=6;
	int i,j; 
	int a,b;
	
	/* Arrays Creation */
	create_array(&array1, M, N);
	create_array(&array2, M, N);
	create_array(&array3, M, N);
	
	/* Arrays Initialization */
	srand(time(NULL));
	a=4; b=5;
	init_array(array1, M, N, a, b);
	init_array(array2, M, N, a, b);

	/* Arrays Printings */ 
	printf("Array 1:\n");
	print_array(array1, M, N);	

	printf("Array 2:\n");
	print_array(array2, M, N);		

	/* Summary Calculation */
	sum_array(array3, array1, array2, M, N);

	/* Summary Printing - Array 3*/ 
	printf("Array 3:\n");
	print_array(array3, M, N);
	
	/* Memory Release */
	release_array(array1, M, N);
	release_array(array2, M, N);
	release_array(array3, M, N);
	
}

void create_array(int ***array, int m, int n)
{
	int i; 
	(*array) = (int **)malloc(sizeof(int *)*m);
	if (!(*array)) {
		printf("Error allocating memory!");
		exit(0);
	}
	
	for (i=0; i<n; i++) {
		(*array)[i]=(int *)malloc(sizeof(int)*n);
		if (!(*array)[i]) {
			printf("Error Allocating Memory!");
			exit(0);
		}
	}
}

void init_array(int **array, int m, int n, int a, int b) {
	int i,j; 
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			array[i][j]=a+rand()%(b-a+1);	
		}
	}
}

void sum_array(int **array3, int **array1, int **array2, int m, int n) {
	int i,j;
	for (i=0; i<m; i++) {
	   for (j=0; j<n; j++) {
	      array3[i][j]=array1[i][j]+array2[i][j];
	   }
	}
}

void print_array(int **array, int m, int n) {
	int i, j; 
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf("%2d ", array[i][j]);
		}
		printf("\n");
	}		
}

void release_array(int **array, int m, int n) {
	int i; 
	for (i=0; i<m; i++) {
		free(array[i]); 
	}
	free(array);
}
