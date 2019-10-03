#include <iostream>
using namespace std;
int main(){
	int ganjil,awal;
	cout<<"Masukkan Bilangan Ganjil = ";
	cin>>ganjil;
	
	for (awal=1; awal<=ganjil; awal++){
		cout<<awal<<" ";
		awal=awal+2;
	}
}

