#include <iostream>
#include <string>
using namespace std;
struct Bank
{
    char pin[5];
    int saldo;
} BK[3];

void menu()
{
}

int main()
{
    BK[0].saldo = 20000;
    BK[1].saldo = 50000;
    strcpy(BK[0].pin, "12345");
    strcpy(BK[1].pin, "67890");
    int pilih;
    char pemilihan, userpin[5];
awal:
    cout << "=====================" << endl;
    cout << "...: MENU AWAL :..." << endl;
    cout << "=====================" << endl;
    cout << "1. Masuk" << endl;
    cout << "2. Keluar" << endl;
    cout << "---------------------" << endl;
    cin >> pilih;
    switch (pilih)
    {
    case 1:
        cout << "Masukkan Pin Anda = " << endl;
        cin >> userpin;
        for (int i = 0; i <= 1; i++)
        {
            if (strcmp(BK[i].pin, userpin) == 0)
            {
                cout << "KONTOL";
            }
        }
        break;
    case 2:
        cout << "Apakah yakin anda mau keluar? (Y/N) ";
        cin >> pemilihan;
        if (pemilihan == 'y')
        {
            goto akhir;
        }
        else if (pemilihan == 'Y')
        {
            goto akhir;
        }
        else
        {
            goto awal;
        }
        break;
    default:
        cout << "Maaf inputan anda salah!!!";
        goto awal;
        break;
    }
akhir:
    cout << "TERIMAH KASIH";
}