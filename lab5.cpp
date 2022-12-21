#include <iostream>
#include <string>
#include <cmath>
#include "lab5.h"

using namespace std;

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}


Point::Point() {
	x = 0;
	y = 0;
}
void Point::print() {
	cout << "(" << x << "," << y << ")";
}
