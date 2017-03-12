#include "elephant.h"

Elephant::Elephant(int _weight) : defID(3), defRatioMeat(0), defRatioPlant(80) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Elephant::Interact() {
	std::cout << "The elephant is playing with its own trunk" << std::endl;
}