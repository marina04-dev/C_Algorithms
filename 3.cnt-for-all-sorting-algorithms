#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000
#define TRUE 1 
#define FALSE 0

void init_array(int *pinakas, int n, int a, int b);
void copy_array(int *dest, int *src, int n);
void print_array(int *pinakas, int n);
void swap(int *a, int *b);
int bubble_sort(int *pinakas, int n);
int selection_sort(int *pinakas, int n);
int insertion_sort(int *pinakas, int n);
void mergesort(int *pinakas, int start, int finish, int *cnt);
void merge(int *pinakas, int start, int finish, int *cnt);
void quicksort(int *pinakas, int start, int finish, int *cnt);
int partition(int *pinakas, int start, int finish, int *cnt);

int main() {
    int pinakas[SIZE];
    int source[SIZE];
    int i,j,N=10000;
    int cnt;
    
    /* Initialization of an array with 20 places
    with random numbers in range 1 and 99 */
    init_array(source,N,0,1000);
    
    /* Print of the array */
    copy_array(pinakas, source, N);
    cnt=bubble_sort(pinakas,N);
    printf("\nBubble Sort: %d",cnt);
    
    copy_array(pinakas, source, N);
    cnt=insertion_sort(pinakas,N);
    printf("\nInsertion Sort: %d",cnt);
    
    copy_array(pinakas, source, N);
    cnt=selection_sort(pinakas,N);
    printf("\nSelection Sort: %d",cnt);
    
    copy_array(pinakas, source, N);
    cnt=0;
    mergesort(pinakas,0,N-1,&cnt);
    printf("\nMerge Sort: %d",cnt);
    
    copy_array(pinakas, source, N);
    cnt=0;
    quicksort(pinakas,0,N-1,&cnt);
    printf("\nQuick Sort: %d",cnt);
}


void init_array(int *pinakas, int n, int a, int b) {
    int i;
    srand(time(NULL));
    for (i=0; i<n; i++) {
        pinakas[i]=a+rand()%(b-a+1);
    }
}

void copy_array(int *dest, int *src, int n) {
    int i;
    for (i=0; i<n; i++) {
        dest[i]=src[i];
    }
}

void print_array(int *pinakas, int n) {
    int i;
    printf("[");
    for (i=0; i<n-1; i++) {
        printf("%2d, ", pinakas[i]);
    }
    printf("%2d]", pinakas[n-1]);
}

void swap(int *a, int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int bubble_sort(int *pinakas, int n) {
    int i,j;
    int cnt=0;
    for (i=0; i<n; i++) {
        for (j=n-1; j>=i+1; j--) {
            cnt++;
        }
        if (pinakas[j]<pinakas[j-1]) {
            swap(&pinakas[j], &pinakas[j-1]);
        }
    }
    return cnt;
}

int selection_sort(int *pinakas, int n) {
    int i,j,pos;
    int cnt=0;
    
    for (i=0; i<n; i++) {
        pos=i;
        for (j=i; j>=1; j--) {
            cnt++;
            if (pinakas[j]<pinakas[pos]) {
                pos=j;
            }
        }
        swap(&pinakas[i],&pinakas[pos]);
        
    }
    return cnt;
}

int insertion_sort(int *pinakas, int n) {
    int i,j;
    int cnt=0;
    for (i=1; i<n; i++) {
        for (j=i; j>=1; j--) {
            cnt++;
            if (pinakas[j]<pinakas[j-1]) {
                swap(&pinakas[j],&pinakas[j-1]);
            }
            else {
                break;
            }
        }
    }
    return cnt;
}

void mergesort(int *pinakas, int start, int finish, int *cnt) {
    int i, middle;
    if (start==finish) {
        return;
    }
    else if (start==finish-1) {
        (*cnt)++;
        if (pinakas[start]>pinakas[finish]) {
            swap(&pinakas[start],&pinakas[finish]);
        }
    }
    else {
        middle=(start+finish)/2;
        mergesort(pinakas,start, middle,cnt);
        mergesort(pinakas,middle+1,finish,cnt);
        merge(pinakas,start,finish,cnt);
    }
}

void merge(int *pinakas, int start, int finish, int *cnt) {
    int C[SIZE];
    int i,j,k;
    int middle, n,m;
    middle=(start+finish)/2;
    
    // 1st array PIN[start...middle]=PIN[i...n]
    i=start;
    n=middle;
    
    //2nd array PIN[middle+1...finish]=PIN[j...m]
    j=middle+1;
    m=finish;
    
    // C: merged array
    k=0;
    
    // 1. Merge of the two arrays
    while (i<=n && j<=m) {
        (*cnt)++;
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
    
    
    // 2. Copy of the array that is left out in the end of the merged array
    if (i==n+1) { // The first array ended
        while (j<=m) {
            C[k]=pinakas[j];
            k++;
            j++;
        }
    }
    else { // The second array ended
        while (i<=n) {
            C[k]=pinakas[i];
            k++;
            i++;
        }
    }
    
    // Copy C to the array
    k=0;
    i=start;
    while (i<=finish) {
        pinakas[i]=C[k];
        i++;
        k++;
    }
}


void quicksort(int *pinakas, int start, int finish, int *cnt) {
    int i,pos;
    if (start<finish) {
        pos=partition(pinakas,start,finish,cnt);
        quicksort(pinakas,start,pos-1,cnt);
        quicksort(pinakas,pos+1,finish,cnt);
    }
}


int partition(int *pinakas, int start, int finish, int *cnt) {
    int pivot,i,j;
    pivot=pinakas[start];
    i=start+1;
    j=finish;
    
    while (1) {
        (*cnt)++;
        while (pinakas[i]<=pivot && i<=finish) {
            i++;
            (*cnt)++;
        }
        while (pinakas[j]>pivot && j>=start) {
            j--;
            (*cnt)++;
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
