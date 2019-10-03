#include <iostream>
#include <string.h>
using namespace std;

main()
{
	char Str1[50],Str2[50];
   cout<<"Masukkan String 1 = ";
   gets(Str1);
   cout<<"Masukkan String 2 = ";
   cin.getline(Str2,sizeof(Str2));
   cout<<"String 1 = "<<Str1<<endl;
   cout<<"Panjang String 1 = "<<strlen(Str1)<<endl;
   cout<<"String 2 = "<<Str2<<endl;
   cout<<"Panjang String 2 = "<<strlen(Str2)<<endl;
}
