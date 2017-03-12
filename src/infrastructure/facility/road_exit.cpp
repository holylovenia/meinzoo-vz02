#include "road_exit.h"

RoadExit::RoadExit(bool Accessible): defFacilityType("Road"), defRoad(false), defRoadExit(true) {
	isAccessible = Accessible;
	facilityType = defFacilityType;
	isExit = defRoad;
	isEntrance = defRoadExit;
}

bool RoadExit::IsEntrance() {
	return(isEntrance);
}

bool RoadExit::IsExit() {
	return(isExit);
}