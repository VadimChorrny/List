// Tranning.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include "Simple.h"

using namespace std;

/// <summary>
/// work with dynamic memory
/// </summary>
void tranningDynamic() {
	//int* px = new int;
	//int* pa = new int;
	//*pa = 15;
	//*px = 10;
	//cout << *px << endl;
	//cout << *pa << endl;
	//delete px;
	//cout << px << endl;

	int size = 0;
	cin >> size;
	int* px = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << px[i] << endl;
	}
	delete[] px;
}


/// <summary>
/// function for tranning cycle
/// </summary>
void tranningCycle()
{
	int sum = 0;
	for (int i = 1; i < 10; i++) // i understante how jobs 
	{
		sum = sum + i;
		cout << i << endl;
	}
	cout << "___________________" << endl;
	cout << sum << endl;
}

void tranningPointer()
{
	int a = 5, b = 25;
	int* px = &b;
	int* y = &a; // make link
	cout << a << endl;
	cout << &a << endl;
	cout << y << endl;
	cout << *y << endl; // denomination operator -> " * "
	cout << *px << endl;
}

class Test
{
public:
	int data;

	Test(int data) 
	{
		this->data = data;
		cout << "Called Ctor" << this  << endl;
	}

	~Test() 
	{
		cout << "Called Dtor" << this << endl;
	}

	
};

class MyClass
{
public:
	int second;

	MyClass(int sec) {
		second = sec;
	}
	void display() {
		cout << second << "seconds" << endl;

	}
};

MyClass operator + (MyClass c1, MyClass c2) {
	return MyClass(c1 + c2);
}

void Foo(Test value)
{
	cout << "foo worked" << endl;
}

int main()
{

	/*tranningCycle();
	tranningDynamic();
	Simple s(9, 12, 3, "Name");
	s.print();*/
	//Test a(1);
	//Test b(a); // copy ctor
	//Foo(a);
	MyClass c1(10);
	MyClass c2(20);
	MyClass c3 = c1 + c2;
	c3.display();

	return 0; // end programm
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
