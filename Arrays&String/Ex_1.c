/*
 ============================================================================
 Name        : Ex_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*****************find the sum of 2D arrays************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2] , b[2][2] , c[2][2];
    int i , j;

    /****************First array**************************************/
    printf("Enter elements of 1st matrix \n");
    fflush(stdout);
    for (i = 0 ; i<2 ; i++)
    {
    	for (j = 0 ; j < 2; j++)
    	{
    		printf("Enter a%d%d \n",i+1,j+1);
    		fflush(stdout);
    		scanf("%f", &a[i][j]);
    	}
    }
    /***************Second array**************************/
    printf("Enter elements of 2nd matrix \n");
	fflush(stdout);
        fflush(stdout);
        for (i = 0 ; i<2 ; i++)
        {
        	for (j = 0 ; j < 2; j++)
        	{
        		printf("Enter b%d%d \n",i+1,j+1);
        		fflush(stdout);
        		scanf("%f", &b[i][j]);
        	}
        }

      /****For array summation****/
        for (i = 0 ; i<2 ; i++)
        {
        	for(j = 0 ; j <2 ; j++)
        	{
        		c[i][j]=a[i][j]+b[i][j];
        	}
        }

        printf("The summation of two matrix is \n");
    	fflush(stdout);
        for (i = 0 ; i < 2; i++)
        {
        	for (j = 0 ; j < 2; j++)
        	{
        		printf("%f \t" ,  c[i][j]);
        		fflush(stdout);
        	}
        	printf("\n");

        }



	return EXIT_SUCCESS;
}
