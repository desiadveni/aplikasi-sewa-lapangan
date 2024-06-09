#include <iostream>
#include "struct.h"
#include "Menu.h"

using namespace std;

void LapanganC()
{
	pelanggan* tiga;

	tiga = new pelanggan();

	cout << " -= LAPANGAN C =-\n";
	cout << " Masukkan identitas penyewa\n\n";
	cout << " Nama      : ";
	cin >> tiga->nama;
	cout << " Tanggal   : ";
	cin >> tiga->tanggal;
	cout << " Telp      : ";
	cin >> tiga->telp;
	cout << " Deskripsi : ";
	cin >> tiga->deskripsi;
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