#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int counter = 1;
	int last_digit;
	int first_digit;

	if(n < 10){
		printf("The only digit is %d.\n", n);
	} else{
		last_digit = n % 10;
		while(n / 10 != 0){
		n = n/10;
		}
	
		first_digit = n;
	
		printf("The first digit is %d and the last digit is %d.\n", first_digit, last_digit);
	}

	return 0;
}
