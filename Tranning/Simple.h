#pragma once
#include <string>

using namespace std;

class Simple
{
public:

	void print();
	
	void setName(const string& name);
	void setDay(const int& day);
	void setMonth(const int& month);
	void setYear(const int& year);

	const string& getName();
	const int& getDay();
	const int& getMonth();
	const int& getYear();

	Simple(const int& day, const int& month, const int& year,const string& name); // init variable,
	// that require their in main()

	~Simple();

private:
	int age;
	int day; int month; int year;
    string name;
};

