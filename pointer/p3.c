#include <stdio.h>

int main(int argc, char *argv[])
{
	int m = 300;
	double fx = 300.600006;
	char cht = 'z';
	int *p;
	double *q;
	char *r;
	p = &m;
	q = &fx;
	r = &cht;

	printf("address of m = %p\n", &m);
	printf("address of fx = %p\n", &fx);
	printf("address of cht = %p\n", &cht);
	
	printf("value at address of m = %d\n", m);
	printf("value at address of fx = %f\n", fx);
	printf("value at address of cht = %c\n", cht);

	printf("address of m = %p\n", p);
	printf("address of fx = %p\n", q);
	printf("address of cht = %p\n", r);

	printf("value at address of m = %d\n", *p);
	printf("value at address of fx = %f\n", *q);
	printf("value at address of cht = %c\n", *r);

	return 0;
}
	
