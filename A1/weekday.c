#include <stdio.h>

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);

	if(num == 1){
		printf("Sunday.\n");
	} else if(num == 2){
		printf("Monday.\n");
	} else if(num == 3){
		printf("Tuesday.\n");
	} else if(num == 4){
		printf("Wednesday.\n");
	} else if(num == 5){
		printf("Thursday.\n");
	} else if(num == 6){
		printf("Friday.\n");
	} else if(num == 7){
		printf("Saturday.\n");
	} else{
		printf("Please input a number from 1 to 7.\n");
	}

	return 0;
}
