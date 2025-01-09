#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000
#define TRUE 1
#define FALSE 0 

void init_sorted_array(int *pinakas, int n, int a, int max_step);
void print_array(int *pinakas, int n);
void print_partial_array(int *pinakas, int start, int finish, int n);
int binary_search_rec(int *pinakas, int start, int finish, int x);

int main() {
    int pinakas[SIZE];
    int x,found,N=19;
    
    // Initialization of an array with 20 places with random numbers in range 1 and 20 and item x
    init_sorted_array(pinakas,N,1,2);
    x=1+rand()%30;
    
    // Printing of the array and item x 
    printf("Array of Data: \n");
    print_array(pinakas,N);
    printf("\n\nItem x=%d",x);
    printf("\n\n");
    
    // Search of the item x 
    printf("\n-----------------------------------\n\n");
    found=binary_search_rec(pinakas,0,N-1,x);
    if (found) {
        printf("The item was found");
    }
    else {
        printf("The item was not found");
    }
    printf("\n\n");
}


void init_sorted_array(int *pinakas,int n,int a,int max_step) {
    int i;
    srand(time(NULL));
    pinakas[0]=a;
    for (i=1; i<n; i++) {
        pinakas[i]=pinakas[i-1]+rand()%max_step+1;
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

void print_partial_array(int *pinakas, int start, int finish, int n) {
    int i;
    printf("[");
    for (i=0; i<start; i++) {
        printf("  ",pinakas[i]);
    }
    for (i=start; i<=finish; i++) {
        printf("%3d",pinakas[i]);
    }
    for (i=finish; i<n-1; i++) {
        printf("  ",pinakas[i]);
    }
    printf("  ]");
}


int binary_search_rec(int *pinakas, int start,int finish, int x) {
    int middle;
    if (start>finish) {
        return FALSE;
    }
    else {
        middle=(start+finish)/2;
        if (x==pinakas[middle]) {
            return TRUE;
        }
        else if (x<pinakas[middle]) {
            return binary_search_rec(pinakas,start,middle-1,x);
        }
        else {
            return binary_search_rec(pinakas,middle+1,finish,x);
        }
    }
}
