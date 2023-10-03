#include <stdio.h>
#include <stdlib.h>

struct Scomplex
{
    double R;
    double I;
}x,y,z;

struct Scomplex ReadComplex(char name[])
{
   struct Scomplex s;
   printf("%s\n",name);
   scanf("%lf",&s.R);
   scanf("%lf",&s.I);


   return s;

}
struct Scomplex AddComplex(struct Scomplex a,struct Scomplex b)
{
    struct Scomplex sum;
    a=ReadComplex("Enter the real then the imag values for 1st str:");
    printf("\n");
    b=ReadComplex("Enter the real then the imag values for 2nd str:");

    sum.R=a.R + b.R;
    sum.I=a.I + b.I;

    return sum;
}

void print_complex(char name[],struct Scomplex c)
{
    printf("\n%s\n",name);
    printf("%.3lf + %.3lf i\n",c.R,c.I);
}

int main()
{
    z=AddComplex(x,y);
    print_complex("The sum of two complex numbers is:",z);
    return 0;
}

