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
			cout << "���� ��������!" << endl;
			Sleep(1000);
			system("cls");
		}
		else cout << "�������� ������!" << endl;
		Sleep(1000);
		system("cls");
	}

	void zminapered::zmina(string vremya, string peredacha, int ra, int k) // ��� ���������� ��������
	{
		if (k == 1)
		{
			ofstream ifile("programs.txt", std::ios_base::in | std::ios_base::app);

			if (!ifile)
			{
				cout << "���� �� ��������.\n";
			}
			cout << "������� ����� ������ ��������: ";
			cin >> vremya;
			cout << endl << "������� �������� ��������: ";
			cin >> peredacha;
			ifile << vremya << " " << peredacha << endl;
			ifile.close();
			system("cls");//����� �������

		}
	}


	bool removee::remove_line(const char* filename, size_t index) // ��� �������� ������ �� �����
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
		std::ifstream ifile("programs.txt"); // �������� ���� ��� ������
		if (ifile.is_open())
		{
			cout << " �����" << "\t ��������" << "     �" << endl;
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
				//�������� � 1000 ����������� (1 �������)
				cout << "\t\t_-�������-_\t\t\t" << "�� ����� �������: " << 3 - sec << " ������." << std::endl;
				sec++;
				Sleep(1000);
				system("cls");
			}
			stop++;
		}
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