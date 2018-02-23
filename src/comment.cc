/*
 * comment.cc
 *
 *  Created on: Feb 21, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv) {
	int height;
	int width;
	float area;

	cout << "Enter the height and width of a triangle" << endl;
	cin >> height >> width;
	area = (float) (0.5 * height * width);

	cout << fixed << setprecision(1) << area << endl;

	return 0;
}
