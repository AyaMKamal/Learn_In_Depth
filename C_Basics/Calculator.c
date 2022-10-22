/*
 ============================================================================
 Name        : Calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	float x,y,z;
	printf("Enter the operator : ");
	fflush(stdout);
	scanf("%c" ,&ch);
	printf("Enter Two Numbers : \n");
	fflush(stdout);
	scanf("%f" ,&x);
	scanf("%f" ,&y);

	switch (ch)
	{
	case '+':
		z = x + y;
		printf("%f",z);
		break;
	case '-':
		z = x - y;
		printf("%f",z);
		break;
	case '*':
		z = x * y;
		printf("%f",z);
		break;
	case '/':
		z = x / y;
		printf("%f",z);
		break;
	default:
		printf("You entered Wrong symbol");

	}
	return EXIT_SUCCESS;
}
