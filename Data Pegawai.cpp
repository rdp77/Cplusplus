#include <iostream>
using namespace std;
struct Pegawai
{
    int induk;
    char nama[30];
    char golongan[3];
    int gaji;
};

Pegawai *awal, *akhir;

void input()
{
    system("cls");
    Pegawai *node;
    node = new Pegawai;
    cout << "Masukkan Nomor Induk = ";
    cin >> node->induk;
    cout << "Masukkan Nama Pegawai = ";
    cin >> node->nama;
    cout << "Masukkan Golongan = ";
    cin >> node->golongan;
    cout << "Masukkan Gaji = ";
    cin >> node->gaji;
}

void view()
{
    Pegawai *node;
    node = awal;
    cout << "Nomor Induk \t Nama Pegawai \t Golongan \t Gaji";
    while (node != NULL)
    {
        cout << node->induk << "\t" << node->nama << "\t" << node->golongan << "\t" << node->gaji;
    }
}

void pilih()
{
    int pilih = 0;
    while (!(pilih >= 1 && pilih <= 4))
    {
    }
}

main()
{
    int Pilih = 0, Indek = 0;
    awal = NULL;
    akhir = NULL;
    while (!(Pilih >= 1 && Pilih <= 4))
    {
        system("cls");
        cout << "============" << endl;
        cout << "1.Masukkan Data Pegawai" << endl;
        cout << "2.Tampilkan Data Pegawai" << endl;
        cout << "3.Cari Data Pegawai" << endl;
        cout << "4.Keluar" << endl;
        cout << "============" << endl;
        cin >> Pilih;
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
            break;
        case 4:
            break;
        }
    }
}