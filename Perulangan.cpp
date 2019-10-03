#include <iostream>
using namespace std;

main(){
    int n=1;
    cout<<"=== Perulangan For ==="<<endl;
    for (int k=1; k<=10; k++){
        cout<<k<<" ";
    }cout<<endl<<endl;
    cout<<"=== Perulangan While ==="<<endl;
    while(n<=10){
        cout<<" "<<n;
        n++;
    }cout<<endl<<endl;
    cout<<"=== Perulangan Do-While ==="<<endl;
    n=1;
    do{
        cout<<" "<<n;
        n++;
    }while(n<=10);
}