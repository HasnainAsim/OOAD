#pragma once
#include <iostream>
using namespace std;
class CashDispenser
{
private:
	int returnedAmount;
public:
	void setReturnedAmount(int n);
	int getReturnedAmount();
	void dispenseCash();
};

