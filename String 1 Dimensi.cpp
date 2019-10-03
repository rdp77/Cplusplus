#include <iostream>
using namespace std;
main(){
	int nilai[4]={11,22,33,44},angka[]={55,66,77,88,99},hasil=1;
	for(int i=0; i<4; i++){
		hasil = hasil+nilai[i];
		cout<<"Nilai ["<<i<<"] = "<<hasil<<endl;
	}
	cout<<endl<<endl;
	for(int i=0; i<5; i++){
		cout<<"Angka ["<<i<<"] = "<<angka[i]<<endl;
	}
}
