#include "Screen.h"

void Screen::display_WelcomeMessage()
{
	cout << "Welcome To Snack Vending System!\n\n";
	cout << "The Vending Machine Is Serving '" << DB->getJuiceCount() << "' Juices, And '" << DB->getSnackCount() << "' Sneks Which Juice Or Snek Would You Like To Buy.\n";

}

void Screen::display_Product_Choice_Input_Message()
{
	cout << "\n\nWhat Do You Want To Buy? ";
	cout << "\n0.) Snack.";
	cout << "\n1.) Juice.\n";
	cout << (char)254 << " Enter Your Product Choice: ";
}

void Screen::display_Snack_Names()
{
	cout << "\nSnack:-\n";
	for (int i = 0; i < DB->getSnackCount(); i++)
	{
		cout << i << ".) " << DB->getSnackName(i) << endl;
	}
	cout << (char)254 << " Enter Your Snack Choice: ";
}

void Screen::display_Juice_Names()
{
	cout << "\nJuices:-\n";
	for (int i = 0; i < DB->getJuiceCount(); i++)
	{
		cout << i << ".) " << DB->getJuiceName(i) << endl;
	}
	cout << (char)254 << " Enter Your Juice Choice: ";

}

void Screen::display_Snack_Price()
{
	cout << "\nThe Price Of Selected Snack Is '" << DB->getSnackPrice(KP->getSnackChoice()) << "' Rupees.\n";
}

void Screen::display_Juice_Price()
{
	cout << "\nThe Price Of Selected Juice Is '" << DB->getJuicePrice(KP->getJuiceChoice()) << "' Rupees.\n";
}

void Screen::display_Cash_Amount_Input_Message()
{
	cout << endl << (char)254 << " Input The Amount Of Cash in Cash Depositer: ";
}
