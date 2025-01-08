#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 1000

void print_array(int *pinakas, int n);
void fibonacci(int *pinakas, int n);

int main() {
    int pinakas[SIZE];
    int i,sum,N=20,x;
    
    /* Calculation of the fibonacci numbers */
    fibonacci(pinakas,N);
    
    /* Printing of the array */
    printf("Array Of Data: \n");
    print_array(pinakas,N);
    printf("\n\n");
}

void print_array(int *pinakas,int n) {
    int i;
    printf("[");
    for (i=0; i<n; i++) {
        printf("%d ",pinakas[i]);
    }
    printf("%d]",pinakas[n-1]);
}

void fibonacci(int *pinakas,int n) {
    int i;
    pinakas[0]=1;
    pinakas[1]=1;
    for (i=2; i<n; i++) {
        pinakas[i]=pinakas[i-1]+pinakas[i-2];
    }
}
