#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "facility.h"

class Restaurant: public Facility {
	public:
		// ctor with parameter
		Restaurant(int _x, int _y, bool _isAccessible, std::string _name);
		// cctor
		Restaurant(const Restaurant& R);
		// operator=
		Restaurant& operator=(const Restaurant& R);
		// dtor
		std::string getRestaurantName();

	protected:
		std::string name;
		const std::string defFacilityType;
};


#endif
