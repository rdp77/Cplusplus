#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

main()
{
	char Str1[50]="PEMROGRAMAN DASAR";
   char Str2[50]="sistem basis data";
   char Huruf;
   Huruf='a';
   cout<<strlwr(Str1)<<endl;
   cout<<strupr(Str2)<<endl;
   cout<<char(toupper(Huruf))<<endl;
}
