#include <iostream>
using namespace std;
void proses(int banyak)
{
    float data[100], y;
    for (int i = 1; i <= banyak; i++)
    {
        cout << "a" << i << " = ";
        cin >> data[i];
        if (i % 2 == 0)
        {
            data[i] = 1 / data[i];
        }
        y += data[i];
        cout << "y = " << y << endl
             << endl;
    }
}

main()
{
    int n;
    cout << "Masukkan Banyak Data = ";
    cin >> n;
    proses(n);
}