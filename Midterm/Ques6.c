/*
 ============================================================================
 Name        : Ques6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void unique_number(int arr[],int n);

int main()
{
	int arr [100];
	int size;
	printf("Enter array size \n");
	fflush(stdout);
	scanf("%d",&size);
	printf("Enter array element \n");
	fflush(stdout);
	for (int i = 0 ; i < size ; i++)
	{	scanf("%d",&arr[i]);
	}
	unique_number (arr,size);
}
void unique_number(int arr[],int n)
{
	int i,j,count=0;
	for (i = 0 ; i < n ; i ++)
	{count = 0;
		for (j = 0 ; j < n ; j++)
		{		if (i != j)
			{		if (arr[i] == arr[j])
					count++;}
		}
	if (count == 0)
		printf("Unique number is :%d",arr[i]);
	}
}
