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
	std::ifstream ifile(name); // �������� ���� ��� ������
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
	cout << "�������� �� ��� �� ������ ������� � ������ ����: " << endl;
	cout << "1.� ������� �� ����� ����� ���� ��������� ������� ���������� ��������." << endl;
	cout << "2.� ������ �� OLX ������ ������ ��������� � ��������� ������� ��������� ����� 29 000 ���." << endl;
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