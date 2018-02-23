/*
 * square.cc
 *
 *  Created on: Feb 21, 2018
 *      Author: nvishwas
 */

#include <iostream>
using namespace std;

int squareOfNumber(int num) {
	return num * num;
}

int main(int argc, char **argv) {

	cout << "Enter the number: ";
	int num;
	cin >> num;

	cout << "Square of " << num << " is " << squareOfNumber(num) << endl;

	return 0;
}
