#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000
#define TRUE 1
#define FALSE 0 

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
void swap(int *a, int *b);

int main() {
    int pinakas[SIZE];
    int i,j,N=15;
    
    /* Initialization of an array with 20 places with random numbers in range 1 and 20 */
    init_array(pinakas,N,1,50);
    
    /* Representation of insertion sort function */
    printf("\t\t\tRepresentation of insertion sort function\n\n");
    printf("Start    : ");
    print_array(pinakas,N);
    
    /* Array sorting */
    for (i=1; i<N; i++) {
        for (j=1; j>=1; j--) {
            if (pinakas[j]<pinakas[j-1]) {
                swap(&pinakas[j],&pinakas[j-1]);
            }
            else {
                break;
            }
        }
        printf("\nStep %2d: ",i);
        print_array(pinakas,N);
    } 
    
    
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
        printf("%2d ,",pinakas[i]);
    }
    printf("%2d]",pinakas[n-1]);
}

void swap(int *a, int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
