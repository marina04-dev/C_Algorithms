#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000
#define TRUE 1
#define FALSE 0 

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int linear_search_pos(int *pinakas, int n,int x);

int main() {
    int pinakas[SIZE];
    int i,x,position,N=20;
    
    // Initialization of an array with 20 places with random numbers in range 1 and 20 and item x
    init_array(pinakas,N,1,20);
    x=1+rand()%20;
    
    // Printing of the array and item x 
    printf("Array of Data: \n");
    print_array(pinakas,N);
    printf("\n\nItem x=%d",x);
    printf("\n\n");
    
    // Search of the item x 
    position=linear_search_pos(pinakas,N,x);
    if (position>=0) {
        printf("The item was found in place %d!",position);
    }
    else {
        printf("The item was no found!");
    }
}


void init_array(int *pinakas,int n,int a,int b) {
    int i;
    srand(time(NULL));
    for (i=0; i<n; i++) {
        pinakas[i]=a+rand()%(b-a+1);
    }
}


void print_array(int *pinakas, int n) {
    int i;
    printf("[");
    for (i=0; i<n; i++) {
        printf("%2d, ",pinakas[i]);
    }
    printf("%2d]",pinakas[n-1]);
}

int linear_search_pos(int *pinakas, int n, int x) {
    int i;
    for (i=0; i<n; i++) {
        if (x==pinakas[i]) {
            return i;
        }
    }
    return -1;
}
