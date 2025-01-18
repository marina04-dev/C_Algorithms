#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
void copy_1d_table(int *a, int *b, int n);
void sum_1d_table(int *c,int *a, int *b, int n);
int product_1d_table(int *a, int *b, int n);

int main() {
    int pinakas[SIZE], pinakas2[SIZE], c;
    int i,N=3;
    
    // Initialization of the arrays
    srand(time(NULL));
    init_array(pinakas,N,1,5);
    init_array(pinakas2,N,1,5);
    
    // Printing of the arrays
    printf("\t\t\tPresentation of the Copied Arrays\n\n");
    
    printf("\nFirst: ");
    printf("\n1st Array: ");
    print_array(pinakas,N);
    printf("\n2nd Array: ");
    print_array(pinakas2,N);
    
    // Printing of the 3rd array (multiplication)
    printf("\nMultiplication...");
    printf("%d",product_1d_table(pinakas,pinakas2,N));
    
    
    
}

void init_array(int *pinakas, int n, int a, int b) {
    int i;
    for (i=0; i<n; i++) {
        pinakas[i]=a+rand()%(b-a+1);
    }
}

void print_array(int *pinakas, int n) {
    int i;
    printf("[");
    for (i=0; i<n-1; i++) {
        printf("%2d, ",pinakas[i]);
    }
    printf("%2d]",pinakas[n-1]);
}

void copy_1d_table(int *a, int *b, int n) {
    int i;
    for (i=0; i<n; i++) {
        a[i]=b[i];
    }
}

void sum_1d_table(int *c, int *a, int *b, int n) {
    int i;
    for (i=0; i<n; i++) {
        c[i]=a[i]+b[i];
    }
}

int product_1d_table(int *a, int *b, int n) {
    int i;
    int sum=0;
    for (i=0; i<n; i++) {
        sum+=a[i]*b[i];
    }
    return sum;
}
