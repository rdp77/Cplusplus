#include <iostream>
#include <string.h>
using namespace std;

main()
{
	char MTKuliah[50]="PEMROGRAMAN DASAR";

   cout<<MTKuliah<<endl;
   //MTKuliah="SISTEM BASIS DATA"; //Tidak Diperbolehkan
   strcpy(MTKuliah,"MANAJEMEN SISTEM INFORMASI");
   cout<<MTKuliah<<endl;
}
