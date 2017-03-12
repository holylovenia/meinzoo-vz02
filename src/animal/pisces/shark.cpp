#include "shark.h"

Shark::Shark(int _weight) : defID(13), defRatioMeat(70), defRatioPlant(0) {
    ID = defID;
    ratioMeat = defRatioMeat;
    ratioPlant = defRatioPlant;
    isLandAnimal = false;
    isWaterAnimal = true;
    isAirAnimal = false;
    weight = _weight;
}

void Shark::Interact() {
    std::cout << "The shark is staring at you menacingly as it swims by" << std::endl;
}