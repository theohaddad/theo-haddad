#include <stdio.h>

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);

	if(num % 2 == 0){
		printf("The number is even.\n");
	} else{
		printf("The number is odd.\n");
	}
	
	return 0;
}
