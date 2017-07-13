#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int num = atoi(argv[1]);
	int last_digit, first_digit, result1 = 1, result2 = 1;
	int counter = 1;

	if(n < 10){
		printf("The number only has 1 digit.\n");
	} else{
		last_digit = n % 10;
		while(n / 10 != 0){
			n = n/10;
			counter++;
		}
	
		first_digit = n;
	}
	num = num - last_digit;
	num = num + first_digit;

	first_digit *= pow(10, (counter-1));
	last_digit *= pow(10, (counter-1));

	num -= first_digit;
	num += last_digit;

	printf("%d.\n", num);
	return 0;
}

