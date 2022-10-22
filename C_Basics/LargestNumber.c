/*
 ============================================================================
 Name        : LargestNumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float i ,y,z;

	printf("Enter three number \n");
	fflush(stdout);
    scanf("%f",&i);
    scanf("%f",&y);
    scanf("%f",&z);
	if ((i > y ) && (i >z))
	{
       printf ("%f the largest",i);
	}
	else if ((y > i) && (y > z))
	{
		printf ("%f the largest",y);
	}
	else if ((z > i) && (z > y))
	{
		printf ("%f the largest",z);
	}
	return EXIT_SUCCESS;
}
