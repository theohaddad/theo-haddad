#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int mult = 1;
	int prod;
	
	while(mult <= 10){
		prod = n * mult;
		printf("%d\n", prod);
		mult++;
	}
	
	return 0;
}
		
	
