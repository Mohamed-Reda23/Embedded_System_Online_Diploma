
/*

 * main.c
 *
 *  Created on: Sep 10, 2023
 *      Author: ENG.Mohamed
 */

 /*
 calculating the average of elements of array
 */

#include"stdio.h"

int main()
{
	int size;
	float avg;
	float sum=0.0;
	printf("Enter the numbers of data:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	printf("\n");
	float arr[size];
	for(int i=0;i<size;i++)
	{
		printf("%d. Enter data number %d:",i+1,i+1);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/size;
	printf("Average = %.2f\n",avg);
	return 0;
}
