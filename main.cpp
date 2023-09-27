#include <iostream>
#include "sll.h"

using namespace std;

int main()
{
    List J;

    Create_List(J);
    address P;

    infotype data;
    data.nama = "Budi";
    data.nip = "135792468";
    data.umur = 36;
    data.jabatan = "Senior Manager";
    P = New_Elemen(data);
    Insert_First(J, P);

    data.nama = "Aurel";
    data.nip = "1097538246";
    data.umur = 21;
    data.jabatan = "Junior Manager";
    P = New_Elemen(data);
    Insert_Last(J,P);

    data.nama = "Jenny";
    data.nip = "149302687";
    data.umur = 32;
    data.jabatan = "Staff Ahli";
    P = New_Elemen(data);
    Insert_First(J, P);

    data.nama = "Doni";
    data.nip = "1178923431";
    data.umur = 28;
    data.jabatan = "Staff Ahli";
    P = New_Elemen(data);
    Insert_Last(J, P);

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
