#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 100
#define COLS 100

int main() {
    int pinakas[ROWS][COLS];
    int M=10, N=15;
    int i,j;
    int a,b;
    
    // Initialization of the array 
    srand(time(NULL));
    a=5; b=10;
    for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			pinakas[i][j]=a+rand()%(b-a+1);

    
    // Printing the array
    printf("Array:\n");
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
			printf("%2d ", pinakas[i][j]);
		printf("\n");
	}	
	
	 
	// Printing the rows of the array (reversed) 
	printf("Rows Of The Array (Reversed):\n");
	for (i=0; i<M; i++) {
	    for (j=N-1; j>=0; j--) {
	        printf("%2d ",pinakas[i][j]);
	    }
	    printf("\n");
	}
	
}
