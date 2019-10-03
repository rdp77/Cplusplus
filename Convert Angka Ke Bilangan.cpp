#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int main(){
	float n;
	int ribuan,ratusan,puluhan,satuan,koma,r;
	string bil[10]={"","Satu","Dua","Tiga","Empat",
	"Lima","Enam","Tujuh","Delapan","Sembilan"},k;
	cout<<"Masukkan Bilangan = ";cin>>n;r=n;
	if(n>=1000){
		cout<<"ERROR Inputan Lebih Dari 1000";
	}else{
		koma=(floor((n-r)*1000+0.1)/1000)*1000;
		ratusan=r/100;r=r%100;
		puluhan=r/10;satuan=r%10;
		if(ratusan){k+=bil[ratusan]+" Ratus ";}
		if(puluhan&&r>=20||r==10){
			k+=bil[puluhan]+" Puluh ";}
		if(satuan&&puluhan==1){
			bil[1]="Satu ";k+=bil[satuan]+" Belas ";}
		else if(satuan){bil[1]="Satu ";k+=bil[satuan];}
		if(r%10==0){k="Nol ";}
		if(koma){
			k+="Koma ";r=koma;
			puluhan=r/100;puluhan=puluhan%100;
			ratusan=r/10;ratusan=ratusan%10;
			k+=bil[puluhan]+" Puluh ";
			k+=bil[ratusan];}cout<<"Output = "<<k;}}
