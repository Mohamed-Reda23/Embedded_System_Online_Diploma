#ifndef LIFO_H_INCLUDED
#define LIFO_H_INCLUDED

typedef unsigned char  uint8_t;
typedef unsigned int   uint32_t;
#define element_type   uint32_t

// User define variables declarations //

typedef struct
{
    uint32_t legnth;
    uint32_t counter;
    element_type* base;
    element_type* head;
}LIFO_Buf_t;

typedef enum
{
    Lifo_no_error,
    Lifo_null,
    Lifo_full,
    lifo_empty

}LIFO_status;

// APIs Declarations //

LIFO_status LIFO_init(LIFO_Buf_t* lifo_buf,element_type* buf,uint32_t length);
LIFO_status LIFO_IS_FULL(LIFO_Buf_t* lifo_buf);
LIFO_status LIFO_IS_EMPTY(LIFO_Buf_t* lifo_buf);
LIFO_status LIFO_Add_data(LIFO_Buf_t* lifo_buf,element_type data);
LIFO_status LIFO_Get_data(LIFO_Buf_t* lifo_buf,element_type* data);
void print_data(LIFO_Buf_t* lifo_buf);



#endif // LIFO_H_INCLUDED
