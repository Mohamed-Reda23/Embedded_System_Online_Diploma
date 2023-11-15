#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

struct Sdata
{
    char name[40];
    unsigned int id;
    float height;
};

struct SStudent
{
    struct Sdata student;
    struct SStudent* pNextStudent;
};

// APIs Declaration //

void Add_student();
void Delete_student();
void Delete_All();
void View_All();
int Count_students();
void View_data_with_index();
void View_data_from_end_with_index();
void View_TheMiddle_data();
void reverse_linked_list();

#endif // LINKED_LIST_H_INCLUDED
