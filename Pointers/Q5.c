/*
 ============================================================================
 Name        : Q5.c
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
	char *employee;
	int ID;
};

int main(void) {
	struct Sdata emp1 ={"John",1001},emp2 = {"Alex",1002} , emp3 = {"Taylor",1003};
	struct Sdata(*arr[])={&emp1,&emp2,&emp3};
	struct Sdata (*(*pt)[3])=&arr;

	printf("Employee name  : %s \n",(**(*pt+1)).employee);
	fflush(stdout);
	printf("Employee ID : %d \n",(*(*pt+1))->ID);
	fflush(stdout);

}
