/*
 ============================================================================
 Name        : Ques10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int max_ones(int num);
int main()
{
	int number;
	printf("Please Enter the number :\n");
	fflush(stdout);
	scanf("%d",&number);
	printf("Max number of ones is : %d",max_ones(number));

}
int max_ones(int num)
{
	int count = 0;
	while (num != 0)
	{
		num=(num&(num<<1));
		count++;
	}
	return count;
}



/*
int main(void) {

	int num;
	printf("Enter the number :\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("Max number of zeros in the number is : %d",count_zeros(num));
}
int count_zeros(int num)
{
   int count=0 , max_count = 0,count_flag = 0;

   for( ; num > 0 ; num >>= 1)
   {
	   if(num % 2)
	   {
		   if (count > max_count)
		   		max_count = count;

		   count = 0;
		   count_flag = 1;
	   }
	else if(count_flag )
		count ++;

   }
	return max_count;

}
*/
