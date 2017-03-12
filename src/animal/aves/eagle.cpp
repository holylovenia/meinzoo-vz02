#include "eagle.h"

Eagle::Eagle(int _weight) : defID(18), defRatioMeat(60), defRatioPlant(0) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
}

void Eagle::Interact() {
	std::cout << "The eagle is roosting majestically on a tree" << std::endl;
}