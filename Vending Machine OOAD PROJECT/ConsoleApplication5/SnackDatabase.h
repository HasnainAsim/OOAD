#pragma once
#include <fstream>
#include "Date.h"
#include "Time.h"
#include "StringCopy_C.h"
using namespace std;

class SnackDatabase
	: protected StringCopy_C,
	  protected Date,
	  protected Time
{
private:
	static SnackDatabase *instance;
	Date *D;
	Time *T;
	char **Snacks, **Juices;
	int* SnackPrice, * JuicePrice;
	int snackCount, JuiceCount;
	~SnackDatabase() = default;
public:
	SnackDatabase();
	static SnackDatabase* CreateInstance();
	void readSnacks();
	int getSnackCount();
	int getJuiceCount();
	char* getSnackName(int n);
	char* getJuiceName(int n);
	int getSnackPrice(int n);
	int getJuicePrice(int n);
	void readJuices();
	void print();
};

