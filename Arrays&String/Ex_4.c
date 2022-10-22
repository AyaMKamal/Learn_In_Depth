/*
 ============================================================================
 Name        : Ex_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[50];
	int n_element;
	int i , new_ele , location;


	printf("Enter number of elements \n");
	fflush(stdout);
	scanf("%d",&n_element);
/******************Enter the elements*************************************/
	for (i = 0 ; i < n_element ; i++)
	{
		scanf("%f" , &a[i]);
	}

	printf("Enter the element to be inserted \n");
	fflush(stdout);
	scanf("%d" , &new_ele);

	printf("Enter the location \n");
	fflush(stdout);
	scanf("%d",&location);



	for (i = n_element ; i >= location ; i--)
	{
		a[i] = a [ i - 1];
	}

	n_element++;
	a [location - 1] = new_ele;
	for (i = 0 ; i < n_element ; i++)
	{
       printf("\n %f",a[i]);
       fflush(stdout);
	}

	return EXIT_SUCCESS;
}
