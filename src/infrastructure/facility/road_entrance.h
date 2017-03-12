#ifndef ROAD_ENTRANCE_H
#define ROAD_ENTRANCE_H

#include "road.h"

class RoadEntrance: public Road {
	public:
		// ctor
		RoadEntrance(bool Accessible);

	private:
		const bool defRoadEntrance;
};


#endif
