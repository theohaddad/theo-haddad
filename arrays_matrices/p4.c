#include <stdio.h>

int main(int argc, char *argv[])
{
	int array[] = { 3, 453, 23, 3, -5, 23, -98, -900 };
	int min = array[0];
	int max = array[0];
	int i;
	
	for(i = 0; i < 8; i++){
		if(array[i] < min){
			min = array[i];
		}
	}

	for(i = 0; i < 8; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	
	printf("The minimum number is %d.\n", min);
	printf("The maximum number is %d.\n", max);
	
	return 0;
}
