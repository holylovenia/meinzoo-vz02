#include "iguana.h"

Iguana::Iguana(int _x, int _y, int _weight) : defID(10), defRatioMeat(20), defRatioPlant(40), defLimbCount(4), defSkinType("Scute"), defEatMeat(true), defEatPlant(true) {
	//Iguana
	ID = defID;
	Location.setX(_x);
	Location.setY(_y);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
	isWild = false;
	//omnivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalMeat(ratioMeat * weight / 100);
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Iguana::Interact() {
	std::cout << "The iguana is calmly sleeping on a tree" << std::endl;
}

void Iguana::Move(int movement) {
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

int Iguana::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Iguana::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Iguana::IsLandAnimal() {
	return(isLandAnimal);
}

bool Iguana::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Iguana::IsAirAnimal() {
	return(isAirAnimal);
}

bool Iguana::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Iguana::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Iguana::isOmnivore() {
	return (eatMeat && eatPlant);
}

// Setter
void Iguana::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Iguana::getX() const {
	return Location.getX();
}
int Iguana::getY() const {
	return Location.getY();
}