#include <iostream>
#include "Point2D.h"

using namespace std;

string point_position(int x, int y);

int main() {
	Point2D point1;
	Point2D point2(1);
	Point2D point3(1, -2);

	cout << point_position(point1.x, point1.y) << endl;
	cout << point_position(point2.x, point2.y) << endl;
	cout << point_position(point3.x, point3.y) << endl;

	return 0;
}