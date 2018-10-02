// Attempt2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class StateMachine
{
private:
	enum state
	{
		avalible = 1,
		quoting = 2,
		transacting = 3
	};
	state currentState;

public:
	void Avalible()
	{
		std::cout << "In Avalivble" << std::endl;;
		currentState = avalible;
		return;
	}

	// this is the default behaviour for "avalible"
	// it checks if the customer has a saved quote
	void QuoteCheck(bool a)
	{
		std::cout << "Checking for saved quote..." << std::endl;;
		if (a) { currentState = transacting; 
		std::cout << "Quote found, proceeding to transact." << std::endl;;
		}
		else { currentState = quoting; 
		std::cout << "No saved quote, proceeding to quote." << std::endl;;
		}
		
	};

	// this is the default behavior for "quoting"
	// it checks if the customer is happy with thier quote
	void Quoting(bool a)
	{
		std::cout << "Checking quote..." << std::endl;;
		if (a) { currentState = transacting; 
		std::cout << "Accepted, proceeding to transact" << std::endl;;
		}
		else { currentState = avalible; 
		std::cout << "Rejected, quote saved and proceeding to avalible" << std::endl;;
		Avalible();
		}
	};
	
	void Operate(bool a,bool b)
	{
		while (currentState != transacting) {

			switch (currentState)
			{
			case avalible:
				QuoteCheck(a);
				break;

			case quoting:
				Quoting(b);
				break;
			}
		}
		std::cout << "Policy has been set up." << std::endl;;
		std::cout << "proceeding to avalible." << std::endl;;
		Avalible();
		return;
	}
};

int main()
{

	struct Customer {

		bool hasQuote = 0;
		bool likesQuote = 1;
	};

	Customer customer1;

	StateMachine Consultant;
	Consultant.Avalible();
	Consultant.Operate(customer1.hasQuote, customer1.likesQuote);
	
}
