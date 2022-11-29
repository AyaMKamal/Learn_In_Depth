/*
 ============================================================================
 Name        : HW2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial (int num);
int main(void) {

	int num ;
	printf("Please enter number :\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("factorial of the number %d equal : %d",num,factorial (num));
	return EXIT_SUCCESS;
}

int factorial (int num)
{
  if (num != 0)


	  return num * factorial (num - 1);

  else
	  return 1;


}





