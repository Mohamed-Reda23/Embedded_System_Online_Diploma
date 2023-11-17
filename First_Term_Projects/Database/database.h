#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED

typedef struct
{
    unsigned int roll;
    char name1[10];
    char name2[10];
    float gpa;
    unsigned int course1;
    unsigned int course2;

}SStudents_t;

typedef struct
{
    unsigned int length;
    unsigned int counter;
    SStudents_t*head;
    SStudents_t*base;
    SStudents_t*tail;

}FIFO_Buf_t;

typedef enum
{
    fifo_null,
    fifo_no_error,
    fifo_empty,
    fifo_full
}Fifo_status_t;


// APIs Declaration //

Fifo_status_t Fifo_is_full(FIFO_Buf_t*Buf);
Fifo_status_t Fifo_is_empty(FIFO_Buf_t*Buf);
Fifo_status_t Fifo_init(FIFO_Buf_t*Buf,SStudents_t*buf,unsigned int length);
Fifo_status_t Add_Student(FIFO_Buf_t*Buf);
Fifo_status_t Delete_Student(FIFO_Buf_t*Buf);
void Print_Students(FIFO_Buf_t*Buf);
void Find_student_with_roll(FIFO_Buf_t*Buf);
void count_Students(FIFO_Buf_t*Buf);
void Find_Student_With_First_Name(FIFO_Buf_t*Buf);
void Get_Students_Regiter_Course(FIFO_Buf_t*Buf);
void Update_Student_Data(FIFO_Buf_t*Buf);
void Finish_Program(void);

#endif // DATABASE_H_INCLUDED
