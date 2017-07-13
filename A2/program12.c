#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int counter = 1;
	int last_digit;
	int first_digit;
	int sum;

	if(n < 10){
		printf("The only digit is %d.\n", n);
	} else{
		last_digit = n % 10;
		while(n / 10 != 0){
			n = n/10;
		}
	
		first_digit = n;
	}
	sum = first_digit + last_digit;
	printf("The sum of the first and last digits is %d.\n", sum);

	return 0;
}
