#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int fact=1,num;
    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    if(num>0)
    {
        for(int i=num;i>=1;i--)
        {
            fact*=i;
        }
    }
    else
    {
        printf("Error!!! Factorial of negative number doesn't exist\n");
    }
    printf("Factorial of %d = %d\n",num,fact);
    return 0;
}
