#include <iostream>
using namespace std;
main()
{     int x, y, z, a;
            cout<<"Mencari Faktor Persekutuan Terbesar";
            cout<<"\n\n";
            cout<<"Masukan Bilangan 1 :";cin>>x;
            cout<<"Masukan Bilangan 2 :";cin>>y;
            cout<<"Nilai FP   : { ";
            for (z=1; z<=x; z++){
                  if (x%z==0 && y%z==0){
                        a=z;
                        cout<<z<<" ";
                  }
            }
            cout<<"}\nNilai FPB     : "<<a<<"\n\n";
}