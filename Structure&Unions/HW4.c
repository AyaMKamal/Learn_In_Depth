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


struct student
{
	int roll_number;
	char name [100];
	double marks;

};
int main(void)
{
	struct student arr_s[10];
	int i ;
	for(i = 0 ; i < 10 ; i++)
	{
		printf("For roll number : %d\n",i+1);
		fflush(stdout);
		printf("Name : ");
		fflush(stdout);
		scanf("%s",arr_s[i].name);
		printf("Marks : ");
		fflush(stdout);
		scanf("%lf",&arr_s[i].marks);

	}

	printf("Displaying Information....\n");

	for(i = 0 ; i < 10 ; i++)
	{
		printf("Information for roll number %d\n",i+1);
		fflush(stdout);
		printf("Name is: %s \n",arr_s[i].name);
		fflush(stdout);
		printf("Marks : %0.2lf\n",arr_s[i].marks);
		fflush(stdout);
	}




}

