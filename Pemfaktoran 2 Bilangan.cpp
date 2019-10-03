#include<iostream>
using namespace std;
int main ()
{
 int a,b,c,d,e,f,g;//deklarasikan variabel
 cout<<"masukkan nilai pertama : ";cin>>a;//masukkan nilai pertama
 cout<<"masukkan nilai kedua : ";cin>>b;//masukkan nilai kedua
 cout<<"faktor dari nilai pertama adalah : ";
 for (c=2;c<=a;c++)//looping untuk mencari faktor nilai pertama
 {
  if(a%c==0)//ulangi jika a mod c =0
  {
   cout<<c<< " ";
  }
 }
 cout<<" \n";
 cout<<"faktor dari nilai kedua adalah  : ";
 for (d=2;d<=b;d++)//looping untuk mencari faktor dari nilai kedua
 {
  if(b%d==0)//jika b mod d =0 maka tampilkan d
  {
   cout<<d<< " ";
  }
 }
 cout<<"\n";
 cout<<"faktor dari kedua nilai tersebut adalah : ";
 for (e=2;e<=c&&e<=d;e++)//looping untuk mencari kedua faktor yang sama dengan batasan nilai pertama dan kedua
  {
   if(a%e==0)//lakukan pemerikasaan apakah a mod e =0 jika iya maka lanjutkan
   {
    if(b%e==0)//lakukan pemeriksaan apaka b mod e =0 dan apakah sama dengan a mod e, jika iya tampilkan e
    {
     cout<<e<<" ";
    }
    }
  }
  cout<<"\n";
  g=a%b;//deklarasikan g adalah a mod b
  while(g!=0)//selama g tidak sama denngan 0 maka lakukan perpindahan
  {
   a=b; //masukkan nilai b ke a
   b=g;//masukkan nilai g ke b
   g=a%b;// lalu gunakan g = a mod b
  }
  if(b>1)
  {
   cout<<"nilai maximumnya adalah : "<<b;
  }
  else
  {
   cout<<"karena tidak ada faktor yang sama, maka tidaka ada nilai maximal";
  }
}