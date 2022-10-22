/*
 ============================================================================
 Name        : Vowel.c
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
    printf("Enter an alphabet :\n");
    fflush(stdout);
    scanf("%c",&ch);
    if((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'o') || (ch == 'O') || (ch == 'i') || (ch == 'I') || (ch == 'u') ||( ch == 'U'))
    {
    	printf("Vowel");

    }
    else
    {
    	printf("Constant");
    }

	return EXIT_SUCCESS;
}
