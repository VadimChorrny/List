#include <iostream>
#include <string>
#include "Auto.h"
#include "Details.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	Auto a;
	ReadyAuto r;
	Details d;
	a.input();
	d.input();
	cout << "~~~~~~~~~~~INFO CAR~~~~~~~~~~~~" << endl;
	a.print();

	d.print();
	

	
	return 0;
}