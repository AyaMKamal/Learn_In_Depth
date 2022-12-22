/*
 ============================================================================
 Name        : Ques1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int summation(int num);

int main()
{
	int number;
	printf("Enter the number please : \n");
	fflush(stdout);
	scanf("%d",&number);
	printf("Summation of number : %d",summation(number));

}

int summation(int num)
{
  int remindar;
  int sum = 0;
  while (num != 0)
  {
  remindar = num % 10;
  sum += remindar;
  num = num /10;
  }

  return sum;
}
