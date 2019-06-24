#pragma once
#include <iostream>
#include "SnackDatabase.h"
#include "Keypad.h"
using namespace std;

class Screen
{
private:
	SnackDatabase* DB = SnackDatabase::CreateInstance();
	Keypad* KP = Keypad::CreateInstance();
public:
	Screen() = default;
	void display_WelcomeMessage();
	void display_Product_Choice_Input_Message();
	void display_Snack_Names();
	void display_Juice_Names();
	void display_Snack_Price();
	void display_Juice_Price();
	void display_Cash_Amount_Input_Message();
	~Screen() = default;
};

