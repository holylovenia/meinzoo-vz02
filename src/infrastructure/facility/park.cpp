// File: park.cpp

#include "park.h"

Park::Park(bool accessible, std::string _name): def_facility_type("Park") {
  name = _name;
  is_accessible = accessible;
  facility_type = def_facility_type;
}

Park::Park(const Park& P): def_facility_type("Park") {
  name = P.name;
  facility_type = P.facility_type;
  is_accessible = P.is_accessible;
}

Park& Park::operator=(const Park& P) {
  name = P.name;
  facility_type = P.facility_type;
  is_accessible = P.is_accessible;
  return (*this);
}

std::string Park::GetParkName() {
  return (name);
}