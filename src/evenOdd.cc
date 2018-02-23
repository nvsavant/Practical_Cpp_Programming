/*
 * evenOdd.cc
 *
 *  Created on: Feb 21, 2018
 *      Author: nvishwas
 */

#include <iostream>
using namespace std;

bool isEven(int num) {
	return ((num & 1) == 0);
}

bool isOdd(int num) {
	return ((num & 1) == 1);
}

int main(int argc, char **argv) {

	cout << "Enter the number: ";
	int num;
	cin >> num;
	if (isEven(num)) {
		cout << "Entered number is even" << endl;
	} else {
		cout << "Entered number is odd" << endl;
	}

	return 0;
}
