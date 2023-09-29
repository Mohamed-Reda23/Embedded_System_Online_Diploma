#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,num;
    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    for(int i=num;i>=0;i--)
    {
        sum+=i;
    }
    printf("Sum = %d\n",sum);
    return 0;
}
