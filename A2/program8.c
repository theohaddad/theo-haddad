#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int x = 1;
	int sum = 0;

	while(x <= n){
		if(x % 2 != 0){
			sum = sum + x;
		}
		x++;
	}
	
	printf("The sum of the even numbers is %d.\n", sum);
	return 0;
}
