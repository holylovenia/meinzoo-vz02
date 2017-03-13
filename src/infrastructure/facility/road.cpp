#include "road.h"

Road::Road(bool accessible): def_facility_type("Road"), def_road(false) {
  is_accessible = accessible;
  facility_type = def_facility_type;
  is_entrance = def_road;
  is_exit = def_road;
}
bool Road::IsEntrance() {
  return(is_entrance);
}
bool Road::IsExit() {
  return(is_exit);
}