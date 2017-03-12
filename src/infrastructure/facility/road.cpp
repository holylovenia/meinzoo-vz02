#include "road.h"


Road::Road(bool Accessible): defFacilityType("Road"), defRoad(false)
{
	isAccessible = Accessible;
	facilityType = defFacilityType;
	isEntrance = defRoad;
	isExit = defRoad;
}

bool Road::IsEntrance() {
	return(isEntrance);
}

bool Road::IsExit() {
	return(isExit);
}