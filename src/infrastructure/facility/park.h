#ifndef PARK_H
#define PARK_H

#include <string>

/** @class Park
  * Kelas Park mendefinisikan atribut untuk park.
  */
class Park {
  public:
    /** @brief Constructor
      * Menciptakan cell berisi park yang dapat/tidak dapat diakses,
      * dengan nama sesuai dengan _name.
      * @param accessible Nilai true/false apakah dapat diakses.
      * @param _name Nama park.
      */
    Park(bool accessible, std::string _name);
    /** @brief Copy Constructor
      * Menciptakan park dengan tingkat aksesibilitas dan nama yang smaa.
      * @param P Object Park yang sudah diciptakan.
      */
    Park(const Park& P);
    /** @brief Operator=
      * Mengubah atribut suatu park menjadi sama dengan park lain.
      * @param P Object Park yang sudah dciptakan.
      */
    Park& operator=(const Park& P);
    /** @brief Getter park name
      * @return Nama park.
      */
    std::string GetParkName();
    /** @brief Mengembalikan character untuk proses render.
      * @return Karakter untuk dirender.
      */
    char Render();

  private:
    std::string name;
    bool is_accessible;
    std::string facility_type;
    const std::string def_facility_type;
};

#endif