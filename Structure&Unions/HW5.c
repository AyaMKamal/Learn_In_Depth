/*
 ============================================================================
 Name        : HW5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Area (3.141*r*r)

int main(void) {
	int r ;
	float area;
	printf("Enter radius : ");
	fflush(stdout);
	scanf("%d",&r);
	area = Area;
	printf("Area = %0.2f",area);
	fflush(stdout);

}
