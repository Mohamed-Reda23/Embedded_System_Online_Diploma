/*
 * main.c
 *
 *  Created on: Sep 30, 2023
 *      Author: ENG.Mohamed
 */

#include"stdio.h"

struct employee
{
	char name[20];
	int id;
};

int main()
{
	struct employee emp1={"Mohamed",1001};
	struct employee emp2={"Alex",1002};
	struct employee emp3={"Wiza",1003};

	struct employee *arr[]={&emp1,&emp2,&emp3};
	struct employee *(*ptr)[3]=&arr;
	printf("Employee Name : %s\n",((*(*ptr)))->name);
	printf("Employee Id : %d\n",(*(*(*ptr))).id);
	return 0;
}

