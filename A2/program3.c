#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 1; 	
	char x = 'A';

	while(i <= 26){
		printf("%c ", x);
		i++;
		x++;
	}
	
	printf("\n");
	return 0;

}
