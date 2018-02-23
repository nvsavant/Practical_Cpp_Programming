/*
 * len.cc
 *
 *  Created on: Feb 21, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	string str;
	getline(cin, str);

	cout << "Length of the entered line is " << str.length() << endl;

	return 0;
}
