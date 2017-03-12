#include "barracuda.h"

Barracuda::Barracuda(int _weight) : defID(15), defRatioMeat(60), defRatioPlant(0) {
    ID = defID;
    ratioMeat = defRatioMeat;
    ratioPlant = defRatioPlant;
    isLandAnimal = false;
    isWaterAnimal = true;
    isAirAnimal = false;
    weight = _weight;
}

void Barracuda::Interact() {
    std::cout << "The barracuda completely ignores you" << std::endl;
}