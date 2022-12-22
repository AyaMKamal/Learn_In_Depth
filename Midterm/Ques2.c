/*
 ============================================================================
 Name        : Ques2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double squareroot(int num);
int main(void)
{
	int number;
	double square;
	printf("Please enter the number:");
	fflush(stdout);
	scanf("%d",&number);
	square = squareroot(number);
	printf("%0.3lf",square);//to print 3 digits

}
double squareroot(int num)
{

	double sqr ;
	sqr = sqrt(num);
	return sqr;
}
