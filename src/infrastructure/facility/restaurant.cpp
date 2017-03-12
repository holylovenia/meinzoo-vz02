// file : restaurant.h

#include "restaurant.h"

// ctor with parameter
Restaurant::Restaurant(bool Accessible, std::string _name) : defFacilityType("Restaurant") {
	name = _name;
	isAccessible = Accessible;
	facilityType = defFacilityType;
}
// cctor
Restaurant::Restaurant(const Restaurant& R): defFacilityType("Restaurant") {
	name = R.name;
	isAccessible = R.isAccessible;
	facilityType = R.facilityType;
}
// operator=
Restaurant& Restaurant::operator=(const Restaurant& R) {
	name = R.name;
	isAccessible = R.isAccessible;
	facilityType = R.facilityType;
	return (*this);
}
// get Restaurant's name
std::string Restaurant::getRestaurantName() {
	return (name);
}