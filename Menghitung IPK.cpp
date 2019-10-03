#include <iostream>
using namespace std;
int main(){
	int nbi;
	float ipk,sem1,sem2,sem3,sem4,sem5,sem6,sem7,sem8;
	double hp;
	char nama[20],alamat[35];
	cout<<"Masukkan Nama Anda = ";cin>>nama;
	cout<<"Masukkan NBI Anda = ";cin>>nbi;
	cout<<"Masukkan Alamat Anda = ";cin>>alamat;
	cout<<"Masukkan No Handphone Anda = ";cin>>hp;
	cout<<"Nilai Semester 1 = ";cin>>sem1;
	cout<<"Nilai Semester 2 = ";cin>>sem2;
	cout<<"Nilai Semester 3 = ";cin>>sem3;
	cout<<"Nilai Semester 4 = ";cin>>sem4;
	cout<<"Nilai Semester 5 = ";cin>>sem5;
	cout<<"Nilai Semester 6 = ";cin>>sem6;
	cout<<"Nilai Semester 7 = ";cin>>sem7;
	cout<<"Nilai Semester 8 = ";cin>>sem8;
	ipk=sem1+sem2+sem3+sem4+sem5+sem6+sem7+sem8/8;
	cout<<"Total IPK Anda Adalah = "<<ipk;}
