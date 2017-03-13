#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>

/** @class Restaurant
  * Kelas Restaurant mendefinisikan atribut untuk restaurant.
  */
class Restaurant {
  public:
    /** @brief Constructor
      * Menciptakan cell berisi restaurant yang dapat/tidak dapat diakses,
      * dengan nama sesuai dengan _name.
      * @param accessible Nilai true/false apakah dapat diakses.
      * @param _name Nama restaurant.
      */
    Restaurant(bool accessible, std::string _name);
    /** @brief Copy Constructor
      * Menciptakan restaurant dengan tingkat aksesibilitas dan nama ang sama.
      * @param R Object Restaurant yang sudah diciptakan
      */
    Restaurant(const Restaurant& R);
    /** @brief Operator=
      * Mengubah atribut suatu restaurant menjadi sama dengan restaurant lain.
      * @param R Object Restaurant yang sudah diciptakan.
      */
    Restaurant& operator=(const Restaurant& R);
    /** @brief Getter restaurant name
      * @return Nama restaurant.
      */
    std::string GetRestaurantName();
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