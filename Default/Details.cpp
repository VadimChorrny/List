#include "Details.h"

void Details::input()
{
	int action;
	cout << "1-\t Buy door" << endl;
	cout << "2-\t Buy window" << endl;
	cout << "3-\t Buy lamp" << endl;
	cout << "4-\t EXIT" << endl;
	cout << "Enter action -";
	cin >> action;


	if (action == 1) 
	{
		cout << "Enter type doors:\t" << modelDoor << endl;
		cin >> modelDoor;
	}
	else if(action == 2)
	{ 
		cout << "Enter type windows:\t" << modelWindow << endl;
		cin >> modelWindow;
	}
	else if (action == 3)
	{
		cout << "Enter type lamp:\t" << modelLamp << endl;
		cin >> modelLamp;
	}
	else {
		cout << "bye" << endl;
	}
}

void Details::print() const
{
	cout << "~~~~~~~~~~~~WORKED FRIEND CLASS READY AUTO ~~~~~~~~~~~~~~" << endl;
	cout << "~~~~YOU BOUGHT~~~~\n";
	cout << "Model doors:\t" << modelDoor << endl;
	cout << "Model windows:\t" << modelWindow << endl;
	cout << "Model lamps:\t" << modelLamp << endl;


	cout << "_______PRICE_______" << endl;
	cout << "Total Pice:\t" << priceServices << endl;
}

void Details::setModelDoor(string& modelDoor)
{	
	if (modelDoor == " ") {
		this->modelDoor = modelDoor;
		++priceServices;
	}
}

void Details::setModelWindows(string& modelWindow)
{
	if (modelWindow == " ") {
		this->modelWindow = modelWindow;
		++priceServices;
	}
}

void Details::setModelLamp(string& modelLamp)
{
	if (modelLamp == " ") {
		this->modelLamp = modelLamp;
		++priceServices;
	}
}

string Details::getDoor()
{
	return modelDoor;
}

string Details::getWindow()
{
	return modelWindow;
}

string Details::getLamp()
{
	return modelLamp;
}

Details::Details()
{
	setModelDoor(modelDoor);
	setModelWindows(modelWindow);
	setModelLamp(modelLamp);
}
