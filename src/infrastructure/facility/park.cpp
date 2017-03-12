// File: park.cpp

#include "park.h"

Park::Park(bool Accessible, std::string _name): defFacilityType("Park") {
	name = _name;
	isAccessible = Accessible;
	facilityType = defFacilityType;
}

Park::Park(const Park& P): defFacilityType("Park") {
	name = P.name;
	facilityType = P.facilityType;
	isAccessible = P.isAccessible;
}

Park& Park::operator=(const Park& P) {
	name = P.name;
	facilityType = P.facilityType;
	isAccessible = P.isAccessible;
	return (*this);
}

std::string Park::getParkName() {
	return (name);
}