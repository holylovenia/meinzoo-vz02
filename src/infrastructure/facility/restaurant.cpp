// file : restaurant.h

#include "restaurant.h"

// ctor with parameter
Restaurant::Restaurant(bool accessible, std::string _name):
def_facility_type("Restaurant") {
  name = _name;
  is_accessible = accessible;
  facility_type = def_facility_type;
}
// cctor
Restaurant::Restaurant(const Restaurant& R): def_facility_type("Restaurant") {
  name = R.name;
  is_accessible = R.is_accessible;
  facility_type = R.facility_type;
}
// operator=
Restaurant& Restaurant::operator=(const Restaurant& R) {
  name = R.name;
  is_accessible = R.is_accessible;
  facility_type = R.facility_type;
  return (*this);
}
// get Restaurant's name
std::string Restaurant::GetRestaurantName() {
  return (name);
}