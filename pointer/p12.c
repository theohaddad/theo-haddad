#include <stdio.h>

int main()
{
	int x, i, result;
	printf("Input a number: ");
	scanf("%d", &x);
	result = x;

	for(i=x-1; i>1; i--){
		result *= i;
	}

	printf("%d! = %d\n", x, result);
	return 0;
}
	
	
