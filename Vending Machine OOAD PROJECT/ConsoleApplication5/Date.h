#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
	bool IsLeapYear = false; //default boolean in C++ is true
	bool CheckDay(int);
	bool CheckMonth(int);
	bool CheckYear(int);

public:
	//constructor
	Date();
	Date(int, int, int);
	Date(const Date*&);
	//setter
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	//getter
	int getDay();
	int getMonth();
	int getYear();
	//Display
	void displayDate();
	//operatorOverloaded
	friend ostream& operator<<(ostream& os, const Date& dt);
	friend istream& operator>> (istream& is, Date& dt);
	//destructor
	~Date();

};


