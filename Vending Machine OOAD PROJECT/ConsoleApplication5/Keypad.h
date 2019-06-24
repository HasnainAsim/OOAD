#pragma once
#include <iostream>
#include "SnackDatabase.h"
using namespace std;
class Keypad
{
private:
	static Keypad* instance;
	Keypad() = default;
	int ProductChoice;
	int SnackChoice, JuiceChoice;
	int CashAmount;

	~Keypad() = default;
public:
	static Keypad* CreateInstance();
	void inputProductChoice();
	int getProductChoice();
	void inputSnackChoice();
	int getSnackChoice();
	void inputJuiceChoice();
	int getJuiceChoice();
	void inputCashAmount();
	int getCashAmount();
};

