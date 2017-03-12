// file : restaurant.h

#include "restaurant.h"

// ctor with parameter
Restaurant::Restaurant(int _x, int _y, bool _isAccessible, std::string _name) : Facility(_x, _y, _isAccessible), defFacilityType("Restaurant")
{
	name = _name;
	facilityType = defFacilityType;
}
// cctor
Restaurant::Restaurant(const Restaurant& R) : Facility(_x, _y, _isAccessible), defFacilityType("Restaurant")
{
	name = R.name;
	facilityType = R.FacilityType;
}
// operator=
Restaurant& Restaurant::operator=(const Restaurant& R)
{
	name = R.name;
	facilityType = R.facilityType;
	Location.setX(R.Location.getX());
	Location.setY(R.Location.getY());
	isAccessible = R.isAccessible;
	return *this;
}
// get Restaurant's name
std::string Restaurant::getRestaurantName();
{
	return name;
}