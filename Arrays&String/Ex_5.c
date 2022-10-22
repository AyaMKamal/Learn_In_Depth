/*
 ============================================================================
 Name        : Ex_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[25];
	int i ,num ,s_element ;

	printf("Enter number of elements :\n");
	fflush(stdout);
	scanf("%d", &num);

	for (i = 0 ; i < num ; i ++)
	{
		scanf("%d", &a[i]);
	}

	printf("Enter the elements to be searched \n");
	fflush(stdout);
	scanf("%d",&s_element);


	for (i = 0 ; i < num && s_element != a[i] ; )
	{
		i++;
	}

	if (s_element == a[i])
	{
	printf("ELEMENT FOUND IN :%d",i+1);
	fflush(stdout);
	}
	else
	{
	printf("NOT FOUND");
	}

	return EXIT_SUCCESS;
	}
