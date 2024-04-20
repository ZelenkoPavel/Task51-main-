#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point2D {
public:
	double x;
	double y;

	Point2D() {
		x = 0;
		y = 0;
	}

	Point2D(double x_) {
		x = x_;
		y = 0;
	}

	Point2D(double x_, double y_) {
		x = x_;
		y = y_;
	}

	void change_of_coordinates(){
		cout << "Input new coordinates(x and y): ";
		cin >> x >> y;
	}
};