#include <stdio.h>

int main(int argc, char *argv[])
{
	int m = 29;
	int *ab;
	ab = &m;

	printf("Address of m: %p\n", &m);
	printf("Value of m: %d\n", m);

	printf("Address of pointer ab: %p\n", &ab);
	printf("Content of pointer ab: %d\n", *ab);

	m = 34;
	printf("Address of pointer ab: %p\n", &ab);
	printf("Content of pointer ab: %d\n", *ab);

	*ab = 7;
	printf("Address of m: %p\n", &m);
	printf("Value of m: %d\n", m);

	return 0;
}

