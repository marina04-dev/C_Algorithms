#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

#define TRUE 1
#define FALSE 0

void init_array(double *pinakas, int n, int a, int b);
void print_array(double *pinakas, int n);
void swap(double *a, double *b);
void bubble_sort(double *pinakas,int n);

int main()
{
	double pinakas[SIZE];
	int i,j,N=15;
	
	/* Initialization of an array with 20 places 
	   with random numbers in range 1 and 99 */
	
	init_array(pinakas,N,1,50);
	
	printf("Array Non Sorted  : ");
	print_array(pinakas,N);

	/* Sorting of the array */
	bubble_sort(pinakas,N);

	printf("\nSorted array   : ");
	print_array(pinakas,N);	
}

void init_array(double *pinakas, int n, int a, int b)
{
	int i;
	
	srand(time(NULL));
	
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1)+rand()%100/100.0;
}

void print_array(double *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%2.2lf, ",pinakas[i]);
	printf("%2.2lf]",pinakas[n-1]);
}

void swap(double *a, double *b)
{
	double temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubble_sort(double *pinakas, int n)
{
	int i,j;
	
	for (i=0; i<n; i++)
	{

		for (j=n-1; j>=i+1; j--)
		{
			if (pinakas[j]<pinakas[j-1]) {
				swap(&pinakas[j], &pinakas[j-1]);
		    }
		}
	}	
}

