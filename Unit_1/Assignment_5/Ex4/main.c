/*
 * main.c
 *
 *  Created on: Sep 30, 2023
 *      Author: ENG.Mohamed
 */

#include"stdio.h"
#include"stdlib.h"
#include"string.h"



int main()
{
	char arr[20];
	char arr_rev[20];
	char *ptr,*ptr1;
	int i,j=0;
	printf("Input a string : ");
	fflush(stdin); fflush(stdout);
	gets(arr);
	i=strlen(arr);
	ptr=arr+i-1;
	ptr1=arr_rev;
	while(j<i)
	{
		*ptr1=*ptr;
		ptr--;
		ptr1++;
		j++;
	}
	*(ptr1)='\0';
	printf("Reverse of the string is : %s\n",arr_rev);
	return 0;
}


