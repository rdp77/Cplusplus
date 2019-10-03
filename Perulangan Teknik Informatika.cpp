#include <iostream>
using namespace std;
int main()
{
	for(int I = 1 ; I <= 5 ; I++)// iterasi 1
   {
      cout<<"Untag Surabaya"<<endl;
	}
	for(int J = 1 ; J <= 3 ; J++)// iterasi2
	{
		cout<<"Fakultas Teknik"<<endl;
	}
   cout <<"===================================="<<endl;

 	for(int I = 1 ; I <= 5 ; I++)// iterasi 1 (iterasiluar)
	{
      cout<<"Program Studi"<<endl;
		for(int J = 1 ; J <= 3 ; J++)// iterasi2 (iterasidalam)
		{
			cout<<"Teknik Informatika"<<endl;
		}
	}
}

