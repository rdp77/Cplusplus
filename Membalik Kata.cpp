// Nama	: Rizki Fadlin Arif
// NBI	: 1461800130
// Kelas	: Teknik Informatika Kelas (S) 


#include <iostream>
#include <stdio.h>
#include <string.h>
 
using namespace std;
int main(){
  char karakter[123];
  cout<<"Masukkan kalimat Yang Ingin Dibalik = ";
  gets(karakter);
  strrev(karakter);
  cout<<karakter;
}
