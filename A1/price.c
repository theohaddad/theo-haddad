#include <stdio.h>

int main(int argc, char *argv[])
{
	int units;
	float amount, tax = 1.2;
	
	units = atoi(argv[1]);
	
	if(units <= 50){
		amount = units * 0.5;
	}
	else if(units <= 150){
		amount = 25 + (units - 50) * 0.75;
	}
	else if(units <= 250){
		amount = 100 + (units - 150) * 1.20;
	}
	else{
		amount = 220 + (units - 250) * 1.50;
	}
	
	amount *= tax;
	
	printf("Your bill is: $%.2f\n", amount);

	return 0;
}
		
