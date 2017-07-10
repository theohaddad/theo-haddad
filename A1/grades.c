#include <stdio.h>

int main(int argc, char *argv[])
{
	int grade1 = atoi(argv[1]);
	int grade2 = atoi(argv[2]);
	int grade3 = atoi(argv[3]);
	int grade4 = atoi(argv[4]);
	int grade5 = atoi(argv[5]);

	int sum = grade1 + grade2 + grade3 + grade4 + grade5;
	double average = sum / 5;
	
	if(average >= 90){
		printf("Your final grade is an A.\n");
	} else if(average >= 80) {
		printf("Your final grade is a B.\n");
	} else if(average >= 70) {
		printf("Your final grade is a C.\n");
	} else if(average >= 60) {
		printf("Your final grade is a D.\n");
	} else {
		printf("Your final grade is an F.\n");
	}
	
	return 0;
}
	
