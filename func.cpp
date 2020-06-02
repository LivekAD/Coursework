#include <iostream>
#include <istream>
#include <fstream>
#include <locale>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <Windows.h>
#include "Header.h"

using namespace std;


	void sec::perev()
	{
		cout << "Vvedite parol: ";
		cin >> c;
		if (c == pass)
		{
			k = 1;
			cout << "Вход разрешон!" << endl;
			Sleep(1000);
			system("cls");
		}
		else cout << "Неверный пароль!" << endl;
		Sleep(1000);
		system("cls");
	}

	void zminapered::zmina(string vremya, string peredacha, int ra, int k) // для добавления програмы
	{
		if (k == 1)
		{
			ofstream ifile("programs.txt", std::ios_base::in | std::ios_base::app);

			if (!ifile)
			{
				cout << "Файл не відкритий.\n";
			}
			cout << "Введите время начала передачи: ";
			cin >> vremya;
			cout << endl << "Введите название передачи: ";
			cin >> peredacha;
			ifile << vremya << " " << peredacha << endl;
			ifile.close();
			system("cls");//обнов консоль

		}
	}


	bool removee::remove_line(const char* filename, size_t index) // для удаление строки из файла
	{
		std::vector<std::string> vec;
		std::ifstream file(filename);
		if (file.is_open())
		{
			std::string str;
			while (std::getline(file, str))
				vec.push_back(str);
			file.close();
			if (vec.size() < index)
				return false;
			vec.erase(vec.begin() + index);
			std::ofstream outfile(filename);
			if (outfile.is_open())
			{
				std::copy(vec.begin(), vec.end(),
					std::ostream_iterator<std::string>(outfile, "\n"));
				outfile.close();
				return true;
			}
			return false;
		}
		return false;
	}

	void staff::staf()
	{
		std::ifstream ifile("staff.txt"); // окрываем файл для чтения
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

	void clear::clea()
	{
		if (k == 1)
		{
			ofstream rewrite("programs.txt");
			rewrite.write("", 0);
			rewrite.close();
		}
	}


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
					/*string line = "";
					ifile >> line;
					cout << " " << line;*/
					string  Time, Name;
					ifile >> Time >> Name;
					cout << "|" << setw(5) << left << Time << "|" << setw(15) << Name << "|" << setw(3) << ID << "|" << endl;
					ID++;
				}
			}
		}
		ifile.close();
	}


	void reklama::rekla()
	{
		while (stop < 1)
		{
			while (sec < 3)
			{
				//задержка в 1000 миллисекунд (1 секунда)
				cout << "\t\t_-Реклама-_\t\t\t" << "до конца рекламы: " << 3 - sec << " секунд." << std::endl;
				sec++;
				Sleep(1000);
				system("cls");
			}
			stop++;
		}
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