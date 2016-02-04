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

template <typename T>
Stack<T>::Stack()
{
	count = 0;
	topNode = nullptr;
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
	Node<T> * newNode = new Node<T>;
	newNode->data = dataIn;
	newNode->next = topNode;
	topNode = newNode;
	count++;
}

template <typename T>
T Stack<T>::pop()
{
	T data = topNode->data;
	Node<T>* tempNode = topNode;
	topNode = topNode->next;
	delete tempNode;
	count--;
	return data;
}

template <typename T>
bool Stack<T>::empty()
{
	if(count==0) return true;
	else return false;
}

template <typename T>
T Stack<T>::top()
{
	return topNode->data;
}


