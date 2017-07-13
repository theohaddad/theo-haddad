#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, i = 0, flag = 0;
	int array[10] = { 12, 3, 23, 4, 54, 5, 324, 89, 5, 32 };
	
	printf("Enter a number: ");
	scanf("%d", &x);

	for(i = 0; i < 10; i++){
		if(x == array[i]){
			flag = 1;
			break;
		}
	}

	if(flag == 1){
		printf("The element is on the list in position %d.\n", i);
	}
	else{
		printf("The element is not on the list.\n");
	}

	return 0;
}

