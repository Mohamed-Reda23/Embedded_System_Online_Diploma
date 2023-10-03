/*

 * main.c
 *
 *  Created on: Sep 11, 2023
 *      Author: ENG.Mohamed
 */

/*
Transpose the matrix
*/

#include"stdio.h"


int main()
{
	int row,col;
	int arr[2][3];
	int arr_t[3][2];
	printf("Enter the row and col of array:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&row,&col);
	for(int i=0; i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("Enter the array[%d][%d]:",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0; i<row+1;i++)
	{
		for(int j=0;j<col-1;j++)
		{
			arr_t[i][j]=arr[j][i];
		}
	}
	printf("The transpose matrix\n");
	for(int i=0; i<row+1;i++)
	{
		for(int j=0;j<col-1;j++)
		{
			printf("Element of arr_t[%d][%d]:%d\n",i,j,arr_t[i][j]);
		}
	}
	return 0;
}
