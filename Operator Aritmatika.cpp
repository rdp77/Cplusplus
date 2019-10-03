#include <iostream>
using namespace std;
int main(){
    int pilihan,a,b,hasil; //Tipe data disini menggunakan int untuk inputan berupa bilangan bulat sedangkan untuk variabelnya menggunakan pilihan,a,b, dan hasil//
    char ulang; //Tipe data disini menggunakan char untuk inputan berupa karakter sedangkan variabelnya menggunakan ulang sebagai perulangan//
    ulangi: //Pernyataan pemilihan yang mempunyai label ulangi//
    	do { //Pernyataan perulangan do akan dilakukan terus menerus//
    cout<<"=====================================\n";
    cout<<"# 1. Program Penjumlahan\n";
    cout<<"# 2. Program Pengurangan\n";
    cout<<"# 3. Program Perkalian\n";
    cout<<"=====================================\n";
    cout<<"Pilih Perhitungan Yang Anda Inginkan = "; //Ouput pemilihan program//
    cin>>pilihan; //Input dengan menggunakan variabel pilihan sebagai simbol pemilihan program//
    if (pilihan == 1){ //Pernyataan Pemilihan if jika variabel pilihan sama dengan 1 akan mengeksekusi program di bawah//
    	cout<<"Masukkan angka pertama = ";
    	cin>>a; //Inputan untuk memasukkan angka dengan menggunakan variabel a//
    	cout<<"Masukkan angka kedua = ";
    	cin>>b; //Inputan untuk memasukkan angka dengan menggunakan variabel b//
    	hasil=a+b; //Operator disini menggunakan tanda + untuk menjumlahkan variabel a dengan b agar menghasilkan variabel baru yaitu hasil//
    	cout<<"Penjumlahan dari "<<a<<" dan "<<b<<" Adalah "<<hasil; //Output dari variabel hasil,a dan b//
    	cout<<"\n==========================================";
		}
    else if (pilihan == 2){ //Pernyataan Pemilihan else if atau pengelompokan if jika variabel pilihan sama dengan 2 akan mengeksekusi perintah di bawah//
    	cout<<"Masukkan angka pertama = ";
    	cin>>a; //Inputan untuk memasukkan angka dengan menggunakan variabel a//
    	cout<<"Masukkan angka kedua = ";
    	cin>>b; //Inputan untuk memasukkan angka dengan menggunakan variabel b//
    	hasil=a-b; //Operator disini menggunakan tanda - untuk mengurangi variabel a dengan b agar menghasilkan variabel baru yaitu hasil//
    	cout<<"Pengurangan dari "<<a<<" dan "<<b<<" Adalah "<<hasil; //Output dari variabel hasil,a dan b//
    	cout<<"\n==========================================";
		}
    else if (pilihan == 3){ //Pernyataan Pemilihan else if atau pengelompokan if jika variabel pilihan sama dengan 2 akan mengeksekusi perintah di bawah//
    	cout<<"Masukkan angka pertama = ";
    	cin>>a; //Inputan untuk memasukkan angka dengan menggunakan variabel a//
    	cout<<"Masukkan angka kedua = ";
    	cin>>b; //Inputan untuk memasukkan angka dengan menggunakan variabel b//
    	hasil=a*b; //Operator disini menggunakan tanda * untuk mengkalikan variabel a dengan b agar menghasilkan variabel baru yaitu hasil//
    	cout<<"Perkalian dari "<<a<<" dan "<<b<<" Adalah "<<hasil; //Output dari variabel hasil,a dan b//
    	cout<<"\n==========================================";
		}
    	else{ //Pernyataan Pemilihan else apabila semua seleksi if dan else if tidak cocok semua maka akan mengeksekusi perintah dibawah//
			cout<<"Maaf inputan anda tidak ada dalam list\n";
    		cout<<"==========================================\n";    
			goto ulangi; //Pernyataan pemilihan goto untuk memilih atau menuju label ulangi//
		}	
		cout<<"\nApakah anda mau mengulanginya? (y/n)";
		cin>>ulang;} //Inputan untuk menyatakan ingin mengulangi program atau tidak//
		while(ulang == 'y'); //Pernyataan Perulangan while akan dilakukan terus menerus dilakukan jika variabel ulang berinput y dan jika variabel ulang tidak berinput y maka akan mengeksekusi perintah di bawah//
		cout<<"DONE PROGRAM BERHENTI";	
	}
