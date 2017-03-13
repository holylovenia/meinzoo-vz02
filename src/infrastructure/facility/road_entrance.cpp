#include "road_entrance.h"

RoadEntrance::RoadEntrance(bool accessible): def_facility_type("Road"),
                                             def_road(false),
                                             def_road_entrance(true) {
  is_accessible = accessible;
  facility_type = def_facility_type;
  is_exit = def_road;
  is_entrance = def_road_entrance;
}
bool RoadEntrance::IsEntrance() {
  return(is_entrance);
}
bool RoadEntrance::IsExit() {
  return(is_exit);
}
char RoadEntrance::Render() {
  return '>';
}