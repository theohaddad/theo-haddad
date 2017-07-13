#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int x = 1;
	int sum;

	while(x <= n){
		sum = sum + x;
		x++;
	}
	
	printf("The sum of the numbers is %d.\n", sum);
	return 0;
}
		
