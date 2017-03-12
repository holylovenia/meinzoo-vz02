#ifndef ROAD_H
#define ROAD_H

#include "facility.h"

class Road: public Facility {
	public:
		// ctor
		Road(bool Accessible);
		// others
		bool IsEntrance();
		bool IsExit();

	protected:
		bool isEntrance;
		bool isExit;

	private:
		const std::string defFacilityType;
		const bool defRoad;
};


#endif
