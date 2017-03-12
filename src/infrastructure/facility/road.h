#ifndef ROAD_H
#define ROAD_H

#include <string>

class Road {
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
		std::string facilityType;
		bool isAccessible;
		const std::string defFacilityType;
		const bool defRoad;
};


#endif
