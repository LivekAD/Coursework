#include <iostream>
#include <istream>
#include <fstream>
#include <locale>
#include <string>
#include <Windows.h>
#include "Hstaff.h"

using namespace std;

void staff::staf()
{
	std::ifstream ifile("staff.txt"); // �������� ���� ��� ������
	if (ifile.is_open())
	{
		while (!ifile.eof())
		{
			while (!ifile.eof())
			{
				/*string line = "";
				ifile >> line;
				cout << " " << line;*/
				string Name, Time, last;
				ifile >> Time >> Name >> last;
				cout << Time << " " << Name << " " << last << endl;
			}
		}
	}
	ifile.close();
}