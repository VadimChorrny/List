#include "Student.h"
#include <iostream>

void addTime()
{
	const int NUM_EMLPOYMENT = 7;
	double hours[NUM_EMLPOYMENT];
	std::cout << "Enter time one:" << std::endl;
	cin >> hours[0];
	std::cout << "Enter time one:" << std::endl;
	cin >> hours[1];
	std::cout << "Enter time one:" << std::endl;
	cin >> hours[2];
	std::cout << "Enter time one:" << std::endl;
	cin >> hours[3];	
	std::cout << "Enter time one:" << std::endl;
	cin >> hours[4];
	std::cout << "Enter time one:" << std::endl;
	cin >> hours[5];
	std::cout << "Enter time one:" << std::endl;
	cin >> hours[6];
	std::cout << "Good job!\n" << std::endl;

	for (int i = 0; i < 7; i++)
	{
		std::cout << "Your number:\t [" << hours[i] << "]" << std::endl;
	}

}

