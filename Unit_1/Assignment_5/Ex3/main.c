/*
 * main.c
 *
 *  Created on: Sep 30, 2023
 *      Author: ENG.Mohamed
 */

#include"stdio.h"


int main()
{
	int s;
	int*p;
	printf("Enter the number of elements(max 15): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s);
	int arr[s];
	printf("\nInput %d number of elements in the array:\n",s);
	for(int i=0;i<s;i++)
	{
		printf("element-%d:",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	p=arr+s-1;
	printf("\nThe elements of array in reverse order are :\n");
	for(int i=s;i>0;i--)
	{
		printf("element-%d:%d\n",i,*p);
		p--;
	}

	return 0;
}


