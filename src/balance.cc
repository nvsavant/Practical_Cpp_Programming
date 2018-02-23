/*
 * balance.cc
 *
 *  Created on: Feb 21, 2018
 *      Author: nvishwas
 */

#include <iostream>
using namespace std;

int balance_owed; // amount owed

int main() {
	cout << "Enter number of dollars owed: ";
	cin >> balance_owed;
	if (0 == balance_owed) {
		cout << "You owe nothing.\n";
		cout << "##" << endl;
	} else {
		cout << "You owe " << balance_owed << " dollars.\n";
		cout << "##" << endl;
	}
	return 0;
}
