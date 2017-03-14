#ifndef PERSON_H
#define PERSON_H

#include "point.h"

class Person {
  public:
    Person();
    Point GetPosition() const;
    void SetPosition(const Point& p);
    void SetPosition(int x, int y);
    char Render();
    void Move(int movement);
    void ResetPosition();

  private:
    Point position;
};

#endif