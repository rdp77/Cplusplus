#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,n;

	cout << "Masukkan Jumlah Batasnya = ";
	cin >> n;

	for (a=1; a<=n; a++) {
		for (b=a; b<=n; b++) {
			cout << "*";
		}
		cout<<"\n";
	}
	for (c=2; c<=n; c++){
		for (d=1; d<=c; d++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
