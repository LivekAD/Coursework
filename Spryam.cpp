#include <iostream>
#include <istream>
#include <fstream>
#include <locale>
#include <string>
#include <Windows.h>
#include "Hpryamoiefir.h"

using namespace std;

void pryamoiefir::pryamoief(string n1, string n2, string name)
{
	std::ifstream ifile(name); // окрываем файл для чтения
	if (ifile.is_open())
	{
		while (!ifile.eof())
		{
			string agsag;
			ifile >> agsag;
			cout << agsag << " ";
			Sleep(250);
		}
	}
	ifile.close();
	n1 = "";
	n2 = "";
}

void pryamoiefir::vpryam(string n1, string n2, int c, string name)
{
	cout << "Выберете то что вы хотите пустить в прямой эфир: " << endl;
	cout << "1.В Украине до конца этого года планируют открыть посольство Ирландии." << endl;
	cout << "2.В апреле на OLX начали искать продавцов с рекордной средней зарплатой более 29 000 грн." << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		name = n1;
	case 2:
		name = n2;
	}
	system("cls");
}