/*
 ============================================================================
 Name        : HW1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
struct sStudent{
	char name [100];
	int roll_number;
	float marks;
};
int main(void) {
	struct sStudent x;
	printf("Enter student information : \n");
	fflush(stdout);
	printf("Student name: ");
	fflush(stdout);
	scanf("%s",x.name);
	printf("Student Roll Number : ");
	fflush(stdout);
	scanf("%d",&x.roll_number);
	printf("Student Marks : ");
	fflush(stdout);
	scanf("%f",&x.marks);
	printf("Displaying Information ...... \n");
	printf("Name : %s \nRoll : %d  \nMarks : %0.2f", x.name , x.roll_number,x.marks);
	fflush(stdout);
}
