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
#include "Hsec.h"
#include "Hzminap.h"
#include "Hremovee.h"
#include "Hstaff.h"
#include "Hclear.h"
#include "Hvivid.h"
#include "Hreklama.h"
#include "Hpryamoiefir.h"


using namespace std;
 
int main()
{
start:
	string n1 = "n1.txt", peredacha, vremya, name, n2 = "n2.txt";
	int ra = 0, k = 0, ID = 0, c = 0;
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	int sw, sk, n, kn, cn, vn; char yn;
	setlocale(LC_ALL, "Rus");
	zminapered zmina; pryamoiefir pryam;
	vivid viv; reklama reklam; clear cl;
	staff sta; removee rem; sec ff;
	ff.k = 0;
	cout << "\tДобро пожаловать в телестудию LiveOne" << endl;
	cout << "1.Добавить/убрать передачу с программы" << endl;
	cout << "2.Запустить прямой эфир" << endl;
	cout << "3.Вывести список передач" << endl;
	cout << "4.Очистить список с передачами" << endl;
	cout << "5.Запустить рекламу" << endl;
	cout << "6.Показать список персоналу" << endl;
	cin >> sw;
	switch (sw)
	{
	case 1:
		system("cls");
		cout << "1.Добавить передачу" << endl <<"2.Убрать передачу" << endl;
		cin >> sk;
		switch (sk)
		{
		case 1:
			zmina.perev();
			Sleep(1500);
			system("cls");
			zmina.zmina( vremya,  peredacha,  ra,  k);
			cout << "Вернутся в главное меню(1): ";
			cin >> yn;
			switch (yn)
			{
			case 1:
				goto start;
			}
		case 2:
			zmina.perev();
			Sleep(1500);
			system("cls");
			viv.vividinform(ID);
			cout << "Выберите передачу которую хотите удалить: ";
			cin >> n;
			rem.remove_line("programs.txt", n);
			Sleep(500);
			system("cls");
			cout << "\tГотово" << endl;
			viv.vividinform(ID);
			cout << "Вернутся в главное меню(1): ";
			cin >> yn;
			switch (yn)
			{
			case 1:
				goto start;
			}
		}
	case 2:
		system("cls");
		pryam.vpryam( n1,  n2,  c,  name);
		pryam.pryamoief( n1,  n2,  name);
		Sleep(10000);
		system("cls");
		cout << "Вернутся в главное меню(1): ";
		cin >> cn;
		switch (cn)
		{
		case 1:
			goto start;
		}
	case 3:
		system("cls");
		viv.vividinform(ID);
		cout << "Вернутся в главное меню(1): ";
		cin >> vn;
		system("cls");
		switch (vn)
		{
		case 1:
			goto start;
		}
	case 4:
		system("cls");
		cl.perev();
		cl.clea();
		goto start;
	case 5:
		system("cls");
		reklam.rekla();
		goto start;
	case 6:
		system("cls");
		cl.perev();
		sta.staf();
		cout << "Вернутся в главное меню(1): ";
		cin >> kn;
		switch (kn)
		{
		case 1:
			goto start;
		}
	}
}

/*
1.Вивід списку передач (з годинами)+
2.Запустити рекламу(с таймером)+
3.Зміна списку передач(пароль)+-+
4.Очишення файлу передач(пароль)++
5.Вивід списку персоналу (Імя та ініціали, )+
6.Запустить прямий ефір(пароль)++
*/