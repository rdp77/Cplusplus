#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Masukkan inputan X = ";
	cin>>x;
	cout<<"Masukkan Inputan Y = ";
	cin>>y;
	if (x>0 && y>0){
		cout<<"Kuadran 1,";
	}
	else if (x<0 && y>0){
		cout<<"Kuadran 2,";
	}
	else if (x<0 && y<0){
		cout<<"Kuadran 3,";
	}
	else {
		cout<<"Kuadran 4,";
	}
	cout<<"Berada di koordinat "<<x<<","<<y;
}
