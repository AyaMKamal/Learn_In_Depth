/*
 ============================================================================
 Name        : Assignment7.c
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
	x =x - y;
	y = x + y;
	x = y - x;

	printf("Numbers after swapping : %f %f",x,y);
	return EXIT_SUCCESS;
}
