/*
 ============================================================================
 Name        : Ex_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	char str [100];
	int i = 0 ,count = 0;

	printf("Enter the string \n");
	fflush(stdout);
    gets(str);

    printf("Enter a character to find the frequency \n");
    fflush(stdout);
    scanf("%c",&c);

    while (str [i]!= '\0' )
    {
    	i++;
    	if (str[i] == c)
   	   {
  	 		count++;
       	}

    }

    printf("Frequency of %c the element is : %d",c,count);
    fflush(stdout);


	return EXIT_SUCCESS;
}
