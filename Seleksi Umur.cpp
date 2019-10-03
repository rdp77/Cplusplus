#include <iostream>
#include <stdio.h>
using namespace std;

main()
{
   int Umur;
   cout<<"Masukkan Umur = ";
   cin>>Umur;
   if(Umur <= 5)
   	cout<<"BALITA";
   else
   if(Umur <=12)
   	cout<<"ANAK-ANAK";
   else
   if(Umur <=20)
   	cout<<"REMAJA";
   else
   if(Umur <=40)
   	cout<<"DEWASA";
   else
   	cout<<"LANSIA";
}
