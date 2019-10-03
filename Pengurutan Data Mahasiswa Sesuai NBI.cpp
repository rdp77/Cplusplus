#include <iostream>
using namespace std;
typedef struct
{
	int nbi;
	char nama[25];
	struct
	{
		int tanggal;
		int bulan;
		int tahun;
	} tgllahir;
	char jk;
	char jurusan[25];
} Mahasiswa;
Mahasiswa mhs[30], d;
main()
{
	int input;
	cout << "Berapa Banyak Mahasiswa = ";
	cin >> input;
	cout << "------------" << endl;
	for (int b = 0; b < input; b++)
	{
		cout << "NBI = ";
		cin >> mhs[b].nbi;
		fflush(stdin);
		cout << "NAMA = ";
		cin.getline(mhs[b].nama, 25);
		cout << "Jenis Kelamin (L/P) = ";
		cin >> mhs[b].jk;
		fflush(stdin);
		cout << "Jurusan = ";
		cin.getline(mhs[b].jurusan, 25);
		cout << "=== Tanggal Lahir ===" << endl;
		cout << "Tanggal = ";
		cin >> mhs[b].tgllahir.tanggal;
		cout << "Bulan = ";
		cin >> mhs[b].tgllahir.bulan;
		cout << "Tahun = ";
		cin >> mhs[b].tgllahir.tahun;
		cout << endl
			 << endl;
	}
	system("pause");
	for (int b = 0; b < input; b++)
	{
		for (int c = 0; c < input - 1; c++)
		{
			if (mhs[c].nbi > mhs[c + 1].nbi)
			{
				d = mhs[c + 1];
				mhs[c + 1] = mhs[c];
				mhs[c] = d;
			}
		}
	}
	system("cls");
	cout << "\t DATA SETELAH DIURUTKAN \t" << endl;
	for (int b = 0; b < input; b++)
	{
		cout << "NBI = " << mhs[b].nbi << endl;
		cout << "Nama = " << mhs[b].nama << endl;
		cout << "Tanggal Lahir = " << mhs[b].tgllahir.tanggal << "-" << mhs[b].tgllahir.bulan << "-" << mhs[b].tgllahir.tahun << endl;
		cout << "Jurusan = " << mhs[b].jurusan << endl;
		cout << "Jenis Kelamin = " << mhs[b].jk << endl
			 << endl;
	}
}
