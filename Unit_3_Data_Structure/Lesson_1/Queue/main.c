#include <stdio.h>
#include <stdlib.h>
#include"Fifo.h"


#define len    (unsigned int)5
int main()
{
    FIFO_Buf_t Buffer;
    ele_type data,j;
    ele_type buf[len];

    if(Fifo_init(&Buffer,buf,len) == Fifo_no_error)
        printf("FIFO Buffer initialized ====Successfully====\n\n");
    for(j=0;j<10;j++)
    {
        if(Fifo_Add_Data(&Buffer,j) == Fifo_no_error)
            printf("FIFO Add element == %d\n",buf[j]);
    }
    printf("\n\n");
    if(Fifo_Get_Data(&Buffer,&data) == Fifo_no_error)
        printf("FIFO Get element == %d\n",data);
    if(Fifo_Get_Data(&Buffer,&data) == Fifo_no_error)
        printf("FIFO Get element == %d\n",data);




    printf("\n\n");
    print_all_data(&Buffer);

    return 0;
}
