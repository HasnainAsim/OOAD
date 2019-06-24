#include "SnackDispenser.h"

void SnackDispenser::dispenseProduct()
{
	if (KP->getProductChoice() == 0)
	{
		cout << "\nPlease Collect Your Snack!\n";
		cout << "'" << DB->getSnackName(KP->getSnackChoice()) << "' Costed You '" << DB->getSnackPrice(KP->getSnackChoice()) << "' Dollars\n\n";
	}
	else if (KP->getProductChoice() == 1)
	{
		cout << "\nPlease Collect Your Juice!\n";
		cout << "'" << DB->getJuiceName(KP->getJuiceChoice()) << "' Costed You '" << DB->getJuicePrice(KP->getJuiceChoice()) << "' Dollars\n\n";
	}
}
