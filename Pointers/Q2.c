/*
 ============================================================================
 Name        : Q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alpha [27];
	int i ;
	char *Palpha;
	printf("Print the alphabet : \n");
	printf("--------------------------\n");
	fflush(stdout);
	Palpha = alpha;
	for(i = 0 ; i < 26 ; i++)
	{
		*Palpha = i + 'A';
		Palpha++;
	}
	Palpha = alpha;
	for(i = 0 ; i < 26 ; i++)
	{
		printf("%c ",*Palpha);
		fflush(stdout);
		Palpha++;

	}
}
