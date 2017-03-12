#include "colibri.h"

Colibri::Colibri(int _weight) : defID(19), defRatioMeat(0), defRatioPlant(60) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
}

void Colibri::Interact() {
	std::cout << "The colibri is looking at you, apparently confused" << std::endl;
}