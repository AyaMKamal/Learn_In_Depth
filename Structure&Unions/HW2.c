/*
 ============================================================================
 Name        : HW2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct sAdd_Distance
{
	float feet;
	float inch;
};
int main(void) {
	struct sAdd_Distance dis1,dis2,res;
	printf("Enter information for 1st distance: \n");
	fflush(stdout);
	printf("Enter feet : \n");
	fflush(stdout);
	scanf("%f" ,&dis1.feet);
	printf("Enter inch : \n");
	fflush(stdout);
	scanf("%f",&dis1.inch);

	printf("Enter information for 2nd distance: \n");
	fflush(stdout);
	printf("Enter feet : \n");
	fflush(stdout);
	scanf("%f" ,&dis2.feet);
	printf("Enter inch : \n");
	fflush(stdout);
	scanf("%f",&dis2.inch);

	res.feet = dis1.feet+dis2.feet;
	res.inch = dis1.inch+dis2.inch;

	while (res.inch >= 12.0)
	{
		res.inch = res.inch - 12;
		++res.feet;
	}

	printf("Sum of two distance is : %.1f ,'-%.1f\"",res.feet,res.inch);
	fflush(stdout);


}
