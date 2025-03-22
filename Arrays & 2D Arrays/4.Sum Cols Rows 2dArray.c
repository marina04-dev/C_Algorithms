#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 100
#define COLS 100

main()
{
	int array[ROWS][COLS], sum_row[ROWS], sum_col[COLS];
	int M=4, N=6;
	int i,j; 
	int a,b;
	
	/* Initialization of the array */
	srand(time(NULL));
	a=5; b=10; 
	
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			array[i][j]=a+rand()%(b-a+1);

	/* Ektypwsi toy arxikoy pinaka */ 
	printf("Array:\n");
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
			printf("%2d ", array[i][j]);
		printf("\n");
	}	


	/* Calculation of the summaries */

	/* rows */ 
	for (i=0; i<M; i++) {
	   sum_row[i]=0; 
	   for (j=0; j<N; j++) {
	      sum_row[i]+=array[i][j]; 
	   }
	}

	/* columns */ 
	for (j=0; j<N; j++) {
	   sum_col[j]=0; 
	   for (i=0; i<M; i++) {
	      sum_col[j]+=array[i][j]; 
	   }
	}

	/* Final print */ 
	printf("\n\nArray With Summaries:\n");
	for (i=0; i<M; i++) {
		for (j=0; j<N; j++)
			printf("%2d ", array[i][j]);
		printf("  %2d", sum_row[i]);
		printf("\n");
	}	
	
	/* Print of the summaries */ 
	printf("\n");
	for (j=0; j<N; j++) {
	   printf("%2d ", sum_col[j]);
	}

	
}
