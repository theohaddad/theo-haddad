#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	time_t t;
	FILE *fp = NULL;
	fp = fopen("textFile.txt", "a");

	srand((unsigned) time(&t));

	for(i = 0; i < 50; i++){
		fprintf(fp, "%d ", rand() % 100);
	}
	
	fprintf(fp, "\n");
	fclose(fp);

	return 0;
}
