#include "Stack.h"

Stack::Stack()
{
	// default 
	top = EMPTY;
}

bool Stack::isEmpty()
{
	return top == EMPTY;
}

bool Stack::isFull()
{
	return top == FULL;
}

void Stack::push(char value)
{
	if (!isFull()) {
		arr[++top] = value;
	}
}

void Stack::pop()
{
	if (!isEmpty()) {
		arr[--top];
	}
}

int Stack::output()
{
	return top + 1;
}
