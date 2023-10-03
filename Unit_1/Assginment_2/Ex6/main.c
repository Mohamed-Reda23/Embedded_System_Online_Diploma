/*

 * main.c
 *
 *  Created on: Sep 11, 2023
 *      Author: ENG.Mohamed
 */

 /*
 Find the length of string
 */

#include"stdio.h"

int main()
{
	char arr[10];
	int m=0;
	int i=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",arr);
	printf("\n");
	for(;arr[i]!='\0';i++)
	{
		m++;
	}
	printf("Length of string: %d\n",m);
	return 0;
}

