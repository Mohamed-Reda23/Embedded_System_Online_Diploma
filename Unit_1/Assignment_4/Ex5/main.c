#include <stdio.h>
#include <stdlib.h>

#define pi    3.14
#define Area(x)   (x*x*pi)

int main()
{
    int radius;
    float area;
    printf("Enter the radius: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&radius);
    area=Area(radius);
    printf("Area of circule is: %.2f\n",area);
    return 0;
}

