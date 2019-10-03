#include <iostream>
using namespace std;

main()
{
	int Bil;
   cout<<"masukkan bilangan = ";
   cin>>Bil;
   for(int I=1 ; I<=Bil ; I++)
   {
   	if(Bil%I==0)
      {
      	cout<<I<<"  ";
      }
   }
}

