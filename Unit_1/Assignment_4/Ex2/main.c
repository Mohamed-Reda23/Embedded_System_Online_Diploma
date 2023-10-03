#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    float marks;
}s;

struct student Read_data(void)
{
    struct student a;
    printf("Enter name: ");
    gets(a.name);
    printf("Enter roll number: ");
    scanf("%d",&a.roll);
    printf("Enter marks: ");
    scanf("%f",&a.marks);

    return a;
}

void print_data(struct student a)
{
    printf("Name: %s\n",a.name);
    printf("Roll: %d\n",a.roll);
    printf("Marks: %.2f\n",a.marks);
}

int main()
{
    printf("Enter information of students:\n\n");
    s=Read_data();
    printf("\nDisplaying Information:\n");
    print_data(s);
    return 0;
}

