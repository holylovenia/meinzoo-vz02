#include "giraffe.h"

Giraffe::Giraffe(int _weight) : defID(3), defRatioMeat(0), defRatioPlant(60) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Giraffe::Interact() {
	std::cout << "The giraffe is looking down to you, literally" << std::endl;
}