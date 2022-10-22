/*
 ============================================================================
 Name        : Factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ;
	int n ,fact;
    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &n);

   if ( n < 0)
   {
	   printf("Error! Factorial of a negative number doesn't exist.");

   }
   else
   {
	   for (i = 1; i <= n ; i++)
	   {
		   fact *= i;

	   }
	   printf("Factorial of %d = %d", n, fact);
   }

	return EXIT_SUCCESS;
}
