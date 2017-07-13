#include <stdio.h>

int main(int argc, char *argv[])
{
	int array[] = { 3, 2, 43, 3, 6 };
	int i, sum = 0;

	for(i = 0; i < 5; i++){
		sum += array[i];
	}

	printf("%d\n", sum);
	return 0;
}
		
	
