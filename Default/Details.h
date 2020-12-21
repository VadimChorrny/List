#pragma once
#include <iostream>
#include "Auto.h"

using namespace std;

class Details
{
public:

	enum class typeDoor { STANDART, LAMBO, UNDEFINED };
	enum class typeWindows { STANDART, SQUARE, UNDEFINED };
	enum class typeLamp { STANDART, UPLAMP, UNDEFINED };

	void input();
	void print() const;
	

	// set
	void setModelDoor(string& modelDoor);
	void setModelWindows(string& modelWindow);
	void setModelLamp(string& modelLamp);

	// get
	string getDoor();
	string getWindow();
	string getLamp();

	Details();

private:
	string modelDoor;
	string modelWindow;
	string modelLamp;
	bool state = false;

	int priceDoor = 15000;
	int priceWindow = 15000;
	int priceLamp = 15000;

	int priceServices;
};

