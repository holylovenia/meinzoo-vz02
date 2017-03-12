#include "crocodile.h"

Crocodile::Crocodile(int _weight) : defID(8), defRatioMeat(60), defRatioPlant(0) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = true;
	isAirAnimal = false;
	weight = _weight;
}

void Crocodile::Interact() {
	std::cout << "The crocodile is laying still on a slab of rock" << std::endl;
}