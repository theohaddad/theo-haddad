#include <stdio.h>

int main(int argc, char *argv[])
{
	int array[] = { 12, -3, 123, -78, -89, 12, 4 };
	int i;

	for(i = 0; i < 7; i++){
		if(array[i] < 0){
			printf("%d\n", array[i]);
			}
	}

	return 0;
}
