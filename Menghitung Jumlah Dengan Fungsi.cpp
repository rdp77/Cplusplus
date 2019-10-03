#include <iostream>
using namespace std;

int Jumlah(int X, int Y)
{
	int Total;
   Total=X+Y;
   return Total;
}

main()
{
   int X = 10;
   int Y = 20;
   int Total=0;
   Total=Jumlah(X,Y);
   cout<<Total;
}
