#include "komodo.h"

Komodo::Komodo(int _weight) : defID(10), defRatioMeat(70), defRatioPlant(0) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Komodo::Interact() {
	std::cout << "The komodo is looking at you intensely" << std::endl;
}