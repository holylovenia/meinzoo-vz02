#ifndef ROAD_H
#define ROAD_H

#include <string>

/** @class Road
  * Kelas Road mendefinisikan atribut untuk road.
  */
class Road {
  public:
    /** @brief Constructor
      * Menciptakan cell berisi road yang dapat/tidak dapat diakses.
      * @param accessible Nilai true/false apakah dapat diakses.
      */
    Road(bool accessible);
    /** @brief Getter nilai is_entrance
      * @return Nilai is_entrance.
      */
    bool IsEntrance();
    /** @brief Getter nilai is_exit
      * @return Nilai is_exit.
      */
    bool IsExit();
    /** @brief Mengembalikan character untuk proses render.
      * @return Karakter untuk dirender.
      */
    char Render();

  protected:
    bool is_entrance;
    bool is_exit;

  private:
    std::string facility_type;
    bool is_accessible;
    const std::string def_facility_type;
    const bool def_road;
};

#endif