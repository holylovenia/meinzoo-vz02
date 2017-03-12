// File: land_habitat.cpp


#include "land_habitat.h"


LandHabitat::LandHabitat(int _x, int _y, bool isAccessible): Habitat(_x, _y, isAccessible), defType('L')
{
	type = defType;
}