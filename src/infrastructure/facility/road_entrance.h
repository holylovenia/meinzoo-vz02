#ifndef ROAD_ENTRANCE_H
#define ROAD_ENTRANCE_H

#include <string>

class RoadEntrance {
	public:
		// ctor
		RoadEntrance(bool Accessible);

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
		const bool defRoadEntrance;
};


#endif
