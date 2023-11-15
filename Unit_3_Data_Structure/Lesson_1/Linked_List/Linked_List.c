#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Linked_List.h"



struct SStudent* gpFirstStudent = NULL;

// APIs Defination //

void Add_student()
{
    struct SStudent* pNewStudent;
    struct SStudent* pLastStudent;
    if(!gpFirstStudent)
    {
        pNewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
        gpFirstStudent = pNewStudent;
    }
    else
    {
        pLastStudent = gpFirstStudent;
        while(pLastStudent->pNextStudent)
            pLastStudent = pLastStudent->pNextStudent;
        pNewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
        pLastStudent->pNextStudent = pNewStudent;
    }
    printf("\nEnter Student Id: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&(pNewStudent->student.id));
    printf("Enter Student Name: ");
    fflush(stdin); fflush(stdout);
    gets(pNewStudent->student.name);
    printf("Enter Student Height: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&(pNewStudent->student.height));
    pNewStudent->pNextStudent = NULL;

}
void Delete_student()
{
    unsigned int ID;
    int flag=0;
    int flag1=0;
    struct SStudent* pSelectedStudent = gpFirstStudent;
    struct SStudent* pPrevStudent = NULL;

    if(gpFirstStudent)
    {
        flag1=1;
        printf("\nEnter Student Id: ");
        scanf("%d",&ID);
        while(pSelectedStudent)
        {
            if(pSelectedStudent->student.id == ID)
            {
               flag=1;
               if(!pPrevStudent)
               {
                   gpFirstStudent = pSelectedStudent->pNextStudent;
               }
               else
               {
                   pPrevStudent->pNextStudent = pSelectedStudent->pNextStudent;
               }
               free(pSelectedStudent);
               break;

            }

            pPrevStudent = pSelectedStudent;
            pSelectedStudent = pSelectedStudent->pNextStudent;

        }
        if(flag !=1)
        {
           printf("\nThere is no student have this id\n");
        }

    }

    if(flag1 !=1)
    {
        printf("\nThere is no database to delete any student\n");
    }

}
void Delete_All()
{

    if(gpFirstStudent)
    {
        struct SStudent* pCurrentStudent = gpFirstStudent;
        while(pCurrentStudent)
        {
            struct SStudent* temp = pCurrentStudent;
            pCurrentStudent = pCurrentStudent->pNextStudent;
            free(temp);
        }
        gpFirstStudent = NULL;
    }
    else
    {
        printf("\nThere is no data to delete\n");
    }
}
void View_All()
{
    if(gpFirstStudent)
    {
        int count=0;
        struct SStudent* pCurrentStudent = gpFirstStudent;
        while(pCurrentStudent)
        {
            printf("\nRecord Number: %d\n",count+1);
            printf("Student Name: %s\n",pCurrentStudent->student.name);
            printf("Student Id: %d\n",pCurrentStudent->student.id);
            printf("Student Height: %f\n",pCurrentStudent->student.height);
            pCurrentStudent = pCurrentStudent->pNextStudent;
            count++;

        }
    }
    else
    {
        printf("\nThere is no data to print\n");
    }
}

int Count_students()
{
    int count=0;
    if(gpFirstStudent)
    {

        struct SStudent* pCurrentStudent = gpFirstStudent;
        while(pCurrentStudent)
        {
            count++;
            pCurrentStudent = pCurrentStudent->pNextStudent;
        }
        return count;

    }
    else
    {

        return 0;
    }
}

void View_data_with_index()
{
    if(gpFirstStudent)
    {
        int index,count=1,count1;
        printf("\nEnter index: ");
        scanf("%d",&index);
        count1=Count_students();
        struct SStudent* pCurrentStudent = gpFirstStudent;
        if((index <= count1) && (index != 0))
        {
            while(count != index)
            {
                pCurrentStudent = pCurrentStudent->pNextStudent;
                count++;
            }
            printf("Student Name: %s\n",pCurrentStudent->student.name);
            printf("Student Id: %d\n",pCurrentStudent->student.id);
            printf("Student Height: %f\n",pCurrentStudent->student.height);
        }
        else
        {
            printf("\nThis is invalid index\n");
        }


    }
    else
    {
        printf("\nThere is no list to print any data\n");
    }
}

void View_data_from_end_with_index()
{
    if(gpFirstStudent)
    {
        int index,counter,update,count_1=1;
        printf("\nEnter the index from end: ");
        scanf("%d",&index);
        struct SStudent* pCurrentStudent = gpFirstStudent;
        counter = Count_students();
        if((index <= counter) && (index !=0))
        {
            update = (counter - index)+1;
            while(count_1 != update)
            {
                pCurrentStudent = pCurrentStudent->pNextStudent;
                count_1++;
            }
            printf("Student Name: %s\n",pCurrentStudent->student.name);
            printf("Student Id: %d\n",pCurrentStudent->student.id);
            printf("Student Height: %f\n",pCurrentStudent->student.height);
        }
        else
        {
            printf("\nThis is invalid index\n");
        }

    }
    else
    {
        printf("\nThere is no list to print any data\n");
    }
}

void View_TheMiddle_data()
{
    if(gpFirstStudent)
    {
        int count=0,counter,operat;
        counter = Count_students();
        operat= counter / 2;
        struct SStudent* pFastStudent = gpFirstStudent;
        struct SStudent* pSlowStudent = gpFirstStudent;
        while(count != operat)
        {
            pFastStudent = pFastStudent->pNextStudent;
            count++;
        }
        if(count == operat)
        {
            while(pFastStudent->pNextStudent)
            {
               pFastStudent = pFastStudent->pNextStudent;
               pSlowStudent = pSlowStudent->pNextStudent;
            }
            printf("\nStudent Name: %s\n",pSlowStudent->student.name);
            printf("Student Id: %d\n",pSlowStudent->student.id);
            printf("Student Height: %f\n",pSlowStudent->student.height);
        }

    }
    else
    {
        printf("\nThere is no list to print any data\n");
    }
}

void reverse_linked_list()
{

    if(gpFirstStudent)
    {
        struct SStudent* pCurrentStudent = gpFirstStudent;
        struct SStudent* pNext = NULL;
        struct SStudent* pPrev = NULL;
        while(pCurrentStudent)
        {
            pNext = pCurrentStudent->pNextStudent;
            pCurrentStudent->pNextStudent = pPrev;
            pPrev = pCurrentStudent;
            pCurrentStudent = pNext;


        }
        gpFirstStudent = pPrev;
    }
    else
    {
        printf("\nThere is no linked list to reverse nodes\n");
    }

}
