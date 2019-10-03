#include <iostream>
using namespace std;
int main()
{
	int N,x,ganjil; //Deklarasi Variabel
	cout<<"Masukkan Bilangannya = "; //Ouput 
	cin>>N; //Input N angka ganjil
    x=1; //Pemberian nilai pada x
	while(x<=N){ //Stop sampai nilai x kurang dari nilai N
		ganjil=2*x-1; //Proses penghitungan nilai ganjil
		cout<<ganjil<<" "; //Output ganjil
		x++; //Penambahan nilai x
	}
}