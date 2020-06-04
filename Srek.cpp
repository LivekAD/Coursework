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
			//задержка в 1000 миллисекунд (1 секунда)
			cout << "\t\t_-Реклама-_\t\t\t" << "до конца рекламы: " << 3 - sec << " секунд." << std::endl;
			sec++;
			Sleep(1000);
			system("cls");
		}
		stop++;
	}
}