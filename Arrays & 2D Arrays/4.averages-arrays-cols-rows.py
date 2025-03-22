#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 100
#define COLS 100

int main() {
    int pinakas[ROWS][COLS];
    double av_cols[COLS], av_rows[ROWS];
    int M=4, N=6;
    int i,j;
    int a,b;
    int sum;
    
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

	// Calculation of the array's averages
	// Rows Averages
	for (i=0; i<M; i++)
	{
	   sum=0; 
	   for (j=0; j<N; j++)
	   {
	      sum+=pinakas[i][j]; 
	   }
	   av_rows[i]=sum/(double)N;
	}
	
	
	// Columns Summaries
	for (j=0; j<N; j++)
	{
	   sum=0; 
	   for (i=0; i<M; i++)
	   {
	      sum+=pinakas[i][j]; 
	   }
	   av_cols[j]=sum/(double)M;
	}
	
	
	// Printing of the array 
    printf("\n\nArray With Averages:\n");
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
			printf("%5d ", pinakas[i][j]);
		printf("   %5.2lf ", av_rows[i]);
		printf("\n");
	}	
	
	
	/* Averages Printing */
	printf("\n");
	for (j=0; j<N; j++) {
	    printf("%2.2lf ", av_cols[j]);
	}
	
}
