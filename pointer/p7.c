#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, x;
	printf("Input the number of elements to store in the array: ");
	scanf("%d", &x);
	int array[x];

	for(i = 0; i < x; i++){
		printf("Enter element - %d: ", i);
		scanf("%d", &array[i]);
	}

	for(i = 0; i < x; i++){
		printf("element - %d: %d\n", i, array[i]);
	}

	return 0;
}
