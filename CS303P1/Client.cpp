#include "Client.h"

Client::Client(int parameterName) { // if client does not exist

	clientName = parameterName; // client name assignment
	clientBalance = (rand() % 10000); // what the client deposits starting off
	clientHistory.push_back(clientBalance); // adding transaction to history

	clientDisplay(); // output client conditions

}

void Client::clientDisplay() { // outputs necessary conditions regarding a certain client

	cout << "Client :  " << clientName << endl;
	cout << "Current Balance : $" << clientBalance << endl;
	cout << "Current Transaction : " << clientHistory.size() << endl << endl;
	cout << "\t\tType\t\tAmount\t\tBalance" << endl << endl;

	historyBalance = clientBalance; // assigning current client balance to display previous balance results
	for (int i = clientHistory.size(); i > 0; i--) { // iterating through size of client's history

		cout << "Transaction " << i << '\t';

		if (clientHistory[i - 1] >= 0) { // if deposit

			cout << "Deposit\t\t$+";

		}

		else { // if withdrawl

			cout << "Withdrawal\t$";

		}

		cout << clientHistory[i - 1] << "\t\t$" << historyBalance << endl; // output transaction amount and client balance at that time
		historyBalance += (clientHistory[i - 1] * -1); // reversing the at-that-time client balance

	}

	cout << endl << endl;

}

void Client::clientUpdate() { // if client already exists

	clientTransaction = (rand() % ((clientBalance + 1) * 3) - clientBalance); // deposit or withdrawl capabilities based on client balance
	clientBalance += clientTransaction; // change client balance
	clientHistory.push_back(clientTransaction); // add transaction to history

	clientDisplay(); // output client conditions

}

int Client::getName() { // method returns client name

	return clientName;

}