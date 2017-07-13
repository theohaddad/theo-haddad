#include <stdio.h>

int main(int argc, char * argv[])
{
	int n = atoi(argv[1]);
	int x = 1;

	while(x < n){
		if(x % 2 == 0){
			printf("%d ", x);
		}
		x++;
	}
	printf("\n");
	return 0;
}
