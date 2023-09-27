#include "sll.h"
#include <iostream>

void Create_List(List &L)
{
    L.First = NULL;
}

address New_Elemen(infotype data)
{
    address P = new elmList;
    P->info = data;
    P->next = NULL;
    return P;
}

void Insert_First(List &L, address P)
{
    if (L.First == NULL)
    {
        L.First = P;
    }
    else
    {
        P->next = L.First;
        L.First = P;
    }
}

void Insert_Last(List &L, address P)
{
    if (L.First == NULL )
    {
        L.First = P;
    }
    else
    {
        address curr = L.First;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = P;
    }
}

void Insert_After(List &L, address Prec, address P)
{
    if (L.First == NULL)
    {
        L.First = P;
    }
    else
    {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void Delete_First(List &L, address P)
{
    P = L.First;
    if (L.First->next == NULL)
    {
        L.First = NULL;
    }
    else
    {
        L.First = L.First->next;
        P->next = NULL;
    }
}

void Delete_Last(List &L, address P)
{
    P = L.First;
    if (L.First->next == NULL)
    {
        L.First = NULL;
    }
    else
    {
        while (P->next->next != NULL)
        {
            P = P->next;
        }
        P->next = NULL;
    }
}
void Delete_After(List &L, address Prec, address P)
{
    P = Prec->next;
    Prec->next = P->next;
    P->next = NULL;
}

void Show(List L)
{
    address P;
    int i;

    if (L.First == NULL)
    {
        std::cout << "List kosong!" << "\n";
    }
    else
    {
        i = 1;
        P = L.First;
        while (P != NULL)
        {
            std::cout<<i<<" ";
            std::cout<<P->info.nama << " ";
            std::cout<<P->info.nip << " ";
            std::cout<<P->info.umur << " ";
            std::cout<<P->info.jabatan << "\n";
            i+=1;
            P = P->next;
        }
    }
}
