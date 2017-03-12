// File: park.cpp


#include "park.h"


Park::Park(bool Accessible, std::string _name): Facility(Accessible), defFacilityType("Park") {
	name = _name;
	facilityType = defFacilityType;
}

Park::Park(const Park& P): Facility(P.isAccessible), defFacilityType("Park") {
	name = P.name;
	facilityType = P.facilityType;
	isAccessible = P.isAccessible;
}

Park& Park::operator=(const Park& P) {
	name = P.name;
	facilityType = P.facilityType;
	isAccessible = P.isAccessible;
	return(*this);
}

std::string Park::getParkName() {
	return(name);
}