#include "Bank.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <stack>
using namespace std;

class Main {

	private:

		vector<int> clientList; // declaring vector to hold client names
		stack<int> bankWaiting; // declaring stack to hold existing client names

	public:

		Main(); // default constructor performs bank and clients tasks

};

Main::Main() { // constructor to execute statements

	clientList.reserve(40); // specifying the size of the vector to the maximum size possible to improve insertion times
	for (int i = 0; i < ((rand() % 40) + 10); i++) { // iterating possibly up to 49 times at least 10 times

		clientList.push_back(rand() % 999); // creating client name

	}

	for (int i = 0; i < ((rand() % 1200) + 800); i++) { // iterating possibly up to 1999 times at least 800 times

		bankWaiting.push(clientList[rand() % clientList.size()]); // adding existing client to waiting line

	}

	Bank bankInstance(bankWaiting); // bank instance passing waiting line by referrence

}

int main() {
	
	srand(time(0)); // permitting seemingly random numbers

	Main mainInstance; // main instance to run entire program

	return 0; // program ran with zero errors

}