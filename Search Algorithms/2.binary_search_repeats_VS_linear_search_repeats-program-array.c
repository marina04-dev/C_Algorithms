#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000
#define TRUE 1
#define FALSE 0 

void init_sorted_array(int *pinakas, int n, int a, int max_step);
void print_array(int *pinakas, int n);
void print_partial_array(int *pinakas, int start, int finish, int n);
int binary_search_repeats(int *pinakas, int n, int x);
int linear_search_repeats(int *pinakas, int n, int x);

int main() {
    int pinakas[SIZE];
    int x, cnt_linear, cnt_binary, N=19;
    
    /* Initialization of an array with 20 places with random numbers in range 1 and 20 and item's x */
    init_sorted_array(pinakas,N,1,2);
    x=1+rand()%30;
    
    /* Printing of the array and item's x */
    printf("Array of Data: \n");
    print_array(pinakas,N);
    printf("\n\nItem x=%d",x);
    printf("\n\n");
    
    /* Search of the item x */
    printf("\n------------------------------\n\n");
    cnt_linear=linear_search_repeats(pinakas,N,x);
    cnt_binary=binary_search_repeats(pinakas,N,x);
    
    if (cnt_linear<cnt_binary) {
        printf("The winner is linear search!");
    }
    else if(cnt_linear>cnt_binary) {
        printf("The winner is binary search!");
    }
    else {
        printf("Draw!");
    }
    printf("\n\nlinear=%d, binary=%d",cnt_linear,cnt_binary);
}


void init_sorted_array(int *pinakas, int n, int a, int max_step) {
    int i;
    srand(time(NULL));
    pinakas[0]=a;
    for (i=1; i<n; i++) {
        pinakas[i]=pinakas[i-1]+rand()%max_step+1;
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

int binary_search_repeats(int *pinakas, int n, int x) {
    int start, finish, middle, i, cnt;
    start=0;
    finish=n-1;
    cnt=0;
    
    while (start<=finish) {
        cnt++;
        middle=(start+finish)/2;
        if (x=pinakas[middle]) {
            return cnt;
        }
        else if(x<pinakas[middle]) {
            finish=middle-1;
        }
        else { // x>pinakas[middle]
            start=middle+1;
        }
    }
    return cnt;
}

int linear_search_repeats(int *pinakas, int n, int x) {
    int i, cnt;
    cnt=0;
    
    for (i=0; i<n; i++) {
        cnt++;
        if (x==pinakas[i]) {
            return cnt;
        }
    }
    return cnt;
}
