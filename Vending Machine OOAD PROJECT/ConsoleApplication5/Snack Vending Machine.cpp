#include <iostream>
#include <Windows.h>
#include "VendingMachine.h"
using namespace std;

SnackDatabase* SnackDatabase::instance = nullptr;
Keypad* Keypad::instance = nullptr;


int main()
{
	VendingMachine Machine;

	// never ends :')
	while (true)
	{
		Machine.getScreen()->display_WelcomeMessage();
		system("pause");
		system("cls");
		Machine.getScreen()->display_Product_Choice_Input_Message();
		Machine.getKPad()->inputProductChoice();

		if (Machine.getKPad()->getProductChoice() == 0)
		{
			Machine.getScreen()->display_Snack_Names();
			Machine.getKPad()->inputSnackChoice();
			
			if (!(Machine.getKPad()->getSnackChoice() < 0 && Machine.getKPad()->getSnackChoice() > Machine.getSnackDB()->getSnackCount()))
			{
				Machine.getScreen()->display_Snack_Price();
				Machine.getScreen()->display_Cash_Amount_Input_Message();
				Machine.getKPad()->inputCashAmount();
				Machine.getCashDepositor()->setRecievedCash(Machine.getKPad()->getCashAmount());
				if (!(Machine.getCashDepositor()->getRecievedCash() == -1))
				{
					Machine.getSnackDispenser()->dispenseProduct();
					Machine.getCashDispenser()->setReturnedAmount(Machine.getKPad()->getCashAmount() - Machine.getSnackDB()->getSnackPrice(Machine.getKPad()->getSnackChoice()));
					Machine.getCashDispenser()->dispenseCash();
				}
				else break;
			}
			else break;
		}
		else if (Machine.getKPad()->getProductChoice() == 1)
		{
			Machine.getScreen()->display_Juice_Names();
			Machine.getKPad()->inputJuiceChoice();

			if (!(Machine.getKPad()->getJuiceChoice() < 0 || Machine.getKPad()->getJuiceChoice() > Machine.getSnackDB()->getJuiceCount()))
			{
				Machine.getScreen()->display_Juice_Price();
				Machine.getScreen()->display_Cash_Amount_Input_Message();
				Machine.getKPad()->inputCashAmount();
				Machine.getCashDepositor()->setRecievedCash(Machine.getKPad()->getCashAmount());
				if (!(Machine.getCashDepositor()->getRecievedCash() == -1))
				{
					Machine.getSnackDispenser()->dispenseProduct();
					Machine.getCashDispenser()->setReturnedAmount(Machine.getKPad()->getCashAmount() - Machine.getSnackDB()->getJuicePrice(Machine.getKPad()->getJuiceChoice()));
					Machine.getCashDispenser()->dispenseCash();
				}
				else break;
			}
			else break;
		}
		system("pause");
		system("cls");
	}
	
	//Machine.getScreen()->display_ExitMessage(); // display tata byebye message.

	return 0;
}