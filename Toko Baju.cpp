#include <iostream>
using namespace std;
float output(float hrg, float c)
{
	cout << endl
		 << "--------------------------------------" << endl;
	cout << "Keterangan" << endl;
	cout << "Harga satuan\t: Rp." << hrg << endl;
	cout << "Total Harga\t: Rp." << hrg * c << endl;
	cout << "Pajak\t\t: Rp." << hrg * c / 100 * 5 << endl;
	cout << "Total Harga \t: Rp." << (hrg * c) - (hrg * c / 100 * 2) << endl;
	cout << endl
		 << "--------------------------------------" << endl;
	return (hrg, c);
}
float outputd(float hrg, float c)
{
	cout << endl
		 << "--------------------------------------" << endl;
	cout << "Keterangan" << endl;
	cout << "Harga satuan\t: Rp." << hrg << endl;
	cout << "Total Harga\t: Rp." << hrg * c << endl;
	cout << "Total Diskon\t: Rp." << hrg * c / 100 * 15 << endl;
	cout << "Pajak\t\t: Rp." << hrg * c / 100 * 5 << endl;
	cout << "Total Harga \t: Rp." << (hrg * c) - (hrg * c / 100 * 10) + (hrg * c / 100 * 2) << endl;
	cout << endl
		 << "--------------------------------------" << endl;
	return (hrg, c);
}
struct toko
{
	struct
	{
		float s = 30000;
		float m = 45000;
		float l = 55000;
		float xl = 65000;
	} harga;
	struct
	{
		int s = 15;
		int m = 10;
		int l = 7;
		int xl = 5;
	} stok;
} baju;
main()
{
	int a, b = 0, d = 0, e = 0, f = 0;
	char ulang;
	cout << "=================================================" << endl;
	cout << "|NO|    UKURAN\t|     HARGA\t|     STOK\t|" << endl;
	cout << "=================================================" << endl;
	cout << "|1.|\tS\t|"
		 << "\t30.000\t|\t" << baju.stok.s << "\t|" << endl;
	cout << "|2.|\tM\t|"
		 << "\t45.000\t|\t" << baju.stok.m << "\t|" << endl;
	cout << "|3.|\tL\t|"
		 << "\t55.000\t|\t" << baju.stok.l << "\t|" << endl;
	cout << "|4.|\tXL\t|"
		 << "\t65.000\t|\t" << baju.stok.xl << "\t|" << endl;
ulangi:
	cout << "=================================================" << endl;
	cout << "\tPILIH BAJU YANG INGIN ANDA BELI\t" << endl;
	cout << "=================================================" << endl;
	cout << "Masukkan Nomor Nya = ";
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Berapa banyak baju ingin anda beli? ";
		cin >> b;
		if (b < 5)
		{
			output(baju.harga.s, b);
		}
		else
		{
			outputd(baju.harga.s, b);
		}
		break;
	case 2:
		cout << "Berapa banyak baju ingin anda beli? ";
		cin >> d;
		if (d < 5)
		{
			output(baju.harga.m, d);
		}
		else
		{
			outputd(baju.harga.m, d);
		}
		break;
	case 3:
		cout << "berapa banyak baju ingin anda beli? ";
		cin >> e;
		if (e < 5)
		{
			output(baju.harga.l, e);
		}
		else
		{
			outputd(baju.harga.l, e);
		}
		break;
	case 4:
		cout << "Berapa banyak baju ingin anda beli? ";
		cin >> f;
		if (f < 5)
		{
			output(baju.harga.xl, f);
		}
		else
		{
			outputd(baju.harga.xl, f);
		}
		break;
	default:
		cout << endl
			 << "Inputan yang anda masukkan tidak ada!!" << endl;
		goto ulangi;
	}
	system("pause");
	system("cls");
	cout << "=================================================" << endl;
	cout << "\t\t UPDATE STOK BAJU \t\t" << endl;
	cout << "=================================================" << endl;
	cout << "|    UKURAN\t|     HARGA\t|     STOK\t|" << endl;
	cout << "=================================================" << endl;
	cout << "|\tS\t|\t30.000\t|\t" << baju.stok.s - b << "\t|" << endl;
	cout << "|\tM\t|\t45.000\t|\t" << baju.stok.m - d << "\t|" << endl;
	cout << "|\tL\t|\t55.000\t|\t" << baju.stok.l - e << "\t|" << endl;
	cout << "|\tXL\t|\t65.000\t|\t" << baju.stok.xl << "\t|" << endl;
	cout << "=================================================" << endl;
	cout << "Apakah anda ingin membeli lagi?(Y/N) = ";
	cin >> ulang;
	if (ulang == 'y' || ulang == 'Y')
	{
		goto ulangi;
	}
}