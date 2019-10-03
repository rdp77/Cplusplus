#include <iostream>
using namespace std;
main()
{
    char y;
    int input, i, j, t;
ulang:
    cout << "Masukkan Angka = ";
    cin >> input;
    t = 1;
    j = 1;
    if (input > 0)
    {
        for (i = 1; i <= input; i++)
        {
            cout << t << " ";
            t = j * t;
            j++;
        }
        cout << endl;
    }
    else if (input <= 0)
    {
        cout << "ERROR!" << endl;
    }
    cout << "Ulangi Lagi? (Y/N)";
    cin >> y;
    if (y == 'Y' || y == 'y')
    {
        goto ulang;
    }
    else
    {
        goto akhir;
    }
akhir:
    return 0;
}