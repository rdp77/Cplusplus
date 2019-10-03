#include <iostream>
using namespace std;

struct Mhs
{
	char NBI[10];
   char Nama[50];
   int Nilai;
   Mhs *Kanan;
};

Mhs *PAwal, *PAkhir ;  // Global

int PilihMenu()
{
	int Pilih=0;
   //while(Pilih <1 || Pilih > 4)
   while(!(Pilih>=1 && Pilih <=4))
   {
		cout<<"MENU UTAMA"<<endl<<endl;
   	cout<<"1. ENTRY DATA"<<endl;
   	cout<<"2. DISPLAY DATA"<<endl;
   	cout<<"3. SELESAI"<<endl<<endl;
   	cout<<"PILIHAN = ";
   	cin>>Pilih;
   }
   return Pilih;
}

void EntryData()
{
   Mhs *NodeBaru;
   NodeBaru = new Mhs;

   cout<<"NBI   = ";
   gets(NodeBaru->NBI);
   cout<<"NAMA  = ";
   gets(NodeBaru->Nama);
   cout<<"NILAI = ";
   cin>>NodeBaru->Nilai;
   NodeBaru->Kanan=NULL;
   if(PAwal==NULL)
   {
   	//Link List Kosong
      PAwal=NodeBaru;
      PAkhir=NodeBaru;
   }
   else
   {
   	//Link List Tidak Kosong
      PAkhir->Kanan=NodeBaru;
      PAkhir = NodeBaru;
   }
}

void DisplayData()
{
   Mhs *PNode;
   PNode=PAwal;
   while(PNode !=NULL)
   {
   	cout<<PNode->NBI<<"\t"<<PNode->Nama<<"\t"
      <<PNode->Nilai<<endl;
   	PNode = PNode->Kanan;
   }
}

main()
{
	int Pilih=0,Indek=0;
   PAwal=NULL;
   PAkhir=NULL;
   while(!(Pilih>=1 && Pilih<=4))
   {
   	Pilih=PilihMenu();
   	switch(Pilih)
   	{
   		case 1:
				EntryData();
            Pilih=0;
         	break;
      	case 2:
				DisplayData();
            Pilih=0;
         	break;
         case 3:
         	break;
      }
  }
}
