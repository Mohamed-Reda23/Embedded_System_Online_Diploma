#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,result,choice;
    char ch;
    printf("Enter value of a: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&a);
    printf("Enter operation: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&ch);
    printf("Enter value of b: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&b);

    switch(ch)
    {
    case '+':
        result=a+b;
        break;
    case '-':
        printf("for (a-b) press 1 or for(b-a) press 2: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&choice);
        if(choice==1)
        {
            result=a-b;
        }
        else if(choice==2)
        {
            result=b-a;
        }
        break;
    case '*':
        result=a*b;
        break;
    case '/':
        printf("for (a/b) press 1 or for(b/a) press 2: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&choice);
        if(choice==1)
        {
            result=(float)a/b;

        }
        else if(choice==2)
        {
            result=(float)b/a;
        }
        break;
    default:
        break;
    }
    printf("Result = %d\n",result);
    return 0;
}

