#include <stdio.h>
#include <stdlib.h>


void check_Prime(int num1,int num2)
{
    int flag=0;
    int x=0;
    for(int i=num1+1;i<num2;i+=2)
    {
        for(int j=3;j<=i/2;j+=2)
        {
            if(i%j!=0)
            {
                flag=1;
                x=i;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",x);
        }

    }
}


int main()
{
    int num1,num2;
    printf("Enter first interval : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&num1);
    printf("Enter second interval : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&num2);
    printf("\n");
    printf("The prime numbers between the two intervals %d and %d",num1 ,num2);
    printf("\n");
    check_Prime(num1,num2);
    printf("\n");
    return 0;
}

