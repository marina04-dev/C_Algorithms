/* Summary of Two Arrays in One Array (without functions)*/
#include <stdio.h>

#define ROWS 100
#define COLS 100

int main() {
    int array1[ROWS][COLS];
    int array2[ROWS][COLS];
    int array3[ROWS][COLS];
    int M=4, N=6;
    int i,j;
    int a,b;
    
    // Initialization of the arrays
    srand(time(NULL));
    a=5; b=10;
    // array1
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            array1[i][j]=a+rand()%(b-a+1);
        }
    }
    // array2
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            array2[i][j]=a+rand()%(b-a+1);
        }
    }
    
    
    /* Printing of the Arrays */
    // array1
    printf("Array 1:\n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%2d ", array1[i][j]);
        }
        printf("\n");
    }
    
    
    // array2
    printf("Array 2:\n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%2d ", array2[i][j]);
        }
        printf("\n");
    }
    
    
    /* Calculation of the 2 arrays summary */
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            array3[i][j]=array1[i][j]+array2[i][j];
        }
    }
    
    /* Printing of the array3 */
    printf("Array 3:\n");
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%2d ", array3[i][j]);
        }
        printf("\n");
    }
}
