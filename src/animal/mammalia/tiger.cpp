#include "tiger.h"

Tiger::Tiger(int _weight) : defID(3), defRatioMeat(50), defRatioPlant(0) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Tiger::Interact() {
	std::cout << "The tiger is graciously lying on the patch of grass" << std::endl;
}