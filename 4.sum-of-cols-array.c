#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 100
#define COLS 100

int main() {
    int pinakas[ROWS][COLS], sums[COLS];
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
	for (j=0; j<N; j++)
	{
	   sums[j]=0; 
	   for (i=0; i<N; i++)
	   {
	      sums[j]+=pinakas[i][j]; 
	   }
	}
	
	/* Printing of the columns summaries */ 
	printf("\n");
	for (j=0; j<N; j++)
	{
	   printf("%2d ", sums[j]);
	}
}
