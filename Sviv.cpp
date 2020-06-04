#include <iostream>
#include <istream>
#include <fstream>
#include <locale>
#include <string>
#include <iomanip>
#include <Windows.h>
#include "Hvivid.h"

using namespace std;

void vivid::vividinform(int ID)
{
	std::ifstream ifile("programs.txt"); // окрываем файл для чтения
	if (ifile.is_open())
	{
		cout << " время" << "\t название" << "     №" << endl;
		while (!ifile.eof())
		{
			while (!ifile.eof())
			{
				string  Time, Name;
				ifile >> Time >> Name;
				cout << "|" << setw(5) << left << Time << "|" << setw(15) << Name << "|" << setw(3) << ID << "|" << endl;
				ID++;
			}
		}
	}
	ifile.close();
}