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
void hybridsort(int *pinakas, int start, int finish);
int partition(int *pinakas, int start, int finish);
void insertion_sort(int *pinakas, int start,int finish);

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
	hybridsort(pinakas,0,N-1);

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


int partition(int *pinakas, int start, int finish) {
    int pivot, i, j;
    pivot=pinakas[start];
    i=start+1;
    j=finish;
    
    while(1) {
        while (pinakas[i]<=pivot && i<=finish) {
            i++;
        }
        while (pinakas[j]>pivot && j>=start) {
            j--;
        }
        if (i<j) {
            swap(&pinakas[i],&pinakas[j]);
        }
        else {
            swap(&pinakas[start],&pinakas[j]);
            return j;
        }
    }
}


void hybridsort(int *pinakas, int start, int finish) {
    int i,pos;
    if (start+5<=finish) {
        pos=partition(pinakas,start,finish);
        hybridsort(pinakas,start,pos-1);
        hybridsort(pinakas,pos+1,finish);
    }
    else {
        insertion_sort(pinakas,start,finish);
    }
}


void insertion_sort(int *pinakas, int start,int finish)
{
	int i,j;
	
	for (i=start+1; i<=finish; i++)
	{

		for (j=i; j>=1; j--)
		{
			if (pinakas[j]<pinakas[j-1])
				swap(&pinakas[j], &pinakas[j-1]);
			else
				break;
		}
	}	
}
