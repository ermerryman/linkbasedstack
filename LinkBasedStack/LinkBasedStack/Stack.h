#pragma once
#include "Node.h"

template <typename T>
class Stack
{
public:
	Stack();
	~Stack(void);
	unsigned int size();
	void push(T dataIn);
	T pop();
	bool empty();
	T top();


private:
	unsigned int count;
	Node<T>* topNode;
};

///Constructor for Stack class
template <typename T>
Stack<T>::Stack()
{
	count = 0;
	topNode = nullptr;
}

///Destructor for Stack class
template <typename T>
Stack<T>::~Stack()
{

}

///Returns the number of nodes in the Stack
template <typename T>
unsigned int Stack<T>::size()
{
	return count;
}

///Puts a new Node on top of the Stack
template <typename T>
void Stack<T>::push(T dataIn)
{
		Node<T> * newNode = new Node<T>;
		newNode->data = dataIn;
		newNode->next = topNode;
		topNode = newNode;
		count++;
}

///Removes the top node of the Stack and returns its value
template <typename T>
T Stack<T>::pop()
{
	if(size()==0) cout << "Stack Error: cannot pop() with Stack.size()==0\n";
	else
	{
		T data = topNode->data;
		Node<T>* tempNode = topNode;
		topNode = topNode->next;
		delete tempNode;
		count--;
		return data;
	}
}

///Returns true if the stack is empty, otherwise false
template <typename T>
bool Stack<T>::empty()
{
	if(count==0) return true;
	else return false;
}

///Returns the top element of the stack
template <typename T>
T Stack<T>::top()
{
	return topNode->data;
}


