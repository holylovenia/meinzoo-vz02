#ifndef LAND_HABITAT_H
#define LAND_HABITAT_H

/** @class LandHabitat
  * Kelas LandHabitat mendefinisikan atribut untuk habitat darat.
  */
class LandHabitat {
  public:
    /** @brief Constructor
      * Menciptakan habitat darat.
      */
    LandHabitat();

  protected:
    char type;
    bool is_accessible;
    
  private:
    const char def_type;
    const bool def_accessible;
};

#endif