/*
 ============================================================================
 Name        : HW3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sdata
{
	double IM; //imaginary part
	double RE;//Real part
};

struct Sdata Add_complex(struct Sdata A,struct Sdata B)
{
	struct Sdata C;
	C.RE = A.RE + B.RE;
	C.IM = A.IM + B.IM;

	return C;
}

int main()
{
	struct Sdata comp1,comp2,sum;
	printf("For 1st complex number \n");
	fflush(stdout);
	printf("Enter real and imaginary parts respectively:");
	fflush(stdout);
	scanf("%lf %lf",&comp1.RE , &comp1.IM);
	printf("For 2nd complex number \n");
	fflush(stdout);
	printf("Enter real and imaginary parts respectively:");
	fflush(stdout);
	scanf("%lf %lf",&comp2.RE , &comp2.IM);

	sum = Add_complex(comp1,comp2);
	printf("sum = %0.1lf + %0.1lfi",sum.RE,sum.IM);
	fflush(stdout);

}
