// File: water_habitat.cpp


#include "water_habitat.h"


WaterHabitat::WaterHabitat(int _x, int _y, bool isAccessible): Habitat(_x, _y, isAccessible), defType('W')
{
	type = defType;
}