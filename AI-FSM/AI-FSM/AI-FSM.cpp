// AI-FSM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

class State 
{

public:		//access specifier to make the functions inside the state accessable
	void ReturnToAvalible()
	{
		// currentState = avalible;
		// something to set the Obejct CurrentState to be avalible
	};

	void checkQuoted()
	{
		// check if the customer has a saved quote, 
		// if they do,    change state to transacting
		// if they don't, change to quoting
	};

	void quote()
	{
		// does the customer accept the quote?
		// if they do,    change state to transacting
		// if they don't, change to avalible
	}




};




int main() 
{
	State Avalible;
	State Quoting;
	State Transacting;
	State CuttentState;

	enum ConsultantState
	{
		avalible    = 1,
		quoting     = 2,
		transacting = 3,
		
	};

	enum CustomerState
	{
		pending,	//1
		happy,		//2
		unhappy,	//3
	};
	
	struct Customer
	{
		int id;
		bool hasSavedQuote;

	};

	ConsultantState Me = avalible;
	CuttentState.checkQuoted();

	   	 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
