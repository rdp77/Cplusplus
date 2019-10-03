#include <iostream>
#include <string.h>
using namespace std;

main()
{
	char MTKuliah[50]="PEMROGRAMAN DASAR";

   cout<<MTKuliah<<endl;
   cout<<"Panjang String = "<<strlen(MTKuliah)<<endl<<endl;
   strcpy(MTKuliah,"MANAJEMEN SISTEM INFORMASI");
   cout<<MTKuliah<<endl;
   cout<<"Panjang String = "<<strlen(MTKuliah)<<endl;
}
