// File: air_habitat.cpp


#include "air_habitat.h"


AirHabitat::AirHabitat(int _x, int _y, bool isAccessible): Habitat(_x, _y, isAccessible), defType('A')
{
	type = defType;
}