/*
 ============================================================================
 Name        : Assignment6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x, y ,temp ;
	printf("Enter two numbers \n");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	temp = x;
	x = y;
	y = temp;

	printf("Numbers after swapping : %f %f",x,y);
	return EXIT_SUCCESS;
}
