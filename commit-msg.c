//#!usr/bin/env gcc

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const int maxdl = 50;
char opis[1000];

int main(int argc, char *argv[])
{
	//int dl=strlen(argv[2]);
//	printf("%d", dl);
	int ch=0;
	int dl=0; 
	while((ch =  getchar())!=EOF && dl<1000 )
	{
		opis[dl]=ch;
		dl++;
	}
	printf("\n\n");
	if( dl > maxdl )
	{
		printf("Zablokowano commit - dlugosc opisu %d maksymalna dlugosc opisu %d\n",dl, maxdl);
		return 1;
	}
	else printf("Dlugosc opisu odpowiednia: %d\n", dl );
	for( int i=0;i<dl; i++ )
	{
		printf("%c",argv[0][i]);
	}
	printf("\n\n");
	return 0; 
}
