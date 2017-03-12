#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H

#include "habitat.h"

class AirHabitat : public Habitat {
	public:
		// ctor
		AirHabitat(int _x, int _y, bool isAccessible);
		
	private:
		const char defType;

};

#endif
