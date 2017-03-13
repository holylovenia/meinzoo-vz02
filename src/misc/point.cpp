// File: point.cpp
#include "point.h"

// ctor
Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(int _x, int _y) {
	x = _x;
	y = _y;
}

// Setter
void Point::setX(int _x) {
	x = _x;
}
void Point::setY(int _y) {
	y = _y;
}

// Getter
int Point::getX() const {
	return x;
}
int Point::getY() const {
	return y;
}

bool Point::operator<(const Point& p) {
	if (x < p.x)
		return true;
	else if (x == p.x && y < p.y)
		return true;
	else
		return false;
}