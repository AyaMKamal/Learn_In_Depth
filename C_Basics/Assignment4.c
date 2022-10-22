/*
 ============================================================================
 Name        : Assignment4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float i , j ,mul = 0;
    printf("Enter 1st float number : \n");
	fflush(stdout);
	scanf("%f",&i);
    printf("Enter 2nd float number : \n");
	fflush(stdout);
	scanf("%f",&j);

	mul = i*j;
	printf("Sum is : %f",mul);
	return EXIT_SUCCESS;
}
