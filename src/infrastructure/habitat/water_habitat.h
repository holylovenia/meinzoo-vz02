#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H

#include "habitat.h"

class WaterHabitat: public Habitat {
	public:
		// ctor
		WaterHabitat(int _x, int _y, bool isAccessible);

	private:
		const char defType;
};

#endif