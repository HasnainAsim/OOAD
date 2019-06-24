#include "Time.h"

Time::Time()
{
	hour = 1;
	minute = 1;
	second = 1;
}

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

Time::~Time()
{
}

const int Time::get_hour() const
{
	return this->hour;
}

const int Time::get_minute() const
{
	return this->minute;
}

const int Time::get_second() const
{
	return this->second;
}

void Time::set_hour(int hour_)
{
	hour = hour_;
}

void Time::set_minute(int minute_)
{
	if (minute_ > 59) {
		hour = hour + 1;
		minute = minute_ - 60;
	}
	else {
		minute = minute_;
	}
}

void Time::set_second(int second_)
{
	if (second_ > 59) {
		minute = minute + 1;
		second = second_ - 60;
	}
	else {
		second = second_;
	}
}

void Time::display_time()const
{
	/*if (second > 59) {
		minute = minute + 1;
		second = second - 60;
	}
	if (minute > 59) {
		hour = hour + 1;
		minute = minute - 60;
	}*/

	cout << "  " << hour << ":" << minute << ":" << second;
}

ostream& operator<<(ostream& os, const Time& dt)
{
	Time temp = dt;
	os << temp.hour << ":" << temp.minute << ":" << temp.second;
	return os;
}

istream& operator >> (istream& in, Time& dt)
{
	char r;
	in >> dt.hour >> r;
	in >> dt.minute >> r;
	in >> dt.second;
	return in;
}