#include <iostream>
using namespace std;

void Cetak2()  // Fungsi
{
	cout<<"SISTEM BASIS DATA"<<endl;
   cout<<"TEKNIK KOMPILASI"<<endl;
}

void Cetak1()  // Fungsi
{
	cout<<"PEMROGRAMAN DASAR"<<endl;
   Cetak2();
   cout<<"STRUKTUR DATA"<<endl;
}

main( )
{
	Cetak1();
   cout<<"NAMA-NAMA MATAKULIAH"<<endl;
}
