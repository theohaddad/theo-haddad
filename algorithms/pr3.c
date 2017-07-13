#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, num, x, flag = 0, m;
	printf("Input the number of elements to store in the array: ");
	scanf("%d", &num);
	int array[num];

	for(m = 0; m < num; m++){
		printf("Enter element - %d: ", m);
		scanf("%d", &array[m]);
	}

	printf("--------------------\n");
	
	printf("Enter a number: ");
	scanf("%d", &x);

	for(i = 0; i < num; i++){
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
