#include "clownfish.h"

Clownfish::Clownfish(int _weight) : defID(14), defRatioMeat(30), defRatioPlant(40), defLimbCount(0), defSkinType("Scale"), defEatMeat(true), defEatPlant(true) {
	//Clownfish
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = false;
	isWaterAnimal = true;
	isAirAnimal = false;
	weight = _weight;
	//herbivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Clownfish::Interact() {
	std::cout << "The clownfish is not as funny as its name implies.." << std::endl;
}

void Clownfish::Move(int movement) {
	if (movement == 1) // Move up
	{
		Location.setY(Location.getY()-1);
	}
	else if (movement == 2) // Move right
	{
		Location.setX(Location.getX()+1);
	}
	else if (movement == 3) // Move down
	{
		Location.setY(Location.getY()+1);
	}
	else // Move left
	{
		Location.setX(Location.getX()-1);
	}
}

int Clownfish::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Clownfish::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Clownfish::IsLandAnimal() {
	return(isLandAnimal);
}

bool Clownfish::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Clownfish::IsAirAnimal() {
	return(isAirAnimal);
}

bool Clownfish::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Clownfish::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Clownfish::isOmnivore() {
	return (eatMeat && eatPlant);
}

void Clownfish::setBehavior() {
	isWild = false;
}

// Setter
void Clownfish::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Clownfish::getX() const {
	return Location.getX();
}
int Clownfish::getY() const {
	return Location.getY();
}