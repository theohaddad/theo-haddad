#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2, *p, *q, max;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	p = &num1;
	q = &num2;
	
	if(*p > *q){
		max = *p;
	} else{
		max = *q;
	}
	
	printf("Max is: %d\n", max);
	return 0;
		
}

