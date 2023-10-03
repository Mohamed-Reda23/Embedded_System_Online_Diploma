#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct students
{
    char name[20];
    int marks;
}a[10];

int len=sizeof(a)/sizeof(a[0]);

void Read_data(struct students arr[])
{

    printf("Enter information of students:\n\n");
    for(int i=0;i<len;i++)
    {
        printf("For roll number %d\n",i+1);
        printf("Enter name: ");
        fflush(stdin); fflush(stdout);
        gets(arr[i].name);
        printf("Enter marks: ");
        fflush(stdin); fflush(stdin);
        scanf("%d",&arr[i].marks);
        printf("\n");

    }

}

void print_data(struct students arr[])
{
    printf("Displaying information for of students:\n\n");
    for(int i=0;i<len;i++)
    {
        printf("Information for roll number %d\n",i+1);
        printf("Name: %s\n",arr[i].name);
        printf("Marks: %d\n",arr[i].marks);
        printf("\n");
    }
}


int main()
{
    Read_data(a);
    printf("\n");
    print_data(a);
    return 0;
}

