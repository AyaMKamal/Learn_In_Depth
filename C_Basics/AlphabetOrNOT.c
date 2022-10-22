/*
 ============================================================================
 Name        : AlphabetOrNOT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("Enter the character : \n");
	fflush(stdout);
	scanf("%c" , &ch);
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && (ch <= 'Z')))
	{
		printf("%c is an alphabet ",ch);
	}
	else
	{
		printf("%c is not an alphabet ",ch);
	}

	return EXIT_SUCCESS;
}
