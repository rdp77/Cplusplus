#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void maskapai(char penerbangan[]){
	cout<<"Nama Maskapai = ";
	for(int i=0; i<strlen(penerbangan); i++){
		if(isalpha(penerbangan[i])){
			cout<<penerbangan[i];
		}
	}
	
	cout<<endl<<endl;
	cout<<"Nomer Penerbangan = ";
	for(int i=0; i<strlen(penerbangan); i++){
		if(isdigit(penerbangan[i])){
			cout<<penerbangan[i];
		}
	}
}

int main(){
	int penjangAlpha, nAlpha=0, nNumeric=0;
	char kodePenerbangan[10];
	
	cout<<"Masukkan Kode Penerbangan = ";
	gets(kodePenerbangan);
	
	cout<<endl<<endl;
	maskapai(kodePenerbangan);
}
