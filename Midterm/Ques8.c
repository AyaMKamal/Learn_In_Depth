/*
 ============================================================================
 Name        : Ques8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse_array(int array[],int n);
int main(void) {
	int arr [5];
	printf("Enter array element :\n ");
	fflush(stdout);
	for (int i = 0 ; i < 5 ; i ++)
	{
		scanf("%d",&arr[i]);
	}

	reverse_array(arr,5);
}
void reverse_array(int array[],int n)
{

		for (int j = n - 1 ; j >= 0 ;j--)
		{
			printf("%d ",array[j]);
		}
	}


