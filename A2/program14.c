#include <stdio.h>

int main(int argc, char *argv[])
{ 
	int num, digit, sum = 0,
	scanf("%d\n", &num);

	while(num > 0){
		digit = num % 10;
		sum += digit;
		num /= 10;
	}

	printf("The sum of the digits is %d\n", sum);
	return 0;

}

