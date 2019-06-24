#include "CashDispenser.h"

void CashDispenser::setReturnedAmount(int n)
{
	returnedAmount = n;
}

int CashDispenser::getReturnedAmount()
{
	return returnedAmount;
}

void CashDispenser::dispenseCash()
{
	int arr[10] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000, 5000 };
	int arrC[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int split = returnedAmount;
	int i = 9;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}
	i--;
	if (split >= arr[i])
	{
		while (split >= arr[i])
		{
			arrC[i]++;
			split -= arr[i];
		}
	}

	for (int i = 9; i >= 0; i--)
	{
		if (arrC[i] != 0)
		{
			if (i == 9)
			{
				cout << arrC[i] << " Note(s) Of 5000.\n";
			}
			else if (i == 8)
			{
				cout << arrC[i] << " Note(s) Of 1000.\n";
			}
			else if (i == 7)
			{
				cout << arrC[i] << " Note(s) Of 500.\n";
			}
			else if (i == 6)
			{
				cout << arrC[i] << " Note(s) Of 100.\n";
			}
			else if (i == 5)
			{
				cout << arrC[i] << " Note(s) Of 50.\n";
			}
			else if (i == 4)
			{
				cout << arrC[i] << " Note(s) Of 20.\n";
			}
			else if (i == 3)
			{
				cout << arrC[i] << " Note(s) Of 10.\n";
			}
			else if (i == 2)
			{
				cout << arrC[i] << " Coin(s) Of 5.\n";
			}
			else if (i == 1)
			{
				cout << arrC[i] << " Coin(s) Of 2.\n";
			}
			else if (i == 0)
			{
				cout << arrC[i] << " Coin(s) Of 1.\n";
			}
		}
	}
	cout << "========================================================================================\n\n";


}
