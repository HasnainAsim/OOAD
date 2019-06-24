#include "VendingMachine.h"

VendingMachine::VendingMachine()
{
	CDepositer = new CashDepositer();
	CDispenser = new CashDispenser();
	screen = new Screen();
	SDispenser = new SnackDispenser();
	SnackDB->readJuices();
	SnackDB->readSnacks();
}

SnackDatabase* VendingMachine::getSnackDB()
{
	return SnackDB;
}

Screen* VendingMachine::getScreen()
{
	return screen;
}

Keypad* VendingMachine::getKPad()
{
	return KPad;
}

CashDepositer* VendingMachine::getCashDepositor()
{
	return CDepositer;
}

CashDispenser* VendingMachine::getCashDispenser()
{
	return CDispenser;
}

SnackDispenser* VendingMachine::getSnackDispenser()
{
	return SDispenser;
}

VendingMachine::~VendingMachine()
{
	if (CDepositer)
	{
		delete CDepositer;
		CDepositer = nullptr;
	}
	if (CDispenser)
	{
		delete CDispenser;
		CDispenser = nullptr;
	}
	if (screen)
	{
		delete screen;
		screen = nullptr;
	}
	if (SDispenser)
	{
		delete SDispenser;
		SDispenser = nullptr;
	}
}
