#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H

class WaterHabitat {
  public:
    WaterHabitat();

  protected:
    char type;
    bool is_accessible;

  private:
    const char def_type;
    const bool def_accessible;
};

#endif