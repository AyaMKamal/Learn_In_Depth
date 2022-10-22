/*
 ============================================================================
 Name        : Ex_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100];
	int length=0;
	int i = 0;

	printf("Enter the string \n");
	fflush(stdout);
	gets (str);

	while (str [i] != '\0')
	{
		i++;
		length ++;
	}
	printf("The length of the string equal : %d",length);
	fflush(stdout);

	return EXIT_SUCCESS;
}
