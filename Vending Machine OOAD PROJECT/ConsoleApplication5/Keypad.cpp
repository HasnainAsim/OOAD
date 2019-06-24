#include "Keypad.h"

Keypad* Keypad::CreateInstance()
{
	if (instance == nullptr)
		instance = new Keypad;

	return instance;
}

void Keypad::inputProductChoice()
{
	cin >> ProductChoice;
	//system("pause");
	system("cls");
}

int Keypad::getProductChoice()
{
	return ProductChoice;
}

void Keypad::inputSnackChoice()
{
	//system("pause");
	cin >> SnackChoice;
	system("cls");
}

int Keypad::getSnackChoice()
{
	return SnackChoice;
}

void Keypad::inputJuiceChoice()
{
	cin >> JuiceChoice;
}

int Keypad::getJuiceChoice()
{
	return JuiceChoice;
}

void Keypad::inputCashAmount()
{
	cin >> CashAmount;
}

int Keypad::getCashAmount()
{
	return CashAmount;
}
