/*
 ============================================================================
 Name        : Ex_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/***************Calculate average using arrays****************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0 ,i ;
	float a[100];
	float avg;
	float sum = 0;

	/***************Looping to enter the data********************************/
	printf("Enter the number of data : \n");
	fflush(stdout);
	scanf("%d", &n);

	for(i = 0 ; i < n ; i++ )
	{

		printf("Enter number %d :", i+1);
		fflush (stdout);
		scanf("%f", &a[i]);
	}

	/************To calculate sum of array***************************/
	for(i = 0 ; i < n ; i++)
	{
		sum += a[i];

	}
	avg = sum / n;
	printf("Average is : %f", avg);
	fflush(stdout);



	return EXIT_SUCCESS;
}
