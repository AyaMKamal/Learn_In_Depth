/*
 ============================================================================
 Name        : Q1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m = 29 ;
	unsigned int *ab;
	ab = &m;
	printf("Address of m : %x \nValue of m: %d\n",&m,m);
	fflush(stdout);
	printf("Address of ab : %x \nValue of ab : %d\n",ab,*ab);
	fflush(stdout);

	m =34;
	printf("Address of ab : %x \nValue of ab : %d\n",ab,*ab);
	fflush(stdout);

	*ab = 7;
	printf("Address of m : %x \nValue of m : %d",&m,m);
	fflush(stdout);

	return EXIT_SUCCESS;
}
