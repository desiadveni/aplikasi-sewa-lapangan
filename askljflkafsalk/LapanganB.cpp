#include <iostream>
#include "struct.h"
#include "Menu.h"

using namespace std;

void LapanganB()
{
	pelanggan* dua;

	dua = new pelanggan();

	cout << " -= LAPANGAN B =-\n";
	cout << " Masukkan identitas penyewa\n\n";
	cout << " Nama      : ";
	cin >> dua->nama;
	cout << " Tanggal   : ";
	cin >> dua->tanggal;
	cout << " Telp      : ";
	cin >> dua->telp;
	cout << " Deskripsi : ";
	cin >> dua->deskripsi;
	cout << endl;
	cout << " data anda sudah tersimpan";

	char input;

	cout << " Apakah ingin balik ke menu awal ? (Y)\n";
	cout << " ";
	cin >> input;

	if (input == char(89), char(121))
	{
		system("cls");
		Menu();
	}
}