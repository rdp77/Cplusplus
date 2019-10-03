#include <iostream>
using namespace std;
main(){
int nilai;
 cout<<"Masukan Nilai anda 0 - 10 : ";cin>>nilai;
 cout<<"Anda masuk kategori ";
 switch(nilai){
  case 10:
  case 9:
  cout<<"A";
  break;
  case 8:
  case 7:
  cout<<"B";
  break;
  case 6:
  case 5:
  cout<<"C";
  break;
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
  cout<<"D";
  break;
  default:
  cout<<"nilai anda tidak masuk kategori!";
 }}
