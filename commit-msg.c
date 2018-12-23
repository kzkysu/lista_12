//#!usr/bin/env gcc

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const int maxdl = 50;
//char opis[1000];

int main(int argc, char *argv[])
{
	int dl=0; 
	FILE *plik = fopen(argv[1],"r");
	int ch;
	while( (ch=fgetc(plik))!=EOF )
	{
		if( ch == '\n' ) break;
		dl++;
	}
	fclose(plik);
	printf("\n\n");
	if( dl > maxdl )
	{
		printf("Zablokowano commit - dlugosc opisu %d maksymalna dlugosc opisu %d\n",dl, maxdl);
		return 1;
	}
	else printf("Dlugosc opisu odpowiednia: %d\n", dl );
	printf("\n\n");
	return 0; 
}
