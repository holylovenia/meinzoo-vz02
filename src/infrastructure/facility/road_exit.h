#ifndef ROAD_EXIT_H
#define ROAD_EXIT_H

#include "road.h"

class RoadExit: public Road {
	public:
		// ctor
		RoadExit(bool Accessible);

	private:
		const bool defRoadExit;
};


#endif
