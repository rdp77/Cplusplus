#include <iostream>
using namespace std;
int main(){
    int menit,jam,sisa,detik; //Deklarasi tipe data
    cout<<"Masukkan Detik = "; //Output perintah
    cin>>detik; //Input detik
    jam=detik/3600; //Menghitung Jam
    sisa=detik%3600; //Menghitung sisa bagi
    menit=sisa/60; //Menghitung Menit dari sisa
    detik=sisa%60; //Menghitung detik berdasarkan sisa tadi
    cout<<jam<<" jam "<<menit<<" menit "<<detik<<" detik "; //Output Jam Menit dan detik
}
