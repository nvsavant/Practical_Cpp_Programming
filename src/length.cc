/*
 * length.cc
 *
 *  Created on: Feb 21, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

int length(char string[]) {
	int returnLength = 0;
	while (string[returnLength] != '\0') {
		returnLength++;
	}
	return returnLength;
}

int main(int argc, char **argv) {

	char array[] = "Nikheel";

	cout << "Length of string is " << length(array) << endl;

	return 0;
}
