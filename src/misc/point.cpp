#include "point.h"

Point::Point() {
  x = 0;
  y = 0;
}

Point::Point(int _x, int _y) {
  x = _x;
  y = _y;
}

void Point::SetX(int _x) {
  x = _x;
}
void Point::SetY(int _y) {
  y = _y;
}

int Point::GetX() const {
  return x;
}
int Point::GetY() const {
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