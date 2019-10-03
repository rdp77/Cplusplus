#include <iostream>
using namespace std;

struct Node
{
	int Bil;
   Node *Kiri;
   Node *Kanan;
};

Node *Root;

void MakeTree(int Bil)
{
   Node *NodeBaru, *P1, *P2;
   NodeBaru = new Node;
   NodeBaru->Bil=Bil;
   NodeBaru->Kiri = NULL;
   NodeBaru->Kanan=NULL;
   if(Root==NULL)
   {
   	//Btree Kosong
      Root=NodeBaru;
   }
   else
   {
   	//Mencari posisi node baru
      P1=Root;
      P2=Root;
      while(P1!=NULL)
      {
      	P2=P1;
         if(Bil<=P1->Bil)
         	P1=P1->Kiri;
         else
         	P1=P1->Kanan;
      }
      if(Bil<=P2->Bil)
      	P2->Kiri = NodeBaru; //Cabang Kiri
      else
      	P2->Kanan = NodeBaru; //Cabang Kanan
   }
}


void PreOrder(Node *PNode)
{
	if(PNode != NULL)
   {
		cout<<PNode->Bil<<"\t";
   	PreOrder(PNode->Kiri);
   	PreOrder(PNode->Kanan);
   }
}


void InOrder(Node *PNode)
{
	if(PNode != NULL)
   {
		InOrder(PNode->Kiri);
      cout<<PNode->Bil<<"\t";
   	InOrder(PNode->Kanan);
   }
}

void PostOrder(Node *PNode)
{
	if(PNode != NULL)
   {
		PostOrder(PNode->Kiri);
      PostOrder(PNode->Kanan);
      cout<<PNode->Bil<<"\t";
   }
}

main()
{
	Root=NULL;
   MakeTree(100);
   MakeTree(50);
   MakeTree(120);
   MakeTree(30);
   MakeTree(60);
   MakeTree(300);
   MakeTree(90);
   MakeTree(200);
   cout<<"Pre Order"<<endl;
   PreOrder(Root);
   cout<<endl<<"In Order"<<endl;
   InOrder(Root);
   cout<<endl<<"Post Order"<<endl;
   PostOrder(Root);
}
