#include "clownfish.h"

Clownfish::Clownfish(int _weight) : defID(14), defRatioMeat(30), defRatioPlant(40) {
    ID = defID;
    ratioMeat = defRatioMeat;
    ratioPlant = defRatioPlant;
    isLandAnimal = false;
    isWaterAnimal = true;
    isAirAnimal = false;
    weight = _weight;
}

void Clownfish::Interact() {
    std::cout << "The clownfish is not as funny as its name implies.." << std::endl;
}