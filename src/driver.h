#ifndef DRIVER_H
#define DRIVER_H

#include "zoo.h"

class Driver {
  public:
    Driver();
    void DisplayZoo();
    void TourZoo();
    void ConsumedFood();

  private:
    Zoo zoo;
    Person visitor;
    void InitZoo();
    void Tour();
};

#endif