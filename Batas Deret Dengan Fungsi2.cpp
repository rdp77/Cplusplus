#include <iostream>
using namespace std;

void HitungDeret(int N, int &Total)
{
   Total=0;
   for(int I=1 ; I <= N ; I++)
   {
   	Total=Total+I;
   }
}

main( )
{
	int N,T=0;
  	cout<<"Batas Deret = ";
   cin>>N;
   HitungDeret(N,T);
   cout<<"Total Deret = "<<T<<endl;
}
