#include "road.h"


Road::Road(bool Accessible): Facility(Accessible), defFacilityType("Road"), defRoad(false)
{
	isEntrance = defRoad;
	isExit = defRoad;
}

bool Road::IsEntrance() {
	return(isEntrance);
}

bool Road::IsExit() {
	return(isExit);
}