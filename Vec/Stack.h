#pragma once

#include <iostream>
#include <vector>
#include <string>

class Stack
{
public:

	Stack();
	bool isEmpty();
	bool isFull();
	void push(char value);
	void pop();		
	int output();
	


private:
	// ramki
	enum {EMPTY = -1, FULL = 20};
	
	// array for data
	char arr[FULL + 1];

	// pointer on top
	int top;
};