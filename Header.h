#pragma once
using namespace std;
class sec
{
private:
	int pass = 8654;
public:
	int c = 0, k = 0;
	void perev();
};

class zminapered : public sec
{
public:
	void zmina(string vremya, string peredacha, int ra, int k); // для добавления програмы
};

class removee
{
public:
	bool remove_line(const char* filename, size_t index); // для удаление строки из файла
};

class staff : public sec
{
public:
	void staf();
};

class clear : public sec
{
public:
	void clea();
};

class vivid : public sec
{
public:
	void vividinform(int ID);
};

class reklama : public sec
{
private:
	int sec = 0;
	int stop = 0;
public:
	void rekla();
};

class pryamoiefir : public sec
{
private:

public:
	void vpryam(string n1, string n2, int c, string name);
	void pryamoief(string n1, string n2, string name);
};