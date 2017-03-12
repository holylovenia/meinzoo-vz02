#ifndef ROAD_EXIT_H
#define ROAD_EXIT_H

#include <string>

class RoadExit {
		// ctor
		RoadExit(bool Accessible);

		bool IsEntrance();
		bool IsExit();

	protected:
		bool isEntrance;
		bool isExit;

	private:
		std::string facilityType;
		bool isAccessible;
		const std::string defFacilityType;
		const bool defRoad;
		const bool defRoadExit;
};


#endif
