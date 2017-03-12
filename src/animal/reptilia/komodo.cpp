#include "komodo.h"

Komodo::Komodo(int _weight) : defID(10), defRatioMeat(70), defRatioPlant(0), defLimbCount(4), defSkinType("Scute"), defEatMeat(true), defEatPlant(false) {
	//Komodo
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
	//carnivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalMeat(ratioMeat * weight / 100);
}

void Komodo::Interact() {
	std::cout << "The komodo is looking at you intensely" << std::endl;
}

void Komodo::Move(int movement) {
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

int Komodo::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Komodo::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Komodo::IsLandAnimal() {
	return(isLandAnimal);
}

bool Komodo::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Komodo::IsAirAnimal() {
	return(isAirAnimal);
}

bool Komodo::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Komodo::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Komodo::isOmnivore() {
	return (eatMeat && eatPlant);
}

void Komodo::setBehavior() {
	isWild = false;
}

// Setter
void Komodo::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Komodo::getX() const {
	return Location.getX();
}
int Komodo::getY() const {
	return Location.getY();
}