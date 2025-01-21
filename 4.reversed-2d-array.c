/* Reversed 2D Array (without function)*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 100
#define COLS 100

int main() {
    int array1[ROWS][COLS];
    int array2[ROWS][COLS];
    int M=2, N=4;
    int i,j;
    int a,b;
    
    // Initialization of the arrays
    srand(time(NULL));
    a=0; b=2;
    // array1
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            array1[i][j]=a+rand()%(b-a+1);
        }
    }
    
    
    
    /* Printing of the Array1 */
    printf("Array 1:\n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%2d ", array1[i][j]);
        }
        printf("\n");
    }
    
    
    /* Calculation of the reversed array1 */
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            array2[j][i]=array1[i][j];
        }
    }
    
    // Printing of the Array2 
    printf("Reversed Array 2:\n");
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            printf("%2d ", array2[i][j]);
        }
        printf("\n");
    }
}
