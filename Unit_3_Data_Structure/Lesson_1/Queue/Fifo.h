#ifndef FIFO_H_INCLUDED
#define FIFO_H_INCLUDED

typedef unsigned int    uint32_t;
typedef unsigned char    uint8_t;

#define ele_type       uint32_t

typedef struct
{
    unsigned int length;
    unsigned int counter;
    ele_type* base;
    ele_type* head;
    ele_type* tail;

}FIFO_Buf_t;


typedef enum
{
    Fifo_no_error,
    Fifo_null,
    Fifo_full,
    Fifo_empty
}FIFO_Status_t;


FIFO_Status_t Fifo_Is_Full(FIFO_Buf_t* fifo_buf);
FIFO_Status_t Fifo_Is_Empty(FIFO_Buf_t* fifo_buf);
FIFO_Status_t Fifo_init(FIFO_Buf_t* fifo_buf,ele_type* buf,unsigned int length);
FIFO_Status_t Fifo_Add_Data(FIFO_Buf_t* fifo_buf,ele_type data);
FIFO_Status_t Fifo_Get_Data(FIFO_Buf_t* fifo_buf,ele_type* data);
void print_all_data(FIFO_Buf_t* fifo_buf);

#endif // FIFO_H_INCLUDED
