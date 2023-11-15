#include <stdio.h>
#include"Fifo.h"



// APIs Defination //

FIFO_Status_t Fifo_Is_Full(FIFO_Buf_t* fifo_buf)
{
    if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
        return Fifo_null;
    if(fifo_buf->counter == fifo_buf->length)
        return Fifo_full;


    return Fifo_no_error;
}
FIFO_Status_t Fifo_Is_Empty(FIFO_Buf_t* fifo_buf)
{
    if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
        return Fifo_null;
    if(fifo_buf->counter == 0)
        return Fifo_empty;


    return Fifo_no_error;
}
FIFO_Status_t Fifo_init(FIFO_Buf_t* fifo_buf,ele_type* buf,unsigned int length)
{
    if(buf == NULL)
        return Fifo_null;
    fifo_buf->base = buf;
    fifo_buf->head = buf;
    fifo_buf->tail = buf;
    fifo_buf->counter = 0;
    fifo_buf->length = length;

    return Fifo_no_error;
}
FIFO_Status_t Fifo_Add_Data(FIFO_Buf_t* fifo_buf,ele_type data)
{
    if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
        return Fifo_null;
    if(Fifo_Is_Full(fifo_buf) == Fifo_full)
        return Fifo_full;
    *(fifo_buf->head) = data;
    fifo_buf->head++;
    fifo_buf->counter++;
    if(fifo_buf->head == (fifo_buf->base + fifo_buf->length))
        fifo_buf->head = fifo_buf->base;

    return Fifo_no_error;
}
FIFO_Status_t Fifo_Get_Data(FIFO_Buf_t* fifo_buf,ele_type* data)
{
    if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
        return Fifo_null;
    if(Fifo_Is_Empty(fifo_buf) == Fifo_empty)
        return Fifo_empty;
    *data = *(fifo_buf->tail);
    if(fifo_buf->tail < (fifo_buf->base + fifo_buf->length))
    {
        fifo_buf->tail++;
        fifo_buf->counter--;
    }
    if(fifo_buf->tail == (fifo_buf->base + fifo_buf->length))
        fifo_buf->tail = fifo_buf->base;

    return Fifo_no_error;
}
void print_all_data(FIFO_Buf_t* fifo_buf)
{

    if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
        printf("FIFO Buffer is not found\n");
    if(Fifo_Is_Empty(fifo_buf) == Fifo_empty)
        printf("FIFO Buffer is ======EMPTY======\n");
    ele_type*ptr=fifo_buf->tail;
    for(int i=0; i<fifo_buf->counter;i++)
    {
        printf("FIFO element == %d\n",*(ptr+i));
    }





}
