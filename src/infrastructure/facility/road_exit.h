#ifndef ROAD_EXIT_H
#define ROAD_EXIT_H

#include <string>

class RoadExit {
    // ctor
    RoadExit(bool accessible);

    bool IsEntrance();
    bool IsExit();

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