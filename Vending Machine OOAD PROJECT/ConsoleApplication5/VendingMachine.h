#pragma once
#include "SnackDatabase.h"
#include "Keypad.h"
#include "Screen.h"
#include "CashDepositer.h"
#include "CashDispenser.h"
#include "SnackDispenser.h"

class VendingMachine
{
private:
	SnackDatabase* SnackDB = SnackDatabase::CreateInstance();
	Keypad* KPad = Keypad::CreateInstance();
	CashDepositer *CDepositer;
	CashDispenser *CDispenser;
	SnackDispenser* SDispenser;
	Screen *screen;
public:
	VendingMachine();
	SnackDatabase* getSnackDB();
	Screen* getScreen();
	Keypad* getKPad();
	CashDepositer* getCashDepositor();
	CashDispenser* getCashDispenser();
	SnackDispenser* getSnackDispenser();
	~VendingMachine();
};

