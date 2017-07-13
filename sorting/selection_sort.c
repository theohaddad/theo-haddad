#include <stdio.h>
#include <time.h>

void swap(int *q, int *r)
{
	int temp = *q;
	*q = *r;
	*r = temp;
}

void selection_sort(int array[], int n)
{
	int i, j, min;
	for(i=0; i<n-1; i++){
		min = i;
		for(j = i+1; j<n; j++){
			if(array[j] < array[min]){
				min = j;
			}
		}
		swap(&array[min], &array[i]);
	}
}

void print_array(int array[], int size)
{
	int i;
	for(i=0; i<size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main()
{
	int x, p, counter = 0;
	printf("Insert number of elements in array: ");
	scanf("%d", &x);
	int array[x];

	for(p=0; p<x; p++){
		printf("Enter element %d: ", p);
		scanf("%d", &array[p]);
	}

	int n = sizeof(array)/sizeof(array[0]);
	selection_sort(array, n);
	printf("----------------\n");
	printf("Sorted array: \n");
	print_array(array, n);

	printf("----------------\n");
	printf("Number of operations: %d\n", counter);

	return 0;
}
	
	
		
	

	
	
