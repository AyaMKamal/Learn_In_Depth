/*
 ============================================================================
 Name        : PositiveOrNegative.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;
	printf("Enter number : \n");
	fflush(stdout);
	scanf("%f",&num);

	if (num > 0)
	{
		printf ("You entered Positive Number");

	}
	else if (num < 0)
	{
		printf ("You entered Negative Number");
	}
	else if(num == 0)
	{
		printf("You entered Zero");
	}
	return EXIT_SUCCESS;
}
