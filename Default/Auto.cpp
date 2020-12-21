#include "Auto.h"

void Auto::setName(string& name)
{
	this->name = name;
}

void Auto::setModel(string& model)
{
		this->model = model;
}

void Auto::setPrice(size_t& price)
{
	this->price = price;
}

string& Auto::getName()
{
	return name;
}

string& Auto::getModel()
{
	return model;
}

size_t& Auto::getPrice()
{
	return price;
}

Auto::Auto()
{
	setName(name);
	setModel(model);
	setPrice(price);
}

void Auto::input()
{
	cout << "Enter name car:\t";
	cin >> name;
	cout << "Enter model for car:\t";
	cin >> model;
	
	cout << "Enter price car:\t";
	cin >> price;
	// add input
	//det->input();
}

void Auto::print() const
{
	cout << "Name car:\t" << name << endl;
	cout << "Model car:\t Model - " << model << endl;
	if (price > 75000) {
		cout << "Price car:\t" << price << "$" << endl;
	}
	else
	{
		cout << "error price! default price 75k$" << endl;
	}
	cout << endl;
}
