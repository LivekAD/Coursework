#include <iostream>
#include <istream>
#include <fstream>
#include <Windows.h>
#include "Hclear.h"

using namespace std;

void clear::clea()
{
	if (k == 1)
	{
		ofstream rewrite("programs.txt");
		rewrite.write("", 0);
		rewrite.close();
	}
}