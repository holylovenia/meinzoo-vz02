#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
class Restaurant {
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
		bool isAccessible;
		std::string facilityType;
		const std::string defFacilityType;
};


#endif
