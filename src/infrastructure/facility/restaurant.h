#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "facility.h"

class Restaurant: public Facility {
	public:
		// ctor with parameter
		Restaurant(bool Accessible, std::string _name);
		// cctor
		Restaurant(const Restaurant& R);
		// operator=
		Restaurant& operator=(const Restaurant& R);
		// dtor
		std::string getRestaurantName();

	private:
		std::string name;
		const std::string defFacilityType;
};


#endif
