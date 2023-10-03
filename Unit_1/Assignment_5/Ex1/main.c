/*
 * main.c
 *
 *  Created on: Sep 30, 2023
 *      Author: ENG.Mohamed
 */

#include"stdio.h"

int main()
{
	int m=29;
	int*ab;
	printf("Address of m : %p\n",&m);
	printf("value of m : %d\n",m);
	ab=&m;
	printf("\nNow ab is assigned with the address of m.\n");
	printf("Address of pointer ab : %p\n",ab);
	printf("content of pointer ab : %d\n",*ab);
	m=34;
	printf("\nThe value of m assigned to 34 now.\n");
	printf("Address of pointer ab : %p\n",ab);
	printf("content of pointer ab : %d\n",*ab);
	*ab=7;
	printf("\nThe pointer variable ab is assigned with the value of 7 now.\n");
	printf("Address of m : %p\n",&m);
	printf("value of m : %d\n",m);

	return 0;
}
