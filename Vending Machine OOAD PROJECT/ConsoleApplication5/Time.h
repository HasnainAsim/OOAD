#pragma once
#include<iostream>
using namespace std;
class Time
{
	unsigned int hour;
	unsigned int second;
	unsigned int minute;
public:
	//constructors
	Time();
	Time(int, int, int);
	//Getters
	const int get_hour()const;
	const int get_minute()const;
	const int get_second()const;
	//setter
	void set_hour(int);
	void set_minute(int);
	void set_second(int);
	//Display
	void display_time()const;
	//operatorOverloaded
	friend ostream& operator<<(ostream& os, const Time& dt);
	friend istream& operator>> (istream& is, Time& dt);
	//destructor
	~Time();
};

