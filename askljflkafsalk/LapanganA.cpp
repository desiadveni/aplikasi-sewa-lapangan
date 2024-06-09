#include <iostream>
#include "struct.h"
#include "Menu.h"

using namespace std;

void LapanganA()
{
	pelanggan* satu;

	satu = new pelanggan();

	cout << " -= LAPANGAN A =-\n";
	cout << " Masukkan identitas penyewa\n\n";
	cout << " Nama      : ";
	cin >> satu->nama;
	cout << " Tanggal   : ";
	cin >> satu->tanggal;
	cout << " Telp      : ";
	cin >> satu->telp;
	cout << " Deskripsi : ";
	cin >> satu->deskripsi;
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