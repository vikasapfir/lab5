#include <iostream>
#include <string>
#include <cmath>
#include "lab5.cpp"
using namespace std;
class Polynom {
	int points_number;
	Point* points;
public:
	Polynom(Point* points, int points_number);
	Point* getPoints() {
		return points;
	}
	int getPointsNumbers() {
		return points_number;
	}
	void print();
	~Polynom();
};