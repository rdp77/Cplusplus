#include <iostream>
using namespace std;
int main(){
	int a[3][3],b[3][3],c[3][3],j,i;
	cout<<"Masukkan Matriks Pertama (3x3)"<<endl;
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			cout<<"Matriks Ke ["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}cout<<endl;
	cout<<"Masukkan Matriks Kedua (3x3)"<<endl;
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			cout<<"Matriks Ke ["<<i<<"]["<<j<<"] = ";
			cin>>b[i][j];
		}
	}cout<<endl;
	cout<<"HASIL : "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			c[i][j] = a[i][j]+b[i][j];
			cout<<"\t"<<c[i][j];}cout<<endl;}}
