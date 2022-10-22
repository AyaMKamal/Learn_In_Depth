/*
 ============================================================================
 Name        : Ex_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*******************Find the transpose*******************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[100][100] , t_a[100][100];
	int row,col;
	int i , j;

	printf("Enter number of rows and columns of matrix \n");
	fflush(stdout);
	scanf("%d %d",&row,&col);
/*************************Getting elements of array*********************************************************/
	printf("Enter element of the matrix \n");
	fflush(stdout);
	for(i = 0 ; i < row ; i++)
	{
		for (j = 0 ; j < col ; j++)
		{
			printf("Element a%d%d\t",i+1,j+1);
			fflush(stdout);
			scanf("%d" , &a[i][j]);
		}
	}

/**********************Print the matrix*****************************************************/

	printf("The matrix: \n");
		fflush(stdout);
		for(i = 0 ; i < row ; i++)
		{
			for (j = 0 ; j < col ; j++)
			{
				printf("%d \t",a[i][j]);

			}
			printf("\n");
		}
/**************************Getting transpose****************************************************/
		for(i = 0 ; i < row ; i++)
		{
			for (j = 0 ; j < col ; j++)
			{
				t_a[j][i] = a[i][j];

			}

		}

/**************************print transpose************************************************/

		printf("The transpose of the matrix: \n");
				fflush(stdout);
				for(i = 0 ; i < col ; i++)
				{
					for (j = 0 ; j < row ; j++)
					{
						printf("%d\t",t_a[i][j]);

					}
					printf("\n");
				}
		return EXIT_SUCCESS;
}
