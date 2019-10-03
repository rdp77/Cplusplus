#include <iostream>
#include <string.h>
using namespace std;

main()
{
   char Str[100]="TEKNIK INFORMATIKA";

   gotoxy(50,10);
   cout<<Str<<endl;
   for(int I=0 ; I<=strlen(Str)-1 ; I++)
   {
   	for(int K=50+I ; K>=10+I ; K--)
      {
      	gotoxy(K,10); cout<<Str[I];
         for(long int L=1 ; L<=100000000 ; L++)
         {
         }
         gotoxy(K,10); cout<<' ';
      }
      gotoxy(10+I,10); cout<<Str[I];
   }

}
