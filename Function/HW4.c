/*
 ============================================================================
 Name        : HW4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pwr(int base,int num);
int main(void) {

	int base,num;
	   printf("Enter the base number :\n");
	   fflush(stdout);
	   scanf("%d",&base);
	   printf("Enter the power \n");
	   fflush(stdout);
	   scanf("%d",&num);
     printf("%d", pwr(base,num));
     fflush(stdout);
	return EXIT_SUCCESS;
}

int pwr(int base,int num)
{
	if(num != 0)
	return (base * pwr(base , num-1));


	else
		return 1;

}
