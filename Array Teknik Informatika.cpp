#include <iostream>
#include <string.h>
using namespace std;

main()
{
   char Str[100]="TEKNIK INFORMATIKA";

   gotoxy(20,1);
   cout<<Str<<endl;
   for(int I=0 ; I<=strlen(Str)-1 ; I++)
   {
   	for(int K=1 ; K<=15 ; K++)
      {
      	gotoxy(20+I,K); cout<<Str[I];
         for(long int L=1 ; L<=100000000 ; L++)
         {
         }
         gotoxy(20+I,K); cout<<' ';
      }
      gotoxy(20+I,15); cout<<Str[I];
   }
}
