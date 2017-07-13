#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 1;
	int n = atoi(argv[1]);

	while(n >= i){
		printf("%d ", n);
		n--;
	}
	
	printf("\n");
	return 0;
}
