#include <iostream>
using namespace std;

int main()
{
float awal,akhir,y,t=0;
int ta,j,x=0,index=1;
char pilih;

	do{	// Loopings
	cout << "Banyak trapesium : "; cin >> ta;
	cout << "X awal: "; cin >> awal;
	cout << "X akhir: "; cin >> akhir;
	
	t = (akhir - awal) / ta;
	cout << "Tinggi : " << t << endl;
	cout<<t;
	
	x = ta + 1; // banyak x
	cout << "=================================" << endl;
	cout << "banyak x dan y : " << x << endl;
	cout << "=================================" << endl;
	float tx[x];
	//	tx[0] = awal;
	// Mencari X atau sisi tengah,awal,akhir trapesium
	for(int i = 1; i <= x; i++){
		if(i == 1){
			tx[1] = awal;
			cout << "X ke " << i << " : " << tx[i] << endl;
		}else if(i == x){
			tx[x] = akhir;
			cout << "X ke " << i << " : " << tx[i] << endl;
 		}else {
 			tx[i] = t + tx[index] ;
 			cout << "X ke " << i << " : " << tx[i] << endl; 
		 	index++;
		 }
	}
	cout << "*********************************" << endl;
	//cout << "Rumus mencari y = x^2 + 3x - 1" << endl;
	// Mencari Y atau sisi dari trapesium
	cout << "Rumus mencari y = x^2 + 1" << endl;
	float ty[x];
	for(int i = 1; i <= x; i++){
		// ty[i] = ((tx[i] * tx[i]) + (3 * tx[i]) - 1) ;
		
		ty[i] = ((tx[i] * tx[i]) +  1) ;
		cout << "Y ke " << i << " : " << ty[i] << endl;
	}
	cout << "*********************************" << endl;
	//Menghitung luas
	float tl[ta];
	for(int i = 1; i <= ta; i++){
		tl[i] = ((ty[i] + ty[i+1]) * t) / 2;
		cout << "L ke " << i << " : " << tl[i] << endl; 
		}
	//Menghitung total luas
	float hasil = 0;
	for(int i = 1; i <= ta; i++){
		hasil = hasil + tl[i];
//	cout << "h " << i << " : " << hasil << endl;
	}
	cout << "Total Luas : " << hasil << endl;
	cout << "ulangi ? (y/n) : "; cin >> pilih;
	system("cls");
	}while(pilih == 'y');
}

