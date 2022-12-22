/*
 ============================================================================
 Name        : Ques5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int count_ones(int num);
int main(void)
{
	int number ;
	int count;
	printf("Enter the number \n");
	fflush(stdout);
	scanf("%d",&number);
	count = count_ones (number);
	printf("Number of one's is : %d",count);

}
int count_ones(int num)
{
	if (num == 0)
		return 0;
	else
		return (num & 1) + count_ones (num >> 1);
}


