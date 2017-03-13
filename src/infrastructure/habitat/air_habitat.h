#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H

class AirHabitat {
  public:
    // ctor
    AirHabitat();

  protected:
    char type;
    bool is_accessible;
    
  private:
    const bool def_accessible;
    const char def_type;
};

#endif