#include "road_entrance.h"

RoadEntrance::RoadEntrance(bool Accessible): defFacilityType("Road"), defRoad(false), defRoadEntrance(true) {
	isAccessible = Accessible;
	facilityType = defFacilityType;
	isExit = defRoad;
	isEntrance = defRoadEntrance;
}

bool RoadEntrance::IsEntrance() {
	return(isEntrance);
}

bool RoadEntrance::IsExit() {
	return(isExit);
}