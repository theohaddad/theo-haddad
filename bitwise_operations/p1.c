#include <stdio.h>

int main()
{
	int x;
	printf("Input a number: ");
	scanf("%d", &x);
	
	printf("%d & 1 = %d\n", x, x&1);
	if(x&1 == 1){
		printf("The LSB is set.\n");
	}
	else{
		printf("The LSB is not set.\n");
	}

	return 0;
}
	
