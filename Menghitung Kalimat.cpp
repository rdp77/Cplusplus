// Nama		: Rizki Fadlin Arif
// NBI		: 1461800130
// Kelas	: Teknik Informatika Kelas (S) 

#include <iostream>

using namespace std; 
int main(){
	char huruf[123];
	int i,spasi=0; 
	cout<<"Masukkan Kalimat Yang Ingin Dihitung = ";
	cin.getline(huruf, sizeof(huruf));
	
	
	for(i=0; huruf[i]; i++){
		if(isspace(huruf[i])||ispunct(huruf[i])){
		spasi++;
		if(isspace(huruf[i+1])||ispunct(huruf[i+1])) 
		spasi=spasi-1;}
		}
	cout<<"Di Dalam Kalimat Terdapat "<<spasi+1<<" Kata"<<"\n";
	cout<<"<<<<<<<<<<----->>>>>>>>>>";
	cout<<"\nKata Yang Ingin Anda Masukkan Adalah : \n";
 	cout<<" ";
 
	for(i=0; huruf[i]; i++){
		if(isspace (huruf[i]) || ispunct (huruf[i])){
		spasi++;}
	cout<<huruf[i];
	} 
}
