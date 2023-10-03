/*

 * main.c
 *
 *  Created on: Sep 11, 2023
 *      Author: ENG.Mohamed
 */

/*
Searching the element
*/

#include"stdio.h"

int main()
{
	int arr[10],num,element;
	printf("Enter number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	for(int i=0;i<num;i++)
	{
		if(arr[i]==element)
		{
			printf("Number found at the location = %d\n",i+1);
		}
	}

	return 0;
}

