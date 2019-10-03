#include <iostream>
using namespace std;

main()
{
	int NBI[100];
	char NAMA[100][50];
   char ALAMAT[100][100];
   int N;
   cout<<"Banyaknya Data = ";
   cin>>N;

   //Input Data Mahasiswa
   for(int I=1 ; I<=N ; I++)
   {
   	cout<<"Data Ke "<<I<<endl;
      cout<<"N B I = ";
      cin>>NBI[I];
      cout<<"NAMA = ";
      gets(NAMA[I]);
      cout<<"ALAMAT = ";
      gets(ALAMAT[I]);
      cout<<endl;
   }

   //Menampilkan Data Mahasiswa
   cout<<"DATA MAHASISWA"<<endl<<endl;
   cout<<"NO."<<"\t"<<"N B I"<<"\t"<<"\t"<<"N A M A"
       <<"\t"<<"\t"<<"ALAMAT"<<endl;
   for(int I=1 ; I<=N ; I++)
   {
   	cout<<I<<"\t"<<NBI[I]<<"\t"<<"\t"<<NAMA[I]<<"\t"
          <<"\t"<<ALAMAT[I]<<endl;
   }
}
