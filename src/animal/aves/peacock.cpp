#include "peacock.h"

Peacock::Peacock(int _x, int _y, int _weight) : defID(20), defRatioMeat(20), defRatioPlant(40), defLimbCount(2), defSkinType("Feather"), defEatMeat(true), defEatPlant(false) {
	//peacock
	ID = defID;
	Location.setX(_x);
	Location.setY(_y);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
	//herbivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Peacock::Interact() {
	std::cout << "The peacock is showing off its beautiful feather" << std::endl;
}

void Peacock::Move(int movement) {
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

int Peacock::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Peacock::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Peacock::IsLandAnimal() {
	return(isLandAnimal);
}

bool Peacock::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Peacock::IsAirAnimal() {
	return(isAirAnimal);
}

bool Peacock::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Peacock::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Peacock::isOmnivore() {
	return (eatMeat && eatPlant);
}

void Peacock::setBehavior() {
	isWild = false;
}

// Setter
void Peacock::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Peacock::getX() const {
	return Location.getX();
}
int Peacock::getY() const {
	return Location.getY();
}