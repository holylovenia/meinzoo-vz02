#include "road_exit.h"

RoadExit::RoadExit(bool accessible): def_facility_type("Road"), def_road(false), def_road_exit(true) {
  is_accessible = accessible;
  facility_type = def_facility_type;
  is_exit = def_road;
  is_entrance = def_road_exit;
}

bool RoadExit::IsEntrance() {
  return(is_entrance);
}

bool RoadExit::IsExit() {
  return(is_exit);
}