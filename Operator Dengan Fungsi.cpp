#include <iostream>
using namespace std;

void Total(int X, int Y, int Jumlah, int Kurang)
{
   Jumlah=X+Y;
   Kurang=X-Y;
   cout<<endl;
}

main()
{
	int Jumlah=0,Kurang=0;
   int X = 10;
   int Y = 20;
   Total(X,Y,Jumlah,Kurang);
   cout<<X<<" + "<<Y<<" = "<<Jumlah<<endl;
   cout<<X<<" - "<<Y<<" = "<<Kurang<<endl;
}
