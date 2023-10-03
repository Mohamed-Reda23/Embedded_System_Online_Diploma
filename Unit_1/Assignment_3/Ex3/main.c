#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int i=0;


void reverse_string(char*ptr,int n)
{

    int m;
    int temp;
    temp=ptr[i];
    ptr[i]=ptr[n-i-1];
    ptr[n-i-1]=temp;
    m=n/2;
    i++;
    if(i<m)
    {


            reverse_string(ptr,n);

    }


}

int main()
{
    char arr[100];
    printf("Enter a sentence : ");
    gets(arr);
    int l;
    l=strlen(arr);
    reverse_string(arr,l);
    printf("\n%s\n",arr);
    return 0;
}

