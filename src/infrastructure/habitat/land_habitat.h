#ifndef LAND_HABITAT_H
#define LAND_HABITAT_H

#include "habitat.h"

class LandHabitat: public Habitat {
	public:
		// ctor
		LandHabitat(int _x, int _y, bool isAccessible);

	private:
		const char defType;
};

#endif