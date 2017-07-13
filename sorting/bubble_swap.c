#include <stdio.h>

void swap(int *q, int *r)
{
	int temp = *q;
	*q = *r;
	*r = temp;
}

void print_array(int array[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
	
void bubble_swap(int array[], int n)
{
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
	}
}

int main()
{
	int x, p;
	printf("Insert number of elements in array: ");
	scanf("%d", &x);
	int array[x];

	for(p=0; p<x; p++)
	{
		printf("Enter element %d: ", p);
		scanf("%d", &array[p]);
	}

	int n = sizeof(array)/sizeof(array[0]);
	bubble_swap(array, n);
	printf("\n");
	printf("Sorted array: \n");
	print_array(array, n);
	return 0;
}

	
