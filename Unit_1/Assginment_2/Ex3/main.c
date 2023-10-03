/*

 * main.c
 *
 *  Created on: Sep 11, 2023
 *      Author: ENG.Mohamed
 */

/*
Sorting array with element and it's position
*/

#include"stdio.h"

int main()
{
	int arr[10],num,location,element;
	printf("Enter number of data:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<num;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\nEnter the value of data to insert : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);
	for(int i=num;i>=location;i--)
	{
		arr[i]=arr[i-1];
	}
	num++;
	arr[location-1]=element;
	for(int j=0;j<num;j++)
	{
		printf("%d ",arr[j]);
	}

	return 0;
}

