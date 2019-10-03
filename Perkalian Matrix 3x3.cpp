#include <iostream>
#include <stdlib.h>
using namespace std;
void kalimatriks(int a[3][3],int b[3][3],int hasil[3][3]){
	cout<<endl<<"Hasil"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			hasil[i][j]=0;
			for(int k=0; k<3; k++){
				hasil[i][j] += (a[i][j]*b[i][j]);
			}cout<<"\t"<<hasil[i][j];}cout<<endl;}}
int main(){
	int a[3][3],b[3][3],add[3][3],hasil[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			a[i][j] = rand()%(10) + 1;}}
	cout<<"Matriks Pertama (3x3)"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Matriks Ke ["<<i<<"]["<<j<<"] = "<<a[i][j]<<endl;
		}}cout<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			b[i][j] = rand()%(10) + 1;}}
	cout<<"Matriks Kedua (3x3)"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Matriks Ke ["<<i<<"]["<<j<<"] = "<<b[i][j]<<endl;
		}}kalimatriks(a,b,hasil);}
