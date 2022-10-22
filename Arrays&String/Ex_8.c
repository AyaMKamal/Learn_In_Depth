/*
 ============================================================================
 Name        : Ex_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[100] ,temp;
	int i = 0 , j = 0;

	printf("Enter the string \n");
	fflush(stdout);
	gets(str);

	j = strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;


		j--;
		i++;

	}
	printf("Reversed string is : %s", str);
	return EXIT_SUCCESS;
}
