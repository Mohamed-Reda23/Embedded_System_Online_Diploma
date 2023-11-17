#include <stdio.h>
#include <stdlib.h>
#include"database.h"

#define length     (unsigned int)5

int main()
{
    FIFO_Buf_t buffer;
    SStudents_t data[length];


    if(Fifo_init(&buffer,data,length) == fifo_no_error)
        printf("FIFO BUFFER CREATED ====SUCCESSFULLY====\n\n");
    while(1)
    {
        int choice;
        printf("\n1-Add New Student\n");
        printf("2-Delete Student\n");
        printf("3-Print All Student\n");
        printf("4-Print Student Data With Roll Number\n");
        printf("5-Print Number Of Students\n");
        printf("6-Print Student Data With First Name\n");
        printf("7-Get Students Registered Course\n");
        printf("8-Update Student Data\n");
        printf("9-Exit Program\n");
        printf("Enter A Choice: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            if(Add_Student(&buffer) == fifo_no_error)
                printf("\nStudent Added Successfully\n");
            else
            {
                printf("\nSorry Buffer Is Full\n");
            }
            break;
        case 2:
            if(Delete_Student(&buffer) == fifo_no_error)
                printf("\nStudent Deleted Successfully\n");
            else
            {
                printf("\nSorry Buffer Is Empty\n");
            }
            break;
        case 3:
            printf("\n=======================\n");
            Print_Students(&buffer);
            printf("=========================\n");
            break;
        case 4:
            printf("\n=======================");
            Find_student_with_roll(&buffer);
            printf("=========================\n");
            break;
        case 5:
            printf("\n=======================");
            count_Students(&buffer);
            printf("=========================\n");
            break;
        case 6:
            printf("\n=======================");
            Find_Student_With_First_Name(&buffer);
            printf("=========================\n");
            break;
        case 7:
            printf("\n=======================");
            Get_Students_Regiter_Course(&buffer);
            printf("=========================\n");
            break;
        case 8:
            printf("\n=======================");
            Update_Student_Data(&buffer);
            printf("=========================\n");
            break;
        case 9:
            Finish_Program();
            break;
        default:
            printf("\nPlease Enter Valid Choice\n");
            break;
        }
    }


    return 0;
}
