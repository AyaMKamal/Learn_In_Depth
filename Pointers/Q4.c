/*
 ============================================================================
 Name        : Q4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr1[5];
	int *Parr1;
	Parr1 = arr1;
	printf("Array data : \n");
	fflush(stdout);
	for(int i = 0 ; i < 5 ; i++)
	{
		scanf("%d",&arr1[i]);
	}
	Parr1 = Parr1 + 4;
	printf("Array after reversing : \n");
	fflush(stdout);
	for(int i = 5 ; i > 0 ; i--)
	{
		printf("%d\t", *Parr1-- );
		fflush(stdout);
	}
	return EXIT_SUCCESS;
}
