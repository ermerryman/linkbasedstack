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

private:
	unsigned int count;
	Node<T>* top;
};

template <typename T>
Stack<T>::Stack()
{
	count = 0;
	top = nullptr;
}

template <typename T>
Stack<T>::~Stack()
{

}

template <typename T>
unsigned int Stack<T>::size()
{
	return count;
}

template <typename T>
void Stack<T>::push(T dataIn)
{
}

