#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 100
#define COLS 100

main()
{
	int array[ROWS][COLS];
	double av_row[ROWS], av_col[COLS];
	int M=4, N=6;
	int i,j,sum; 
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


	/* Calculation of the averages */

	/* rows */ 
	for (i=0; i<M; i++) {
	   sum=0; 
	   for (j=0; j<N; j++) {
	      sum+=array[i][j]; 
	   }
	   av_row[i]=sum/(double)N;
	}

	/* columns */ 
	for (j=0; j<N; j++) {
	   sum=0; 
	   for (i=0; i<M; i++) {
	      sum+=array[i][j]; 
	   }
	   av_col[j]=sum/(double)M;
	}

	/* Final print */ 
	printf("\n\nArray With Summaries:\n");
	for (i=0; i<M; i++) {
		for (j=0; j<N; j++)
			printf("%5d ", array[i][j]);
		printf("  %5.2lf", av_row[i]);
		printf("\n");
	}	
	
	/* Print of the summaries */ 
	printf("\n");
	for (j=0; j<N; j++) {
	   printf("%5.2lf ", av_col[j]);
	}

	
}
