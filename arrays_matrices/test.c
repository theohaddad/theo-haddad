#include <stdio.h>

int main(int argc, char *argv[])
{
	int size = argc;
	int array[size] = atoi(argv[]);
	int i;
	
	for(i=1; i < size; i++){
		printf("%d\n", argv[i]);
	}

	return 0;
}
	
