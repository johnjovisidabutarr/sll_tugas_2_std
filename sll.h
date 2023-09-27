#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>

struct karyawan
{
    std::string nama, nip, jabatan;
    int umur;
};

typedef karyawan infotype;

typedef struct elmList *address;

struct elmList
{
    infotype info;
    address next;
};

struct List
{
    address First;
};

void Create_List(List &L);
address New_Elemen(infotype data);
void Insert_First(List &L, address P);
void Insert_Last(List &L, address P);
void Insert_After(List &L, address Prec, address P);
void Delete_First(List &L, address P);
void Delete_Last(List &L, address P);
void Delete_After(List &L, address Prec, address P);
void Show(List L);


#endif // SLL_H_INCLUDED
