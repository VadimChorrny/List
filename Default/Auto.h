#pragma once
#include <string>
#include <iostream>
#include "Details.h"

using namespace std;

class Auto
{
public:
	// friend
	friend class ReadyAuto;
	friend class Details;
	// set
	void setName(string& name);

	void setModel(string& model);							
	
	void setPrice(size_t& price);


	// get
	string& getName();
	string& getModel();
	size_t& getPrice();

	// default ctor
	Auto();

	

	// input
	void input();

	// print
	void print() const;



private:
	string name;
	size_t price;
	string model;
	Details* det;
};

class ReadyAuto
{
public:
	void showAuto(Auto& model)
	{
		
		cout << "Model:\t" << model.name << endl;
		cout << "Price:\t" << model.price << endl;
	}

private:
	Auto* ar;
};