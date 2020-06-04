#include <iostream>
#include <istream>
#include <fstream>
#include <locale>
#include <string>
#include <Windows.h>
#include "Hzminap.h"

using namespace std;

void zminapered::zmina(string vremya, string peredacha, int ra, int k) // дл€ добавлени€ програмы
{
	if (k == 1)
	{
		ofstream ifile("programs.txt", std::ios_base::in | std::ios_base::app);

		if (!ifile)
		{
			cout << "‘айл не в≥дкритий.\n";
		}
		cout << "¬ведите врем€ начала передачи: ";
		cin >> vremya;
		cout << endl << "¬ведите название передачи: ";
		cin >> peredacha;
		ifile << vremya << " " << peredacha << endl;
		ifile.close();
		system("cls");//обнов консоль

	}
}