#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum Colour
{
	RED, GREEN, BLUE
};
class Point
{
private:
	int x, y;
public:
	Point(int x, int y);
	Point();
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void print();
};
