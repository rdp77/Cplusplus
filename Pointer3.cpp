#include <iostream>
using namespace std;

main()
{
	int *P1;
	P1=new (int);

	*P1=10;
	cout<<P1<<endl;
	cout<<*P1<<endl;
	P1++;
   *P1=20;
	(*P1)++;
	cout<<P1<<endl;
	cout<<*P1<<endl;
}
