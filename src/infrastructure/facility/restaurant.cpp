// file : restaurant.h

#include "restaurant.h"

// ctor with parameter
Restaurant::Restaurant(bool Accessible, std::string _name): Facility(Accessible), defFacilityType("Restaurant") {
	name = _name;
	facilityType = defFacilityType;
}
// cctor
Restaurant::Restaurant(const Restaurant& R): Facility(R.isAccessible), defFacilityType("Restaurant") {
	name = R.name;
	facilityType = R.facilityType;
}
// operator=
Restaurant& Restaurant::operator=(const Restaurant& R) {
	name = R.name;
	facilityType = R.facilityType;
	isAccessible = R.isAccessible;
	return *this;
}
// get Restaurant's name
std::string Restaurant::getRestaurantName() {
	return name;
}