#ifndef LAND_HABITAT_H
#define LAND_HABITAT_H

#include "habitat.h"

class LandHabitat: {
  public:
    // ctor
    LandHabitat();

  protected:
    char type;
    bool is_accessible;
    
  private:
    const char def_type;
};

#endif