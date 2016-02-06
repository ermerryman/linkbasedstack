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

	//Number of algoritms to be tested
	const int number_of_algorithms = 2;

	//This vector will hold measurements for the different algorithms
	//Following DS316_Project_Standard_Code_Example.cpp for usage
	//stats[0] - Our push() function
	//stats[1] - Our pop() function
	vector<recorder<timer>> stats(number_of_algorithms);
	for(int i=0;i<number_of_algorithms;i++) stats[i].reset();

	//timer
	timer timer1;
	
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
	timer1.restart();
	for(int i=1;i<=numberOfElements;i++)
	{
		testStack.push(i);
	}
	timer1.stop();
	
	stats[0].record(timer1);
	stats[0].report(cout,numberOfElements);

	//Pop all elements off the stack
	timer1.restart();
	while(!testStack.empty())
	{
		testStack.pop();
	}
	timer1.stop();
	stats[1].record(timer1);
	stats[1].report(cout,numberOfElements);
	


	return 0;
}