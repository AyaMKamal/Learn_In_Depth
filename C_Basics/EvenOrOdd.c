/*
 ============================================================================
 Name        : EvenOrOdd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i ;
	printf("Enter the number: \n");
	fflush(stdout);
	scanf("%d", &i);

	if (i % 2 == 0)
	{
		printf("Even Number");
	}
	else
	{
		printf("Odd Number");
	}
	return EXIT_SUCCESS;
}
