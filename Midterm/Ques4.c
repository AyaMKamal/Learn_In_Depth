/*
 ============================================================================
 Name        : Ques4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int rev_num(int num);
int main()
{
	int number ;
	int reverse ;
	printf("Please Enter number digits: \n");
	fflush(stdout);
	scanf("%d",&number);
	reverse = rev_num(number);
	printf("Digits after reversing : %d",reverse);

}
int rev_num(int num)
{
	int rev = 0;
	int remindar;
	while (num != 0)
	{
		remindar = num % 10;
		rev = rev * 10 + remindar;
		num = num / 10;
	}
return rev;
}
