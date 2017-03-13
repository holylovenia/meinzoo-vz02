#ifndef ROAD_ENTRANCE_H
#define ROAD_ENTRANCE_H

#include <string>

/** @class RoadEntrance
  * Kelas RoadEntrance mendefinisikan atribut untuk road entrance.
  */
class RoadEntrance {
  public:
    /** @brief Constructor
      * Mendefinisikan road entrance.
      * @param accessible Nilai true/false apakah dapat diakses.
      */
    RoadEntrance(bool accessible);
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
    const bool def_road_entrance;
};

#endif