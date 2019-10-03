#include <iostream>
using namespace std;

int HitungDeret(int N);  // Prototype fungsi

main( )

{
	int N,Tot;
	cout<<"Batas Deret = ";
   cin>>N;
   Tot=HitungDeret(N);
   cout<<"Total Deret = "<<Tot<<endl;
}

int HitungDeret(int N)
{
   int Total=0;
   for(int I=1 ; I <= N ; I++)
   {
   	Total=Total+I;
   }
   return Total;
}
