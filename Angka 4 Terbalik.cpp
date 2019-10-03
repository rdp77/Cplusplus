#include <iostream>
using namespace std;
main()
{
    int input;
    cout << "Masukkan Ketinggian = ";
    cin >> input;
    for (int i = input; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == 2)
            {
                cout << "#";
            }
            else if (i == 5)
            {
                cout << "#";
            }
            else if (i == 4 && j == 2)
            {
                cout << " ";
            }
            else if (i == 4 && j == 4)
            {
                cout << "#";
            }
            else if (i == 3 && j == 3)
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}