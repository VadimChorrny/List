#include <iostream>

using namespace std;

template<typename T>
class List // simple class
{
public:
	List(); // ctor
	~List(); // dtor
	void push_back(T data); // func for push

	int GetSize()  // get var size
	{
		return Size;
	}

private:

	//create node
	// dont naryshae incapsulation
	template<typename T>
	class Node
	{
	public:
		Node* pNext; // pointer on pNext
		T data; // no type
		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;
	Node<T>* head; // create head
};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{

}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) // isEmpty()
	{
		head = new Node<T>(data); // new dynamic arr
	}
	else
	{
		Node<T>* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
			current->pNext = new Node<T>(data);
		}
	}

	Size++;
}

int main()
{
	List<int> lst;
	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(12);

	cout << lst.GetSize() << "\t ta Element bor " << endl;

	return 0;
}