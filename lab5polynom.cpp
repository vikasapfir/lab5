#include <iostream>
#include <string>
#include <cmath>
#include "lab5polynom.h"
using namespace std;
Polynom::Polynom(Point* points, int points_number) {
		this->points_number = points_number;
		this->points = points;
	}
void Polynom::print() {
		cout << "points number: " << points_number << ", points: ";
		for (int i = 0; i < points_number; i++) {
			points[i].print();
			cout << " ";
		}
		cout << endl;
	}
Polynom::~Polynom() {
		points_number = 0;
		points = nullptr;
	}