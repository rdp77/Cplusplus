#include <iostream>
using namespace std;

struct Mhs
{
    char matkul[20];
    int sks;
    int kode;
    int semester;
    Mhs *Kanan;
};

Mhs *PAwal, *PAkhir;

int menu()
{
    int Pilih = 0;
    while (!(Pilih >= 1 && Pilih <= 5))
    {
        cout << "====================" << endl;
        cout << "1.Input Data" << endl;
        cout << "2.Display Data" << endl;
        cout << "3.Pencarian" << endl;
        cout << "4.SELESAI" << endl
             << endl;
        cout << "Pilih Nomer  = ";
        cin >> Pilih;
    }
    return Pilih;
}

void input()
{
    system("cls");
    Mhs *NodeBaru;
    NodeBaru = new Mhs;

    cout << "Kode Mata Kuliah   = ";
    cin >> NodeBaru->kode;
    cout << "Nama Mata Kuliah  = ";
    cin >> NodeBaru->matkul;
    cout << "Semester = ";
    cin >> NodeBaru->semester;
    cout << "SKS = ";
    cin >> NodeBaru->sks;
    NodeBaru->Kanan = NULL;
    if (PAwal == NULL)
    {
        PAwal = NodeBaru;
        PAkhir = NodeBaru;
    }
    else
    {
        PAkhir->Kanan = NodeBaru;
        PAkhir = NodeBaru;
    }
}

void view()
{
    system("cls");
    Mhs *PNode;
    PNode = PAwal;
    cout << "Kode \t Nama \t Sem \t SKS" << endl;
    while (PNode != NULL)
    {
        cout << PNode->kode << "\t" << PNode->matkul << "\t"
             << PNode->semester << "\t" << PNode->sks << endl;
        PNode = PNode->Kanan;
    }
}

void cari()
{
    system("cls");
    Mhs *PNode;
    PNode = PAwal;
    cout << "Masukkan kode mata kuliah yang ingin dicari = " << endl;
}

main()
{
    int Pilih = 0, Indek = 0;
    PAwal = NULL;
    PAkhir = NULL;
    while (!(Pilih >= 1 && Pilih <= 5))
    {
        Pilih = menu();
        switch (Pilih)
        {
        case 1:
            input();
            Pilih = 0;
            break;
        case 2:
            view();
            Pilih = 0;
            break;
        case 3:
            cari();
            break;
        case 4:
            break;
        }
    }
}