#include <stdio.h>
#include <stdlib.h>


int calc_power(int base, int pow)
{
    if(pow==0)
    {
        return 1;
    }
    return base*calc_power(base,pow-1);
}

int main()
{
    int base,power,x;
    printf("Enter base number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&power);
    x=calc_power(base,power);
    printf("%d^%d = %d\n",base,power,x);
    return 0;
}

