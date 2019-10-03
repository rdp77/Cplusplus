#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
int X,i,k;
int L[10] = {20,15,22,14,12,10,24,19,18,16};
printf("Data yang akan dicari = ");scanf("%d",&X);
k = 0;
for(i=0;i<=9;i++)
                 {
                 if(L[i]==X)
                             {
                             printf("Data ditemukan di elemen %d \n",i);
                             k++;
                             }
                 }
if(k==0) printf("Data tidak ditemukan \n");

printf("Jumlah data yang ditemukan = %d",k);
cout<<"\n\n";

    system("PAUSE");
    return EXIT_SUCCESS;
}
