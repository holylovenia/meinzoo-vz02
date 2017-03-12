// File: park.cpp


#include "park.h"


Park::Park(int _x, int _y, bool _isAccessible, std::string _name): Facility(_x, _y, _isAccessible), defFacilityType("Park")
{
	name = _name;
	facilityType = defFacilityType;
}

Park::Park(const Park& P): Facility(P.Location.getX(), P.Location.getY(), P.isAccessible), defFacilityType("Park")
{
	name = P.name;
	facilityType = P.facilityType;
}

Park& Park::operator=(const Park& P)
{
	name = P.name;
	facilityType = P.facilityType;
	Location.setX(P.Location.getX());
	Location.setY(P.Location.getY());
	isAccessible = P.isAccessible;
	return(*this);
}

std::string Park::getParkName()
{
	return(name);
}