#include <iostream>
#include "Stack.h"
#include "Complexity_Timer.hpp"
#include "Complexity_Recorder.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	//Our Stack to be tested
	Stack<int> testStack;
	//Number of elements to test the Stack with
	int numberOfElements = 0;
	
	//Get the number of elements to be tested
	if(argc==1)
	{
		cout << "Error: Not enough arguments, please use: " << argv[0] << " <# of elements>\n";
		return 0;
	}
	else if(argc>2)
	{
		cout << "Error: Too many arguments, please use: " << argv[0] << " <# of elements>\n";
	}
	else
	{
		numberOfElements = atoi(argv[1]);
	}

	//Push *numberOfElements* elements unto the stack
	for(int i=1;i<=numberOfElements;i++)
	{
		testStack.push(i);
	}

	//Pop all elements off the stack
	while(!testStack.empty())
	{
		testStack.pop();
	}
	cout << testStack.size() << endl;


	return 0;
}