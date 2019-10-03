#include <iostream>
using namespace std;
int faktorial(int angka){
	if (angka==1){
		return 1;
	}else{
		return angka*faktorial(angka-1);}}

int permutasi(int n, int k){
	return faktorial(n)/faktorial(n-k);}

int kombinasi(int n, int k){
	return faktorial(n)/(faktorial(k)*faktorial(n-k));
}

int main(){
	int input,kemungkinan,p,k;
	cout<<"Masukkan Banyaknya = ";
	cin>>input;
	cout<<"Masukkan Kemungkinan = ";
	cin>>kemungkinan;
	p = permutasi(input,kemungkinan);
	k = kombinasi(input,kemungkinan);
	cout<<"Permutasi = "<<p<<endl;
	cout<<"Kombinasi = "<<k<<endl;
}
