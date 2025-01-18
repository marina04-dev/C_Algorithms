#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int two_max_array(int *pinakas, int n,int *max1, int *max2);

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
    
    /* Printing the two maximum values of the array */
    two_max_array(pinakas,N,&a,&b);
    printf("\nThe two maximum values of the array are: %d and %d",a,b);
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

int two_max_array(int *pinakas, int n,int *max1, int *max2) {
    int i;
    if (pinakas[0]>pinakas[1]) {
        *max1=pinakas[0];
        *max2=pinakas[1];
    }
    else {
        *max1=pinakas[1];
        *max2=pinakas[0];
    }
    for (i=2; i<n; i++) {
        if (pinakas[i]>*max1) {
            *max2=*max1;
            *max1=pinakas[i];
        }
        else if (pinakas[i]>*max2) {
            *max2=pinakas[i];
        }
    }
}
