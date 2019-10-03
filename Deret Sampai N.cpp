// Latihan Pertemuan 9 Soal NO4
#include <iostream>
using namespace std;

int urut(int input)
{
    for (int i = 1; i <= input; i = i + 1)
    {
        cout << i << " ";
    }
    return 0;
}

main()
{
    int input;
    cout << "Masukkan Batas N = ";
    cin >> input;
    urut(input);
}