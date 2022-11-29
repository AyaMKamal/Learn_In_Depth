/*
 ============================================================================
 Name        : HW3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse();
int main(void) {

	printf("Enter the sentence : \n");
	fflush(stdout);
	reverse();
	return 0;

}

void reverse()
{
  char c;
  scanf("%c",&c);
  if (c != '\n')
  {
	  reverse();
	  printf("%c",c);
  }


}
