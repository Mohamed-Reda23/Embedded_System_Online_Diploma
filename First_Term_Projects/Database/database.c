#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"database.h"




// APIs Defination //

Fifo_status_t Fifo_is_full(FIFO_Buf_t*Buf)
{
    if(!Buf->base || !Buf->head || !Buf->tail)
        return fifo_null;
    if(Buf->counter == Buf->length)
        return fifo_full;
    return fifo_no_error;
}


Fifo_status_t Fifo_is_empty(FIFO_Buf_t*Buf)
{
    if(!Buf->base || !Buf->head || !Buf->tail)
        return fifo_null;
    if(Buf->counter == 0)
        return fifo_empty;

    return fifo_no_error;
}


Fifo_status_t Fifo_init(FIFO_Buf_t*Buf,SStudents_t*buf,unsigned int length)
{
    if(buf == NULL)
        return fifo_null;
    Buf->base = buf;
    Buf->head = buf;
    Buf->tail = buf;
    Buf->length = length;
    Buf->counter = 0;

    return fifo_no_error;
}
Fifo_status_t Add_Student(FIFO_Buf_t*Buf)
{
    if(!Buf->base || !Buf->head || !Buf->tail)
        return fifo_null;
    if(Fifo_is_full(Buf) == fifo_full)
        return fifo_full;
    printf("\nEnter Student Roll Number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&(Buf->head->roll));
    printf("Enter Student First Name: ");
    fflush(stdin);fflush(stdout);
    gets(Buf->head->name1);
    printf("Enter Student Second Name: ");
    fflush(stdin);fflush(stdout);
    gets(Buf->head->name2);
    printf("Enter Student GPA: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&(Buf->head->gpa));
    printf("Enter Course1 Id: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&(Buf->head->course1));
    printf("Enter Course2 Id: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&(Buf->head->course2));

    Buf->head++;
    Buf->counter++;

    if(Buf->head >= (Buf->base + Buf->length))
        Buf->head = Buf->base;

    return fifo_no_error;
}


Fifo_status_t Delete_Student(FIFO_Buf_t*Buf)
{
    if(!Buf->base || !Buf->head || !Buf->tail)
        return fifo_null;
    if(Fifo_is_empty(Buf) == fifo_empty)
        return fifo_empty;
    Buf->tail++;
    Buf->counter--;
    if(Buf->tail >= (Buf->base + Buf->length))
        Buf->tail = Buf->base;

    return fifo_no_error;
}


void Print_Students(FIFO_Buf_t*Buf)
{
    SStudents_t*ptr = Buf->tail;
    for(int i=0;i<Buf->counter;i++)
    {

        printf("Student roll number: %d\n",ptr->roll);
        fflush(stdin);fflush(stdout);
        printf("Student first name: %s\n",ptr->name1);
        fflush(stdin);fflush(stdout);
        printf("Student second name: %s\n",ptr->name2);
        fflush(stdin);fflush(stdout);
        printf("Student GPA: %.2f\n",ptr->gpa);
        fflush(stdin);fflush(stdout);
        printf("Student course1 id: %d\n",ptr->course1);
        fflush(stdin);fflush(stdout);
        printf("Student course2 id: %d\n",ptr->course2);
        fflush(stdin);fflush(stdout);
        printf("\n\n");
        ptr++;

    }
    if(Buf->counter == 0)
    {
        printf("\nThere is No Buffer to print data\n");
    }
}

void Find_student_with_roll(FIFO_Buf_t*Buf)
{
    int roll;
    int flag=0;
    SStudents_t*p=Buf->tail;
    if(Fifo_is_empty(Buf) == fifo_no_error)
    {
        printf("\nEnter Roll Number: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&roll);
        for(int i=0;i<Buf->counter;i++)
        {
            if(p->roll == roll)
            {
                flag=1;
                printf("Student first name: %s\n",p->name1);
                fflush(stdin);fflush(stdout);
                printf("Student second name: %s\n",p->name2);
                fflush(stdin);fflush(stdout);
                printf("Student GPA: %.2f\n",p->gpa);
                fflush(stdin);fflush(stdout);
                printf("Student course1 id: %d\n",p->course1);
                fflush(stdin);fflush(stdout);
                printf("Student course2 id: %d\n",p->course2);
                fflush(stdin);fflush(stdout);
                break;
            }
            else
            {
                p++;
            }
        }
    }
    else
    {
        printf("\nBuffer Is Empty\n");
    }
    if(flag!=1)
    {
        printf("\nThis Roll Number Not Found\n");
    }

}


void count_Students(FIFO_Buf_t*Buf)
{
    printf("\nThe Number Of Students = %d\n",Buf->counter);
}


void Find_Student_With_First_Name(FIFO_Buf_t*Buf)
{
    char a[10];
    int flag=0;
    SStudents_t*p=Buf->tail;
    if(Fifo_is_empty(Buf) == fifo_no_error)
    {
        printf("\nEnter First Name: ");
        fflush(stdin);fflush(stdout);
        gets(a);
        for(int i=0;i<Buf->counter;i++)
        {
            if(strcmp(p->name1,a) == 0)
            {
                flag=1;
                printf("\nStudent roll number: %d\n",p->roll);
                fflush(stdin);fflush(stdout);
                printf("Student first name: %s\n",p->name1);
                fflush(stdin);fflush(stdout);
                printf("Student second name: %s\n",p->name2);
                fflush(stdin);fflush(stdout);
                printf("Student GPA: %.2f\n",p->gpa);
                fflush(stdin);fflush(stdout);
                printf("Student course1 id: %d\n",p->course1);
                fflush(stdin);fflush(stdout);
                printf("Student course2 id: %d\n",p->course2);
                fflush(stdin);fflush(stdout);

            }
            p++;
        }
    }
    else
    {
        printf("\nBuffer Is Empty\n");
    }
    if(flag != 1)
    {
        printf("\nThis First Name Not Found\n");
    }
}

void Get_Students_Regiter_Course(FIFO_Buf_t*Buf)
{
    int course;
    int flag=0;
    SStudents_t*p=Buf->tail;
    if(Fifo_is_empty(Buf) == fifo_no_error)
    {
        printf("\nEnter Course Id: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&course);
        for(int i=0;i<Buf->counter;i++)
        {
            if((p->course1 == course) || (p->course2 == course))
            {
                flag=1;
                printf("\nStudent roll number: %d\n",p->roll);
                fflush(stdin);fflush(stdout);
                printf("Student first name: %s\n",p->name1);
                fflush(stdin);fflush(stdout);
            }
            p++;
        }
    }
    else
    {
        printf("\nBuffer Is Empty\n");
    }
    if(flag!=1)
    {
        printf("\nThis Course Id Not Found\n");
    }

}


void Update_Student_Data(FIFO_Buf_t*Buf)
{
    int roll;
    int flag=0;
    SStudents_t*p=Buf->tail;
    if(Fifo_is_empty(Buf) == fifo_no_error)
    {
        printf("\nEnter Student Roll Number: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&roll);
        for(int i=0;i<Buf->counter;i++)
        {
            if(p->roll == roll)
            {
                flag=1;
                printf("\nStudent First Name: %s\n\n",p->name1);
                printf("Enter Student GPA Update: ");
                fflush(stdin);fflush(stdout);
                scanf("%f",&(p->gpa));
                printf("Enter Student Course1 Id Update: ");
                fflush(stdin);fflush(stdout);
                scanf("%d",&(p->course1));
                printf("Enter Student Course2 Id Update: ");
                fflush(stdin);fflush(stdout);
                scanf("%d",&(p->course2));
                break;
            }
            else
            {
                p++;
            }
        }
    }
    else
    {
        printf("\nBuffer Is Empty\n");
    }
    if(flag!=1)
    {
        printf("\nThis Student Not Found To Update\n");
    }
}

void Finish_Program(void)
{
    exit(0);
}
