#include <stdio.h>

int main()
{
	int x, msb;
	printf("Input a number: ");
	scanf("%d", &x);
	msb = 1 << (sizeof(int)*8 - 1);
	
	if(x&msb){
		printf("The MSB is set.\n");
	}
	else{
		printf("The MSB is not set.\n");
	}

	return 0;
}
	
	
