#include "peacock.h"

Peacock::Peacock(int _weight) : defID(20), defRatioMeat(20), defRatioPlant(40) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Peacock::Interact() {
	std::cout << "The peacock is showing off its beautiful feather" << std::endl;
}