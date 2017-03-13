#ifndef LAND_HABITAT_H
#define LAND_HABITAT_H

class LandHabitat {
  public:
    LandHabitat();

  protected:
    char type;
    bool is_accessible;
    
  private:
    const char def_type;
    const bool def_accessible;
};

#endif