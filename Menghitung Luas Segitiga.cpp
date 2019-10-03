#include <iostream>
using namespace std;

main()
{
   float Alas, Tinggi, Luas;
   char Lagi='Y';
   while(Lagi=='Y')
   {
   	cout<<"Alas Segitiga = ";
   	cin>>Alas;
   	cout<<"Tinggi Segitiga = ";
   	cin>>Tinggi;
   	Luas=0.5*Alas*Tinggi;
   	cout<<"Luas Segitiga = "<<Luas<<endl;
   }
}
