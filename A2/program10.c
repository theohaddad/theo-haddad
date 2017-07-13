#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int counter = 1;
	
	while(n/10 != 0){
		n = n / 10;
		counter++;
	}
	
	printf("The number has %d digits.\n", counter);
	return 0;
}
