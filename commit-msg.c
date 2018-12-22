//#!usr/bin/env gcc

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const int maxdl = 50;

int main(int argc, char *argv[])
{
	int dl=strlen(argv[1]);
//	printf("%d", dl);
	if( dl > maxdl )
	{
		printf("Zablokowano commit - dlugosc opisu %d maksymalna dlugosc opisu %d\n",dl, maxdl);
		return 1;
	}
	return 0; 
}
