#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Client {

	private:

		int clientName; // declaration of client name
		int clientBalance; // declaration of most recent client balance
		int historyBalance; // declaration of variable to handle reverse transaction balances
		int clientTransaction; // declaration of variable for when client already exists to make withdrawl or deposit choices
		vector<int> clientHistory; // creating a vector for transaction history

	public:

		Client(int parameterName); // default constructor to build client

		void clientDisplay(); // display client conditions method
		void clientUpdate(); // updating client conditions method
		int getName(); // method that returns client name

};