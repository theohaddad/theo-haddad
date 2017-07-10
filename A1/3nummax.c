#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int num3 = atoi(argv[3]);

	if(argc < 4){
		printf("You need to input 3 numbers.\n");
	}
	else if(argc == 4){
		if(num1>num2 && num1>num3){
			printf("Max is %d.\n", num1);
		} else if(num2>num1 && num2>num3){
			printf("Max is %d.\n", num2);
		} else if(num1 == num2 && num1 == num3 && num2 == num3){
			printf("The numbers are all equal.\n");
		} else {
			printf("Max is %d.\n", num3);
		}
	} else{
		printf("Come on, just input 2 numbers!\n");
	}
	
	return 0;
}
