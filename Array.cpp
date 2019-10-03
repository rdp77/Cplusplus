#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int random,nilai[50],a,b,c,d;
	cout<<"Masukkan Jumlah Bilangan = ";cin>>a;
	cout<<"\nKondisi Awal Array : "<<endl;
	for(b=0;b<a;b++){
		random=rand()%a;nilai[b]=random;}
	for(b=0;b<=a;b++){
		if(nilai[b]%2==0){
			cout<<" "<<nilai[b];
		}}cout<<endl;
	cout<<"Pengurutan Dari Besar Ke Kecil : "<<endl;
	for(b=1;b<a;b++){
		for(c=0;c<a-1;c++){
			if(nilai[c]>nilai[c+1]){
				d=nilai[c];nilai[c]=nilai[c+1];nilai[c+1]=d;
			}}}
	for(b=a;b>=0;b--){
		if(nilai[b]%2==0){
			cout<<" "<<nilai[b];}}
	cout<<"\nKondisi Akhir Array : "<<endl;
	for(b=a;b>=0;b--){
		if(nilai[b]%2==0){
			cout<<" "<<nilai[b];}}}
