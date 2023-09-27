#include <iostream>
#include "sll.h"

int main()
{
    List J;
    Create_List(J);
    address P;

    std::string nama_user, nip_user, jabatan_user;
    int umur_user;
    infotype data;

    std::cout << "Nama: ";
    std::cin >> nama_user;
    std::cout << "NIP: ";
    std::cin >> nip_user;
    std::cout << "Umur: ";
    std::cin >> umur_user;
    std::cout << "Jabatan: ";
    std::cin >> jabatan_user;
    data.nama = nama_user;
    data.nip = nip_user;
    data.umur = umur_user;
    data.jabatan = jabatan_user;
    P = New_Elemen(data);
    Insert_First(J, P);

    std::cout << "\nNama: ";
    std::cin >> nama_user;
    std::cout << "NIP: ";
    std::cin >> nip_user;
    std::cout << "Umur: ";
    std::cin >> umur_user;
    std::cout << "Jabatan: ";
    std::cin >> jabatan_user;
    data.nama = nama_user;
    data.nip = nip_user;
    data.umur = umur_user;
    data.jabatan = jabatan_user;
    P = New_Elemen(data);
    Insert_Last(J,P);

    std::cout << "\nNama: ";
    std::cin >> nama_user;
    std::cout << "NIP: ";
    std::cin >> nip_user;
    std::cout << "Umur: ";
    std::cin >> umur_user;
    std::cout << "Jabatan: ";
    std::cin >> jabatan_user;
    data.nama = nama_user;
    data.nip = nip_user;
    data.umur = umur_user;
    data.jabatan = jabatan_user;
    P = New_Elemen(data);
    Insert_First(J, P);

    std::cout << "\nNama: ";
    std::cin >> nama_user;
    std::cout << "NIP: ";
    std::cin >> nip_user;
    std::cout << "Umur: ";
    std::cin >> umur_user;
    std::cout << "Jabatan: ";
    std::cin >> jabatan_user;
    data.nama = nama_user;
    data.nip = nip_user;
    data.umur = umur_user;
    data.jabatan = jabatan_user;
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
