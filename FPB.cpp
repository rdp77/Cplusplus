#include <iostream>
using namespace std;

int FPB(int Bil1, int Bil2)
{
	int Terkecil,Terbesar=0;
   if(Bil1<Bil2)
   	Terkecil=Bil1;
   else
   	Terkecil=Bil2;
   for(int I=1 ; I<= Terkecil ; I++)
   {
		if(Bil1%I==0  && Bil2%I==0)
      {
      	if(Terbesar < I)
         	Terbesar=I;
      }
   }
   return Terbesar;
}

main()
{
 	int Bil1,Bil2,Terbesar;
   cout<<"Bilangan 1 = ";
   cin>>Bil1;
   cout<<"Bilangan 2 = ";
   cin>>Bil2;
   Terbesar=FPB(Bil1,Bil2);
   cout<<"FPB Terbesar = "<<Terbesar;
}
