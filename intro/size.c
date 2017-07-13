#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = { 10, 12, 13, 14, 20 };
	char name[] = "Theo";
	char full_name[] = { 'T', 'h', 'e', 'o', ' ', 'H', 'a', 'd', 'd', 'a', 'd', '\0' };

	printf("The size of an int is: %ld\n", sizeof(int));
	printf("The size of areas (int[]) is: %ld\n", sizeof(areas));

	printf("The number of ints in areas is: %ld\n", sizeof(areas)/sizeof(int));
	printf("The first area is %d, the second %d.\n", areas[0], areas[1]);
	printf("The size of char is: %ld\n", sizeof(char));
	printf("The size of name (char[]) is: %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name)/ sizeof(char));
		
	printf("The size of full name (char[]) is: %ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char));

	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;
}
	
