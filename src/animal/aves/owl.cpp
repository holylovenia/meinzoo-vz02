#include "owl.h"

Owl::Owl(int _weight) : defID(17), defRatioMeat(60), defRatioPlant(0) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
}

void Owl::Interact() {
	std::cout << "The owl is hooting randomly" << std::endl;
}