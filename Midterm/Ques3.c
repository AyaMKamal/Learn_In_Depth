/*
 ============================================================================
 Name        : Ques3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int print_prime(int num);
int main(void) {
	int n1,n2,flag;
	printf("Enter the intervals ");
	fflush(stdout);
	scanf("%d %d",&n1,&n2);
	for (int i = n1 ; i < n2 ; i++)
	{
		flag = print_prime(i);
		if (flag == 0)
		printf("%d ",i);
	}

}
int print_prime(int num)
{
	int i,flag = 0;
	for (i = 2; i < num/2 ; ++i)
	{
		if (num % i == 0)
		{
			flag = 1;
			break ;
		}

	}
	return flag;


}
