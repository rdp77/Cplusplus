#include <iostream>
using namespace std;
main()
{
    int h, i, j, input;
    cout << "Masukkan Tinggi = ";
    cin >> input;
    h = input;
    if (input <= 0)
    {
        cout << "ERROR!";
    }
    while (h >= 1)
    {
        i = 0;
        while (i < h)
        {
            j = h;
            j = j + i;
            cout << j << " ";
            i++;
        }
        h--;
        cout << endl;
    }
}