/*

 * main.c
 *
 *  Created on: Sep 11, 2023
 *      Author: ENG.Mohamed
 */

/*
Reverse the string
*/

#include"stdio.h"

int main()
{
	char arr[10];
	int m=0;
	char temp;
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		m++;
	}
	for(int i=0;i<m/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[m-i-1];
		arr[m-i-1]=temp;
	}
	printf("Reverse string is : %s\n",arr);
	return 0;
}

