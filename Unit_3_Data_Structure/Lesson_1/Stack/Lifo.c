#include <stdio.h>
#include"Lifo.h"

// APIs Defination //

LIFO_status LIFO_IS_FULL(LIFO_Buf_t* lifo_buf)
{
    if(!lifo_buf->base || !lifo_buf->head)
        return Lifo_null;
    if(lifo_buf->head >= (lifo_buf->base + lifo_buf->legnth))
        return Lifo_full;

    return Lifo_no_error;
}
LIFO_status LIFO_IS_EMPTY(LIFO_Buf_t* lifo_buf)
{
    if(!lifo_buf->base || !lifo_buf->head)
        return Lifo_null;

    if(lifo_buf->head == lifo_buf->base)
        return lifo_empty;

    return Lifo_no_error;
}
LIFO_status LIFO_init(LIFO_Buf_t* lifo_buf,element_type* buf,uint32_t length)
{
    if(buf == NULL)
        return Lifo_null;

    lifo_buf->base = buf;
    lifo_buf->head = buf;
    lifo_buf->legnth = length;
    lifo_buf->counter = 0;

    return Lifo_no_error;
}
LIFO_status LIFO_Add_data(LIFO_Buf_t* lifo_buf,element_type data)
{
    if(!lifo_buf->base || !lifo_buf->head)
        return Lifo_null;
    if(LIFO_IS_FULL(lifo_buf) == Lifo_full)
        return Lifo_full;

    *(lifo_buf->head) = data;
    if(lifo_buf->counter < lifo_buf->legnth)
    {
        lifo_buf->head++;
        lifo_buf->counter++;


    }

    return Lifo_no_error;

}
LIFO_status LIFO_Get_data(LIFO_Buf_t* lifo_buf,element_type* data)
{
    if(!lifo_buf->base || !lifo_buf->head)
        return Lifo_null;
    if(LIFO_IS_EMPTY(lifo_buf) == lifo_empty)
        return lifo_empty;
    if((lifo_buf->head != lifo_buf->base)  && (lifo_buf->counter != 0))
    {
        lifo_buf->head--;
        *data = *(lifo_buf->head);
        lifo_buf->counter--;

    }

    return Lifo_no_error;
}
void print_data(LIFO_Buf_t* lifo_buf)
{
    if(LIFO_IS_EMPTY(lifo_buf) == Lifo_no_error)
    {
        element_type* ptr=lifo_buf->base;
        for(element_type l=0;l<lifo_buf->counter;l++)
        {
            printf("LIFO element == %d\n",*(ptr+l));
        }
    }
    else
    {
        printf("LIFO Buffer is <<<<<<Empty>>>>>\n");
    }


}
