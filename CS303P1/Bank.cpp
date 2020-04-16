#include "Bank.h"

Bank::Bank(stack<int> &clientWaiting) { // constructor runs client-oriented bank aspect

	bankList.reserve(40); // specifying the size of the vector to the maximum size possible to improve insertion times
	while (!clientWaiting.empty()) { // while there are elements in the stack

		if (clientWaiting.size() % 6 == 0) { // after helping 5 people outputting the next client

			cout << "clientWaiting.size() : " << clientWaiting.size() << endl; // stack  size
			cout << "clientWaiting.top() :  Client " << clientWaiting.top() << endl << endl << endl; // next client

		}

		for (int i = 0; i < bankList.size(); i++) { // iterating through bank clients

			if ((bankList.size() != 0) && (clientWaiting.size() != 0)) { // filtering errors

				if (clientWaiting.top() == bankList[i]->getName()) { // if our client exists

					bankList[i]->clientUpdate(); // updating client
					clientWaiting.pop(); // client has been helped
					continue; // go back to the beginning

				}

			}

		}

		if (clientWaiting.size() != 0) { // must be new client

			bankList.push_back(new Client(clientWaiting.top())); // adding new client
			clientWaiting.pop(); // client has been helped

		}

	}

}