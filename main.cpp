#include <iostream>
#include "sll.h"

int main()
{
    List J;
    Create_List(J);
    address P;
    infotype data;

    std::cout << "Nama: ";
    std::cin >> data.nama;
    std::cout << "NIP: ";
    std::cin >> data.nip;
    std::cout << "Umur: ";
    std::cin >> data.umur;
    std::cout << "Jabatan: ";
    std::cin >> data.jabatan;

    P = New_Elemen(data);
    Insert_First(J, P);

    std::cout << "Nama: ";
    std::cin >> data.nama;
    std::cout << "NIP: ";
    std::cin >> data.nip;
    std::cout << "Umur: ";
    std::cin >> data.umur;
    std::cout << "Jabatan: ";
    std::cin >> data.jabatan;

    P = New_Elemen(data);
    Insert_Last(J,P);

    std::cout << "Nama: ";
    std::cin >> data.nama;
    std::cout << "NIP: ";
    std::cin >> data.nip;
    std::cout << "Umur: ";
    std::cin >> data.umur;
    std::cout << "Jabatan: ";
    std::cin >> data.jabatan;

    P = New_Elemen(data);
    Insert_First(J, P);

    std::cout << "Nama: ";
    std::cin >> data.nama;
    std::cout << "NIP: ";
    std::cin >> data.nip;
    std::cout << "Umur: ";
    std::cin >> data.umur;
    std::cout << "Jabatan: ";
    std::cin >> data.jabatan;

    P = New_Elemen(data);
    Insert_Last(J, P);

    std::cout<<"\n";
    Show(J);

    std::cout<<"\nIsi data setelah data pertama dihapus\n";
    std::cout<<"\n";

    Delete_First(J, P);
    Show(J);

    std::cout<<"\nIsi data setelah data terakhir dihapus\n";
    std::cout<<"\n";

    Delete_Last(J, P);
    Show(J);

    return 0;
}
