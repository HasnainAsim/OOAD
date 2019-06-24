#pragma once
#include "SnackDatabase.h"
#include "Keypad.h"
using namespace std;
class CashDepositer
{
private:
	SnackDatabase* DB = SnackDatabase::CreateInstance();
	Keypad* KP = Keypad::CreateInstance();
	int recievedCash;
public:
	void setRecievedCash(int n);
	int getRecievedCash();
};

