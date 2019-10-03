#include <iostream>
using namespace std;

void rekursif(int f)
{
    long int hasil;
    for (int i = f; i >= 1; i--)
    {
        hasil = hasil * i;
    }
    cout << hasil;
}
main()
{
    int n, y;
    cout << "Masukkan Jumlah n = ";
    cin >> n;
    rekursif(n);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            y = y + j;
            cout << y << ", ";
            y++;
        }
    }
}