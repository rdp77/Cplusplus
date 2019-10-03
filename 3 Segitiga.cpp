#include <iostream>
using namespace std;
void proses(int banyak)
{
    int j = 4, simpan[10];
    for (int i = 1; i <= banyak; i++)
    {
        cout << "Tinggi Segitiga Ke-" << i << " = " << j << endl;
        simpan[i] = j;
        j++;
    }
    cout << endl;
    for (int i = 1; i <= simpan[1]; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 3 && j == 2)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= simpan[2]; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= simpan[3]; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 3 && j == 2)
            {
                cout << " ";
            }
            else if (i == 4 && j == 2)
            {
                cout << " ";
            }
            else if (i == 4 && j == 3)
            {
                cout << " ";
            }
            else if (i == 5 && j == 2)
            {
                cout << " ";
            }
            else if (i == 5 && j == 3)
            {
                cout << " ";
            }
            else if (i == 5 && j == 4)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

main()
{
    int banyak;
    cout << "Masukkan banyak segitiga = ";
    cin >> banyak;
    proses(banyak);
}