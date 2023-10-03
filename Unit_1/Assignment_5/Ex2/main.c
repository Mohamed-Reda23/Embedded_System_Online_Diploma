/*
 * main.c
 *
 *  Created on: Sep 30, 2023
 *      Author: ENG.Mohamed
 */
#define limit  25

#include"stdio.h"


int main()
{
	char ch='A';
	char*p=&ch;
	int i=0;
	while(i<=limit)
	{
		printf("%c ",*p+i);
		i++;
	}
	return 0;
}

