/*
 ============================================================================
 Name        : Q3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	char str[100];
	char *Pstr;
	int size;
	Pstr = str;
	printf("Enter the string : \n");
	fflush(stdout);
	gets(str);
	size = strlen(str) - 1;

	Pstr = Pstr + size;
	printf("After Reverse : \n");
	fflush(stdout);
	for(int i = size ; i >=0 ; i--)
	{
		printf("%c",*Pstr--);
		fflush(stdout);
	}

}
