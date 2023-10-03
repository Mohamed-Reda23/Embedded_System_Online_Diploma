#include <stdio.h>
#include <stdlib.h>

struct AddDistanc
{
    int feet;
    float inch;
}a[2];

struct AddDistanc Read_and_Sum(struct AddDistanc z[])
{
  struct AddDistanc sum;
  printf("Enter information for 1st distance:\n");
  printf("Enter feet: ");
  scanf("%d",&z[0].feet);
  printf("Enter inch: ");
  scanf("%f",&z[0].inch);
  printf("\nEnter information for 2nd distance:\n");
  printf("Enter feet: ");
  scanf("%d",&z[1].feet);
  printf("Enter inch: ");
  scanf("%f",&z[1].inch);

  sum.feet=z[0].feet+z[1].feet;
  sum.inch=z[0].inch+z[1].inch;

  if(sum.inch>12.0)
  {
      sum.inch-=12.0;
      sum.feet++;
  }
  return sum;
}
void print_sum(struct AddDistanc n)
{
    printf("\nSum of distance=%d\'-%.1f\"",n.feet,n.inch);
    printf("\n");
}

int main()
{
    struct AddDistanc sum;
    sum=Read_and_Sum(a);
    print_sum(sum);
    return 0;
}

