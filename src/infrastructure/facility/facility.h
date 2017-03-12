#ifndef FACILITY_H
#define FACILITY_H

#include <string>
#include "cell.h"

class Facility: public Cell {
	public:
		// ctor
		Facility(int _x, int _y, bool isAccessible);

	protected:
		std::string facilityType;
};

#endif
