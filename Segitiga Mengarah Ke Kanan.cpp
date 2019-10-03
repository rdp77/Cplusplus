#include<iostream>
using namespace std;
int main()
{
int v,a,b,c;
cout<<"Masukkan baris :";
cin>>v;
for(a=1;a<=v;a++)
{
for(b=1;b<=a;b++)
{
cout<<"*";
}
cout<<endl;
}
for (a=v;a>=0;a--)
{
for(b=a;b>=0;b--)
{
cout<<"*";
}
cout<<endl;
}
}
