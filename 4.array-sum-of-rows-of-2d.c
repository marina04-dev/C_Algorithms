#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 100
#define COLS 100

int main() {
    int pinakas[ROWS][COLS], sums[ROWS];
    int M=10, N=15;
    int i,j;
    int a,b;
    
    // Initialization of the array 
    srand(time(NULL));
    a=5; b=10;
    
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            pinakas[i][j]=a+rand()%(b-a+1);
        }
    }
    
    // Printing of the array 
    printf("Array:\n");
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
			printf("%2d ", pinakas[i][j]);
		printf("\n");
	}	

	// Calculation of the array's summaries
	for (i=0; i<M; i++)
	{
	   sums[i]=0; 
	   for (j=0; j<N; j++)
	   {
	      sums[i]+=pinakas[i][j]; 
	   }
	}
	
	/* Printing of the summaries of the rows */ 
	printf("\n");
	for (i=0; i<M; i++)
	{
	   printf("%2d ", sums[i]);
	}
}
