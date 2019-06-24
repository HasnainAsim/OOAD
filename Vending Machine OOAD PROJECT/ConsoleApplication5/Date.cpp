#include "Date.h"



//Default constructor
Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}


//Overload constructor
Date::Date(int DayValue, int MonthValue, int YearValue)
{
	if (CheckDay(DayValue))
	{
		day = DayValue;
	}
	else
	{
		day = 1;
	}
	if (CheckMonth(MonthValue))
	{
		month = MonthValue;
	}
	else
	{
		month = 1;
	}
	if (CheckYear(YearValue))
	{
		year = YearValue;
	}
	else
	{
		year = 1;
	}
}

//Copy constructor
Date::Date(const Date*& RightDateObj)
{
	day = RightDateObj->day;
	month = RightDateObj->month;
	year = RightDateObj->year;
}

//Destructor
Date::~Date()
{

}

//Access Functions

int  Date::getDay()
{
	return day;
}
void Date::setDay(int DayValue)
{
	day = DayValue;
}

int  Date::getMonth()
{
	return month;
}
void Date::setMonth(int MonthValue)
{
	month = MonthValue;
}

int  Date::getYear()
{
	return year;
}
void Date::setYear(int YearValue)
{
	year = YearValue;
}
bool Date::CheckYear(int YearValue)
{
	if (YearValue < 1980 || YearValue > 2222)
	{
		cout << "Enter a year between 1980 and 2222\n";
		return false;
	}
	if (YearValue % 4 == 0 && (YearValue % 100 != 0 || YearValue % 400 == 0))
	{
		IsLeapYear = true;
	}
	return true;
}

bool Date::CheckMonth(int MonthValue)
{
	if (MonthValue < 1 || MonthValue > 12)
	{
		cout << "Enter a month between 1 and 12\n";
		return false;
	}
	if (MonthValue == 2 && IsLeapYear == true)
	{
		cout << "Attention: this is a leap year, remember that February (month 2) has 29 days.\n";
	}
	return true;
}
bool Date::CheckDay(int DayValue)
{
	if (DayValue < 1 || DayValue > 31)
	{
		cout << "Enter a day between 1 and 31\n";
		return false;
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (DayValue > 31)
		{
			cout << "The month you chose cannot have more than 31 days.\n";
			return false;
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (DayValue > 30)
		{
			cout << "The month you chose cannot have more than 30 days.\n";
			return false;
		}
	}
	if (month == 2 && IsLeapYear == false && DayValue > 28)
	{
		cout << "Since it is not a leap year, February cannot have more than 28 days.\n";
		return false;
	}
	if (month == 2 && IsLeapYear == true && DayValue > 29)
	{
		cout << "Since it is a leap year, February cannot have more than 29 days.\n";
		return false;
	}
	return true;
}

void Date::displayDate()
{
	cout << getYear() << " / " << getMonth() << " / " << getDay();
}

ostream& operator<<(ostream& os, const Date& dt)
{
	Date temp = dt;
	os << temp.year << "/" << temp.month << "/" << temp.day;
	return os;
}

istream& operator >> (istream& in, Date& dt)
{
	char r;
	in >> dt.year >> r;
	in >> dt.month >> r;
	in >> dt.day;
	return in;
}