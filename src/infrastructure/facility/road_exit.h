#ifndef ROAD_EXIT_H
#define ROAD_EXIT_H

#include <string>

/** @class RoadExit
  * Kelas RoadExit mendefinisikan atribut untuk road exit.
  */
class RoadExit {
  public:
    /** @brief Constructor
      * Mendefinisikan road exit.
      * @param Accesible Nilai true/false apakah dapat diakses.
      */
    RoadExit(bool accessible);
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
    const bool def_road_exit;
};

#endif