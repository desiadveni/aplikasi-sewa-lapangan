#include <iostream>
#include "struct.h"
#include "LapanganA.h"
#include "LapanganB.h"
#include "LapanganC.h"

void Menu()
{
	int input;

	cout << " -= APLIKASI SEWA LAPANGAN =- \n\n";
	cout << " Silahkan pilih lapangan : \n";
	cout << " 1. Lapangan A \n";
	cout << " 2. Lapangan B \n";
	cout << " 3. Lapangan C \n";
	cout << " Pilih lapangan : ";
	cin >> input;

	system("cls");

	if (input == 1)
	{
		LapanganA();
	}
	else if (input == 2)
	{
		LapanganA();
	}
	else
	{
		LapanganC();
	}
}