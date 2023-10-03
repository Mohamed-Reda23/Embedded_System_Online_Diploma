#include <stdio.h>
#include <stdlib.h>


int Factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    return num*Factorial(num-1);
}

int main()
{
    int n,x;
    printf("Enter the num : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);
    x=Factorial(n);
    printf("\n");
    printf("The factorial of %d is : %d\n",n,x);
    return 0;
}

