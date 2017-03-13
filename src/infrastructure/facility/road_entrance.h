#ifndef ROAD_ENTRANCE_H
#define ROAD_ENTRANCE_H

#include <string>

class RoadEntrance {
  public:
    RoadEntrance(bool accessible);
    bool IsEntrance();
    bool IsExit();
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