/*
 ============================================================================
 Name        : HW1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int prime (int num);
int main(void) {

	int n1,n2;
	int flag ;
	printf("Enter two intervals: \n");
    fflush(stdout);
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Prime numbers is \n");
    for (int i = n1+1 ; i <= n2 ; i++)
    {
    	flag = prime (i);
    	if(flag == 0)
    	{
    		printf("%d ",i);
    	}

    }

	return EXIT_SUCCESS;
}
int prime (int num)
{

	int i ,flag =0;
	for (i = 2 ; i < num/2 ;i++)
	{
		if (num % i == 0 )
		{
			flag = 1 ;
			break ;

		}
	}
	return flag;


}
