#include "duck.h"

Duck::Duck(int _weight) : defID(16), defRatioMeat(30), defRatioPlant(30) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = true;
	isAirAnimal = true;
	weight = _weight;
}

void Duck::Interact() {
	std::cout << "The duck just quacked loudly" << std::endl;
}