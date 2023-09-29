#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    printf("ASCII value of %c = %d\n",c,c);
    return 0;
}
