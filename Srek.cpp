#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
#include <Windows.h>
#include "Hreklama.h"

using namespace std;

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