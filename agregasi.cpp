#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"
int main()
{
    Ibu *varIbu = new Ibu("Dini");
    Ibu *varIbu2 = new Ibu("Novi");
    anak *varAnak1 = new anak("Tono");
    anak *varAnak2 = new anak("Rini");
    anak *varAnak3 = new anak("Dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);

    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;

    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    system("pause");
    return 0;
}
