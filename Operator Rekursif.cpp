#include <iostream>
using namespace std;

int kali(int i, int j){
 if(j==0)
  return 0;
 else
  return i+kali(i,j-1);
}

int tambah(int i,int j){
	return i+j;
}

int bagi(int i,int j){
	return i/j;
}

int kurang(int i,int j){
	return i-j;
}


main(){
	int input,a,b;
	cout<<"Pilih Operator"<<endl;
	cout<<"1.Perkalian"<<endl;
	cout<<"2.Pembagian"<<endl;
	cout<<"3.Penjumlahan"<<endl;
	cout<<"4.Penguranan"<<endl;
	cout<<"Pilih Nomor = ";
	cin>>input;
	switch(input){
		case 1:
			cout<<"Masukkan bilangan pertama : ";
 			cin>>a;
 			cout<<"Masukkan bilangan kedua : ";
 			cin>>b;
			cout<<"Hasil = "<<kali(a,b);
		break;
		case 2:
			cout<<"Masukkan bilangan pertama : ";
 			cin>>a;
 			cout<<"Masukkan bilangan kedua : ";
 			cin>>b;
 			cout<<"Hasil = "<<bagi(a,b);
 		break;
 		case 3:
 			cout<<"Masukkan bilangan pertama : ";
 			cin>>a;
 			cout<<"Masukkan bilangan kedua : ";
 			cin>>b;
 			cout<<"Hasil = "<<tambah(a,b);
 		break;
 		case 4:
 			cout<<"Masukkan bilangan pertama : ";
 			cin>>a;
 			cout<<"Masukkan bilangan kedua : ";
 			cin>>b;
 			cout<<"Hasil = "<<kurang(a,b);
 		break;
	}
}
