#include "cell.h"

Cell::Cell(bool _accessible, std::string _type, 
                             std::string _name, 
                             bool _entrance, 
                             bool _exit) {
  if ((type == "AirHabitat") || (type == "LandHabitat") ||
    (type == "WaterHabitat")) {
    is_accessible = false;
  }
  else {
    is_accessible = _accessible;
  }
  type = _type;
  if ((type == "Road") || (type == "AirHabitat") ||
  (type == "LandHabitat") || (type == "WaterHabitat")) {
    name = "";
  }
  else {
    name = _name;
  }
  if (type == "Road") {
    is_entrance = _entrance; 
    is_exit = _exit;
  }
  else {
    is_entrance = false;
    is_exit = false;
  }
}
Cell::Cell(Cell& C) {
  is_accessible = C.is_accessible;
  type = C.type;
  name = C.name;
  is_entrance = C.is_entrance;
  is_exit = C.is_exit;
}
bool Cell::IsAccessible() const {
  return is_accessible;
}
std::string Cell::GetType() const {
  return type;
}
std::string GetName() const {
  return name;
}
bool IsEntrance() const {
  return is_entrance;
}
bool IsExit() const {
  return is_exit;
}