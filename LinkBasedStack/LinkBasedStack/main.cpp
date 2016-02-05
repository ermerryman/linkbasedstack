#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack<int> stackOne;
	stackOne.push(1);
	stackOne.push(2);
	stackOne.push(3);
	cout << "Stack size: " << stackOne.size() << endl;
	while(!stackOne.empty())
	{
		cout << stackOne.pop() << endl;
	}
	stackOne.push(3);
	stackOne.push(4);
	stackOne.push(5);
	cout << stackOne.top() << endl;
	while(!stackOne.empty())
	{
		cout << stackOne.pop() << endl;
	}
	stackOne.pop();


	return 0;
}