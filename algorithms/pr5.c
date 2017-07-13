#include <stdio.h>
#include <stdlib.h>

int main()
{
	int filedata[100];
	FILE *fptr;
	
	fptr = fopen("textFile.txt", "a");

	fscanf(fptr, "%d", filedata);
	
	printf("Data from the file:\n%d", filedata);
	
	fclose(fptr);
	printf("\n");
	return 0;
}
	
