#include <stdio.h>

int call_by_reference(int *x, int *y);
int main(int argc, char *argv[])
{
	int num1, num2, x, sumx;
	printf("Input the first number: ");
	scanf("%d", &num1);
	printf("Input the second number: ");
	scanf("%d", &num2);
	sumx = call_by_reference(&num1, &num2);
	
	printf("The sum is %d\n", sumx); 
	return 0;
}

int call_by_reference(int *x, int *y)
{
	int sum;
	sum = *x + *y;
	return sum;
}

