#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Karyawan
{
   long NI;
   char Nama[30];
   char Alamat[40];
   long Telepon;
   int kode;
   char matkul[20];
   int sem;
   int sks;
};


main(){
   int a = 0, pilih;
   Karyawan data[100];
   char jawab, tempatNama[20], tempatAlamat[40];
   long tempatNI, tempatTelepon, cari;
menu:
   cout << "Menu Utama : " << endl;
   cout << "1. Masukan Data Karyawan" << endl;
   cout << "2. Tampilkan Data Karyawan" << endl;
   cout << "3. Cari Data Karyawan" << endl;
   cout << "4. Urutkan Berdasarkan Nomor Induk" << endl;
   cout << "5. Keluar" << endl;
   cout << "Pilihan ? ";
   cin >> pilih;
   if (pilih == 1)
   {
      do
      {
         cout << "Masukan Nama #" << (a + 1) << "  = ";
         cin >> data[a].Nama;
         cout << "Masukan NI #" << (a + 1) << "  = ";
         cin >> data[a].NI;
         cout << "Masukan Alamat #" << (a + 1) << " = ";
         cin >> data[a].Alamat;
         cout << "Masukan Telepon #" << (a + 1) << " = ";
         cin >> data[a].Telepon;
         cout << "Lagi ?(y/t) ";
         cin >> jawab;
         a++;
      } while (jawab == 'y');
      goto menu;
   }
   else if (pilih == 2)
   {
      for (int b = 0; b < a; b++)
      {
         cout << "Nama #" << (b + 1) << " = " << data[b].Nama << endl;
         cout << "NI #" << (b + 1) << "  = " << data[b].NI << endl;
         cout << "Alamat #" << (b + 1) << "  = " << data[b].Alamat << endl;
         cout << "Telepon #" << (b + 1) << " = " << data[b].Telepon << endl;
      }
      getch();
      goto menu;
   }
   else if (pilih == 3)
   {
      cout << "Masukan Nomor Induk yang akan di cari = ";
      cin >> cari;
      for (int c = 0; c < a; c++)
      {
         if (data[c].NI == cari)
         {
            cout << "Nama  #" << (c + 1) << " = " << data[c].Nama << endl;
            cout << "NI      #" << (c + 1) << " = " << data[c].NI << endl;
            cout << "Alamat            #" << (c + 1) << " = " << data[c].Alamat << endl;
            cout << "Telepon           #" << (c + 1) << " = " << data[c].Telepon << endl;
         }
         else
         {
            cout << "Data Yang Ditemukan Tidak Ditemukan.";
         }
      }
      getch();
      goto menu;
   }
   else if (pilih == 4)
   {
      for (int d = 0; d < a; d++)
      {
         for (int e = (d + 1); e < a; e++)
         {
            if (data[d].NI > data[e].NI)
            {
               tempatNI = data[d].NI;
               data[d].NI = data[e].NI;
               data[e].NI = tempatNI;

               strcpy(tempatNama, data[d].Nama);
               strcpy(data[d].Nama, data[e].Nama);
               strcpy(data[e].Nama, tempatNama);
               strcpy(tempatAlamat, data[d].Alamat);
               strcpy(data[d].Alamat, data[e].Alamat);
               strcpy(data[e].Alamat, tempatAlamat);
               tempatTelepon = data[d].Telepon;
               data[d].Telepon = data[e].Telepon;
               data[e].Telepon = tempatTelepon;
            }
         }
      }
      cout << "Sudah di sorting berdasarkan Nomor Induk.";
      goto menu;
   }
   else if (pilih == 5)
   {
      exit(0);
   }
   else
   {
      goto menu;
   }
}
