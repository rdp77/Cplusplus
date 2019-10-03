#include <iostream>
using namespace std;

main()
{
   int Bil;
   cout<<"Masukkan Bilangan = ";
   cin>>Bil;
   if(Bil>0)
   	cout<<"Bilangan Positif";
   else
   if(Bil<0)
   	cout<<"Bilangan Negatif";
   else
   	cout<<"Bukan Positif bukan Negatif";
}
