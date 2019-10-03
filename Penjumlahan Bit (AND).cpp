#include <iostream>
using namespace std;
main(){
	int des1=0, des2=0, i=0, AND, bin, k=128;
	char bit1[8], bit2[8];
	cout<<"BIT 1 = "; cin>>bit1;
	cout<<"hasil = ";
	while(bit1[i]!=0){
		if(bit1[i]=='0'||bit1[i]=='1'){
			des1=(des1*2)+bit1[i]-48;
		}i++;
	}
	cout<<des1;
	cout<<endl<<endl;;
	
	fflush(stdin);
	cout<<"BIT 2 = "; cin>>bit2;
	cout<<"hasil = ";
	i=0;
	while(bit2[i]!=0){
		if(bit2[i]=='0'||bit2[i]=='1'){
			des2=(des2*2)+bit2[i]-48;
		}i++;
	}
	cout<<des2<<endl<<endl;
	
	AND = des1 & des2;
	cout<<"Hasil AND desimal = "<<AND<<endl;
	
	cout<<endl;
  	cout<<"Hasil akhir = ";
 	for(int i=0;i<8;i++){
    	bin=AND/k;
    	cout<<bin;
      	AND=AND%k;
      	k=k/2;
  	}
}
