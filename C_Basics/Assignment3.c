/*
 ============================================================================
 Name        : Assignment3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , j ,sum = 0;
    printf("Enter 1st integer number : \n");
	fflush(stdout);
	scanf("%d",&i);
    printf("Enter 2nd integer number : \n");
	fflush(stdout);
	scanf("%d",&j);

	sum = i+j;
	printf("Sum is : %d",sum);

	return EXIT_SUCCESS;
}
