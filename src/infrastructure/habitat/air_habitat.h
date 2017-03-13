#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H

/** @class AirHabitat
  * Kelas AirHabitat mendefinisikan atribut untuk habitat udara.
  */
class AirHabitat {
  public:
    /** @brief Constructor
      * Menciptakan habitat udara.
      */
    AirHabitat();

  protected:
    char type;
    bool is_accessible;
    
  private:
    const char def_type;
    const bool def_accessible;
};

#endif