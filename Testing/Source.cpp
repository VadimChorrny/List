#include <iostream>

using namespace std;

template<typename T>
class Type
{
public:
	Type(T value);
	void showSizeValue(T value);
	void showTypeValue(T value);

private:
	T value;

};

int main()
{
	int a = 228;
	Type<int> t(a);
	
	t.showSizeValue(a);
	t.showTypeValue(a);
	
	return 0;
}

template<typename T>
Type<T>::Type(T value)
{
	this->value = value;
}

template<typename T>
void Type<T>::showSizeValue(T value)
{
	cout << "Size:\t" << sizeof(value) << endl;
}

template<typename T>
void Type<T>::showTypeValue(T value)
{
	cout << "Type id: \t" << sizeof(value) << endl;
}
