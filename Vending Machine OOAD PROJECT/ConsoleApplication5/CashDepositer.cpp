#include "CashDepositer.h"

void CashDepositer::setRecievedCash(int n)
{
	recievedCash = n;
	int totalPayableAmount = 0;
	if (KP->getProductChoice() == 0)
	{
		totalPayableAmount = DB->getSnackPrice(KP->getSnackChoice());
	}
	else if (KP->getProductChoice() == 1)
	{
		totalPayableAmount = DB->getJuicePrice(KP->getJuiceChoice());
	}
	if (recievedCash < totalPayableAmount)
		recievedCash = -1;
}

int CashDepositer::getRecievedCash()
{
	return recievedCash;
}
