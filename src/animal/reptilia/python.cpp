#include "python.h"

Python::Python(int _weight) : defID(9), defRatioMeat(40), defRatioPlant(0) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	limbCount = 0;
	weight = _weight;
}

void Python::Interact() {
	std::cout << "The python is slithering across the ground" << std::endl;
}