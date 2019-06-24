#include "SnackDatabase.h"

SnackDatabase::SnackDatabase()
{
}

SnackDatabase* SnackDatabase::CreateInstance()
{
	if (instance == nullptr)
		instance = new SnackDatabase;
	return instance;
}

void SnackDatabase::readSnacks()
{
	ifstream fin("snacks.txt");
	char Arr[50];
	fin >> snackCount;
	Snacks = new char* [snackCount];
	SnackPrice = new int [snackCount];
	for (int i = 0; i < snackCount; i++)
	{
		fin.ignore();
		fin.getline(Arr, 50, '\n');
		StringCopy_C::strcpy_C(Snacks[i], Arr);
		fin >> SnackPrice[i];
	}
	fin.close();
}

void SnackDatabase::readJuices()
{
	ifstream fin("juices.txt");
	char Arr[50];
	fin >> JuiceCount;
	Juices = new char* [JuiceCount];
	JuicePrice = new int[JuiceCount];
	for (int i = 0; i < JuiceCount; i++)
	{
		fin.ignore();
		fin.getline(Arr, 50, '\n');
		StringCopy_C::strcpy_C(Juices[i], Arr);
		fin >> JuicePrice[i];
	}
	fin.close();
}

int SnackDatabase::getSnackCount()
{
	return snackCount;
}

int SnackDatabase::getJuiceCount()
{
	return JuiceCount;
}

char* SnackDatabase::getSnackName(int n)
{
	return Snacks[n];
}

char* SnackDatabase::getJuiceName(int n)
{
	return Juices[n];
}

int SnackDatabase::getSnackPrice(int n)
{
	return SnackPrice[n];
}

int SnackDatabase::getJuicePrice(int n)
{
	return JuicePrice[n];
}



void SnackDatabase::print()
{
	for (int i = 0; i < snackCount; i++)
	{
		cout << Snacks[i] << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < JuiceCount; i++)
	{
		cout << Juices[i] << endl;
	}
}
