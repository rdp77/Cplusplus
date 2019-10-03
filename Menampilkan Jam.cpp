#include <iostream>
using namespace std;
int main(){
    int menit,jam,sisa,detik;
    cout<<"Masukkan Detik = ";
    cin>>detik;
    jam=detik/3600;
    sisa=detik%3600;
    menit=sisa/60;
    detik=sisa/60;
    cout<<jam<<" jam "<<menit<<" menit "<<detik<<" detik ";
}