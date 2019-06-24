#pragma once
#include "SnackDatabase.h"
#include "Keypad.h"
class SnackDispenser
{
	SnackDatabase* DB = SnackDatabase::CreateInstance();
	Keypad* KP = Keypad::CreateInstance();
public:
	void dispenseProduct();
};

