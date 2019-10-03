#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
int main()
{
int pil;
char ulang;

cout<<"PROGRAM KONVERSI BILANGAN\n\n";

do{
cout<<"\nPilihan Konversi Bilangan :\n";
cout<<"1. Desimal ke Biner\n";
cout<<"2. Biner Ke Desimal\n";
cout<<"Pilihan = "; cin>>pil;

switch (pil){

case 1:{
 int des,bin,k=128;

  do{
  cout << "\nMasukkan bilangan Desimal Positif = ";
  cin >> des;
 }
 while(des<0);

  cout<<"\nHasil konversi ke Biner = ";
 for(int i=0;i<8;i++)
 {
      bin=des/k;
      cout<<bin;
      des=des%k;
      k=k/2;
   }
break;
}

case 2:{
 int des=0,i=0;
   char bin[8];
 cout<<"\nMasukkan Bilangan Biner = ";
 cin>>bin;

   cout<<"\nHasil Konversi ke Desimal = ";
   while(bin[i]!=0)
    {    if(bin[i]=='0'||bin[i]=='1')
        {
            des=des*2+bin[i]-48;
        }i++;
    }
    cout<<des;
break;
}

default:{
 cout<<"\nTidak ada pilihan "<<pil;
}
}

cout<<"\n\nIngin Menghitung Rangkaian Logika Lagi (y) = "; cin>>ulang;
}
while((ulang=='y') || (ulang=='Y'));
}
