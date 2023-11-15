#include <stdio.h>
#include <stdlib.h>
#include"Lifo.h"

#define len   (uint32_t)5

int main()
{
    element_type buf[len];
    LIFO_Buf_t Buffer;
    element_type i;
    element_type item;



    if(LIFO_init(&Buffer,buf,len) == Lifo_no_error)
    {
        printf("LIFO initialized======= is Done\n\n");
    }
    for(i=0;i<10;i++)
    {
        if(LIFO_Add_data(&Buffer,i) == Lifo_no_error)
            printf("LIFO Add element  == %d\n",buf[i]);
    }
    printf("\n\n");
    if(LIFO_Get_data(&Buffer,&item) == Lifo_no_error)
        printf("LIFO Get element  == %d\n",item);
    if(LIFO_Get_data(&Buffer,&item) == Lifo_no_error)
        printf("LIFO Get element  == %d\n",item);
    if(LIFO_Get_data(&Buffer,&item) == Lifo_no_error)
        printf("LIFO Get element  == %d\n",item);
    if(LIFO_Get_data(&Buffer,&item) == Lifo_no_error)
        printf("LIFO Get element  == %d\n",item);
    if(LIFO_Get_data(&Buffer,&item) == Lifo_no_error)
        printf("LIFO Get element  == %d\n",item);
    printf("\n\n");
    print_data(&Buffer);



    return 0;
}
