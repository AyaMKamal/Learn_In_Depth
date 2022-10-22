/*
 ============================================================================
 Name        : Sum_Natural_Number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,sum=0;
	printf("Enter the number :");
	fflush(stdout);
	scanf("%d" , &num);
	for(int i = 1 ; i <= num ; i++)
	{
		sum += i;
	}
	printf("Sum = %d",sum);
	return EXIT_SUCCESS;
}
