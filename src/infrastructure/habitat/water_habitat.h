#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H

/** @class WaterHabitat
  * Kelas WaterHabitat mendefinisikan atribut untuk habitat air.
  */
class WaterHabitat {
  public:
    /** @brief Constructor
      * Menciptakan habitat air.
      */
    WaterHabitat();

  protected:
    char type;
    bool is_accessible;

  private:
    const char def_type;
    const bool def_accessible;
};

#endif