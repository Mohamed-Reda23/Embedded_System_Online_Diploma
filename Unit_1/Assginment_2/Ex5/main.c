/*

 * main.c
 *
 *  Created on: Sep 11, 2023
 *      Author: ENG.Mohamed
 */

/*
Find the frequency of character
*/

#include"stdio.h"
#include"string.h"

int main()
{
	char arr[30],ch;
	int m=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(arr);
	printf("\n");
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	for(int i=0;i<strlen(arr);i++)
	{
		if(arr[i]==ch)
		{
			m++;
		}
	}
	printf("Frequency of %c = %d\n",ch,m);
	return 0;
}
