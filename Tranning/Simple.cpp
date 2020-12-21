#include "Simple.h"
#include <iostream>

using namespace std;


void Simple::print()
{
	system("cls");
	cout << "__________________________" << endl;
	cout << "Name:\t" << name << endl;
	cout << "Day:\t" << day << endl;
	cout << "Month:\t" << month << endl;
	cout << "Year:\t" << &year << endl;
	cout << "__________________________" << endl;
	cout << endl;
}

void Simple::setName(const string& name)
{
	this->name = name;
}

void Simple::setDay(const int& day)
{
	this->day = day;
}

void Simple::setMonth(const int& month)
{
	this->month = month;

}

void Simple::setYear(const int& year)
{
	this->year = year;
}

const string& Simple::getName()
{
	return name;
}

const int& Simple::getDay()
{
	return day;
}

const int& Simple::getMonth()
{
	return month;
}

const int& Simple::getYear()
{
	return year;
}

Simple::Simple(const int& day, const int& month, const int& year, const string& name)
{
	//setName(name);
	setDay(day);
	setMonth(month);
	setYear(year);
}

Simple::~Simple()
{
}
