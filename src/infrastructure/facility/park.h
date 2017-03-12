#ifndef PARK_H
#define PARK_H

#include "facility.h"

class Park: public Facility {
	public:
		// ctor with parameter
		Park(int _x, int _y, bool _isAccessible, std::string _name);
		// cctor
		Park(const Park& P);
		// operator=
		Park& operator=(const Park& P);
		// others
		std::string getParkName();

	private:
		std::string name;
		const std::string defFacilityType;
};


#endif
