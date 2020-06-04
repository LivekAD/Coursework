#include <iostream>
#include <locale>
#include <string>
#include <Windows.h>
#include "Hsec.h"

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