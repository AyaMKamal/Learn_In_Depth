/*

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("Enter your integer number : \n");
	fflush(stdout);
	scanf("%d",&i);
	printf("You entered : %d", i);
	return EXIT_SUCCESS;
}
