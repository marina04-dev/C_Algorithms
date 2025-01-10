#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int sum_squares_array(int *pinakas, int n);

int main() {
    int pinakas[SIZE];
    int i,sum,N=20;
    int a,b;
    
    /* Initialization of an array with 20 places with random numbers in range 1 to 30 */
    init_array(pinakas,N,1,30);
    
    /* Printing of the array */
    printf("Array Of Data: \n");
    print_array(pinakas,N);
    printf("\n\n");
    
    /* Printing the sum of the squares of the values of the array */
    printf("\nThe sum of the squares of the values of the array is: %d",sum_squares_array(pinakas,N));
}

void init_array(int *pinakas, int n, int a, int b) {
    int i;
    srand(time(NULL));
    for (i=0; i<n; i++) {
        pinakas[i]=a+rand()%(b-a+1);
    }
}

void print_array(int *pinakas,int n) {
    int i;
    printf("[");
    for (i=0; i<n; i++) {
        printf("%d ",pinakas[i]);
    }
    printf("%d]",pinakas[n-1]);
}

int sum_squares_array(int *pinakas, int n) {
    int i;
    int sum=0;
    for (i=0; i<n; i++) {
        sum+=pow(pinakas[i],2);
    }
    return sum;
}
