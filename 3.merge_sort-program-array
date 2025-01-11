#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

#define TRUE 1
#define FALSE 0
int depth;

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
void swap(int *a, int *b);
void merge(int *pinakas, int start, int finish);
void merge_sort(int *pinakas, int start, int finish);

int main()
{
	int pinakas[SIZE];
	int i,j,N=15;
	
	/* Initialization of an array with 20 places 
	   with random numbers in range 1 and 99 */
	
	init_array(pinakas,N,1,50);
	
	printf("Array Non Sorted  : ");
	print_array(pinakas,N);

	/* Sorting of the array */
	depth=0;
	merge_sort(pinakas,0,N-1);

	printf("\nSorted array   : ");
	print_array(pinakas,N);	
}

void init_array(int *pinakas, int n, int a, int b)
{
	int i;
	
	srand(time(NULL));
	
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}

void print_array(int *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%2d, ",pinakas[i]);
	printf("%2d]",pinakas[n-1]);
}

void swap(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}

void merge(int *pinakas, int start, int finish) {
    int C[SIZE];
    int i,j,k;
    int middle, n, m;
    
    middle=(start+finish)/2;
    
    /* 1st array PIN[start...middle]=PIN[i...n] */
    i=start;
    n=middle;
    
    /* 2nd array PIN[middle+1...finish]=PIN[j...m] */
    j=middle+1;
    m=finish;
    
    /* C: Merged array */
    k=0;
    
    /* 1. Merge of the two arrays */
    while (i<=n && j<=m) {
        if (pinakas[i]<pinakas[j]) {
            C[k]=pinakas[i];
            k++;
            i++;
        }
        else {
            C[k]=pinakas[j];
            k++;
            j++;
        }
    }
    
    /* Copy of the array that is left over in the end of the mixed array */
    if (i==n+1) { /* The 1st array ended */
        while (j<=m) {
            C[k]=pinakas[j];
            k++;
            j++;
        }
    }
    else { /* The 2nd array ended */
        while (i<=n) {
            C[k]=pinakas[i];
            k++;
            i++;
        }
    }
    
    /* 3. Copy of C in the array */
    k=0;
    i=start;
    while (i<=finish) {
        pinakas[i]=C[k];
        i++;
        k++;
    }
}

void merge_sort(int *pinakas, int start, int finish)
{
	int i,middle;
	depth++;
	printf("\n");
	for (i=0; i<depth; i++) {
	    printf(" ");
	}
	printf("%2d %2d ", start, finish);
	for (i=depth; i<10; i++) {
	    printf(" ");
	}
	printf(":");
	print_array(pinakas,15);
	
	if (start==finish) {  // 1 item
	    return;
	}
	else if (start==finish-1) { // 2 items
	    if (pinakas[start]>pinakas[finish]) {
	        swap(&pinakas[start], &pinakas[finish]);
	    }
	}
	else {
	    middle = (start+finish)/2;
	    merge_sort(pinakas,start,middle);
	    merge_sort(pinakas,middle+1,finish);
	    merge(pinakas,start,finish);
	}
	printf("\n");
	for (i=0; i<depth; i++) {
	    printf(" ");
	}
	printf("%2d %2d ", start, finish);
	for (i=depth; i<10; i++) {
		printf(" ");
	}
	printf(":");
	depth--;
	print_array(pinakas,15);
}
