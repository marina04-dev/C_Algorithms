#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

#define TRUE 1
#define FALSE 0

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
void swap(int *a, int *b);
void insertion_sort(int *pinakas, int n);

main()
{
	int pinakas[SIZE];
	int i,j,N=15;
	
	/* Initialization of an array with 20 places with random
	numbers in range 1 and 99 */
	
	init_array(pinakas,N,1,50);
	
	/* Printing of the array*/
	printf("Start   : ");
	print_array(pinakas,N);

	/* Sorting of the array */
	insertion_sort(pinakas, N);

	printf("\nEnd   : ");
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

void insertion_sort(int *pinakas, int n)
{
	int i,j;
	
	for (i=1; i<n; i++)
	{

		for (j=i; j>=1; j--)
		{
			if (pinakas[j]>pinakas[j-1])
				swap(&pinakas[j], &pinakas[j-1]);
			else
				break;
		}
	}	
}
