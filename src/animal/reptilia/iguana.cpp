#include "iguana.h"

Iguana::Iguana(int _weight) : defID(10), defRatioMeat(20), defRatioPlant(40) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Iguana::Interact() {
	std::cout << "The iguana is calmly sleeping on a tree." << std::endl;
}