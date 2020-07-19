#include <iostream>
using namespace std;

main(){
	
	double jumlahtrapesium,xawal,xakhir;
	double x[100],jml,temp,hasil,luas[100],fx[100],luto;
	double tinggi;
	
	cout<<"X awal	: ";
	cin>>xawal;
	cout<<"X akhir	: ";
	cin>>xakhir;
	cout<<"Jumlah Trapesium : ";
	cin>>jumlahtrapesium;
	
	//menentukan H/tinggi untuk membantu mencari nilai x dan untuk menghitung nilai trapezodial
	tinggi=(xakhir-xawal)/jumlahtrapesium;
	cout<<"Tinggi : "<<tinggi<<endl;
	
	//menentukan nilai x
	cout<<"Nilai X : \n";
	for( int i=0; i<=jumlahtrapesium; i++){
		if(i == 0){
			x[i] =xawal; // nilai x awal
		} else {
			x[i] = xawal+(tinggi*i); // nilai x ke 1
		} //else {
			//x[i] =xawal + (i * tinggi); //nilai x ke n
		//}
		cout<<"x["<<i<<"] : "<<x[i]<<endl;
	}
	//menentukan Nilai F(x)
	cout<<"Nilai f(x) : \n";
	for(int i=0; i<=jumlahtrapesium; i++){
			fx[i] =(x[i]*x[i])+2;	
		cout<<"x^2["<<i<<"]+2 : "<<fx[i]<<endl;
	}
	
	//Luas Trapesium
	for (int i=0;i<jumlahtrapesium; i++){
		luas[i]=(fx[i]+fx[i+1])*tinggi/2;
		cout<<"Luas per-Trapesium "<<i+1<<": "<<luas[i]<<"\n"; //hasil dari penjumlahan luas
	}
	
	for (int i=0;i<jumlahtrapesium; i++){
		luto+=luas[i];
	}
	cout<<"Luas Total = "<<luto;
}
