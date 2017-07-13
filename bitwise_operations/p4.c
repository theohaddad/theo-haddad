#include <stdio.h>

int main()
{
	int x, u, comp, a;
	printf("Input a number: ");
	scanf("%d", &a);
	printf("Input a bit number to set: ");
	scanf("%d", &x);
	u = sizeof(x)*8;
	
	comp = 1 << (x-1);
	if(a&comp){
		printf("Bit %d is 1\n", x);
	}
	else{
		printf("Bit %d is 0\n", x);
	}
	
	return 0;
}
