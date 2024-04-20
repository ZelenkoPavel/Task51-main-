#include <iostream>

using namespace std;


string point_position(int x, int y) {
	string result = "this point is located in the ";

	if (x > 0 && y > 0) {
		result += "first coordinate quarter.";
	}
	else if (x < 0 && y > 0) {
		result += "second coordinate quarter.";
	}
	else if (x < 0 && y < 0) {
		result += "third coordinate quarter.";
	}
	else if (x > 0 && y < 0) {
		result += "fourth coordinate quarter.";
	}
	else {
		result += "zero coordinate.";
	}

	return result;
}