#include<iostream>
using namespace std;

main()
{
   int data[10];
   int i, j, tmp;
   cout<<"Program Mengurutkan Data"<<endl;
   for(i=0; i<10; i++)
   {
       cout<<"Masukkan bilangan ke "<<(i+1)<<" : ";
      cin>>data[i];
   }
   cout<<"Data sebelum diurutkan : "<<endl;
   for(i=0; i<10; i++)
   {
       cout<<data[i]<<" ";
   }
   cout<<endl;

   for(i=0; i<9; i++)
   {
       for(j=i+1; j<10; j++)
      {
          if(data[i]>data[j])
         {
             tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
         }
      }
   }
   cout<<"Data setelah diurutkan : "<<endl;
   for(i=0; i<10; i++)
   {
       cout<<data[i]<<" ";
   }
}
