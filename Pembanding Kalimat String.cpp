#include <iostream>
#include <string.h>
using namespace std;
main()
{
	char a[15],b[15],hasil[15];
	int index,found;
	cout<<"Masukkan String Pertama = ";
	cin>>a;
	cout<<"Masukkan String Kedua = ";
	cin>>b;
	for(int i=0; i<=strlen(a); i++){
		found=0;
		cout<<"Kesatu = "<<i<<endl;
		cout<<"FOUND1 = "<<found<<endl;
		for (int j=0; j<=strlen(b); j++){
			if(a[i] == b[j]){
			found=1;
			cout<<"J = "<<j<<endl;
			cout<<"I = "<<i<<endl;
			cout<<"FOUND2 = "<<found<<endl;
		}}
	if(found==0) {
		hasil[index] = a[i];
		index++;
	}}
	cout<<"Hasil = ";
	for(int i=0; i<=strlen(hasil); i++){
		cout<<hasil[i];
	}}
