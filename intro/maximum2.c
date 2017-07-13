#include <stdio.h>

int main(int argc, char *argv[])
{
	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);

	if(argc < 3){
		printf("You need to input 2 numbers.\n");
	} else if(argc == 3){
		if(arg1 > arg2){
			printf("%d is the greater number.\n", arg1);
		}
		else if(arg1 == arg2){
			printf("The numbers are equal.\n");
		}
		else{
			printf("%d is the greater number.\n", arg2);
		}
	} else{
		printf("Come on, input only 2 numbers.\n");
	}

	return 0;
}	
