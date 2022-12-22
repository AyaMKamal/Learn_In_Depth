/*
 ============================================================================
 Name        : Ques7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int s_num = 100;
	printf("summation from 1 to 100 equal : %d",summation(s_num));
	fflush(stdout);
}
int summation(int n)
{
	int sum = 0;
	sum = n * (n+1)/2;
 return sum;
}
