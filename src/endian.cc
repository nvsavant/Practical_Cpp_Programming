/*
 * endian.cc
 *
 *  Created on: Feb 21, 2018
 *      Author: nvishwas
 */

#include<iostream>

using namespace std;

int main() {
	int i = 1;
	char *c = (char*) &i;

//	cout<<*c<<endl;

	if (*c) {
		cout << "Little Endian" << endl;
	} else {
		cout << "Big Endian" << endl;
	}

	return 0;
}
