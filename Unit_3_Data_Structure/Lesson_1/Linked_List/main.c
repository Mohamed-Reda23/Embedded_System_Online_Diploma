#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Linked_List.h"

int main()
{
    while(1)
    {
        int count=0;
        int ch;
        printf("\n1-Add Student\n");
        printf("2-Delete Student\n");
        printf("3-Delete All students\n");
        printf("4-View All students\n");
        printf("5-View number of all students\n");
        printf("6-Print data with index\n");
        printf("7-Print data from the end\n");
        printf("8-Print the middle data\n");
        printf("9-Reverse linked list\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter Student data\n");
            Add_student();
            break;
        case 2:
            Delete_student();
            break;
        case 3:
            Delete_All();
            printf("\nAll students data deleted successfully\n");
            printf("========================================\n");
            break;
        case 4:
            printf("\n========================================");
            View_All();
            printf("========================================\n");
            break;
        case 5:
            count = Count_students();
            printf("\nThe number of students is: %d\n",count);
            break;
        case 6:
            printf("\n========================================");
            View_data_with_index();
            printf("========================================\n");
            break;
        case 7:
            printf("\n========================================");
            View_data_from_end_with_index();
            printf("========================================\n");
            break;
        case 8:
            printf("\n========================================");
            View_TheMiddle_data();
            printf("========================================\n");
            break;
        case 9:
            reverse_linked_list();
            printf("\nLinked list reversed successfully\n");
            break;
        default:
            printf("\nInvalid choice\n");
            break;
        }
    }
    return 0;
}
