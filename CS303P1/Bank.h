#pragma once

#include "Client.h"
#include <iostream>
#include <stack>
using namespace std;

class Bank {

	private:

		vector<Client*> bankList; // creating a vector of pointers to client object

	public:

		Bank(stack<int> &clientWaiting); // default constructor that performs client-oriented bank operations

};