#include "Shark.h"

Shark::Shark(int _weight) : defID(13), defRatioMeat(70), defRatioPlant(0), defLimbCount(0), defSkinType("Scale"), defEatMeat(true), defEatPlant(false) {
	//Shark
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = false;
	isWaterAnimal = true;
	isAirAnimal = false;
	weight = _weight;
	//carnivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalMeat(ratioMeat * weight / 100);
}

void Shark::Interact() {
	std::cout << "The shark is staring at you menacingly as it swims by" << std::endl;
}

void Shark::Move(int movement) {
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

int Shark::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Shark::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Shark::IsLandAnimal() {
	return(isLandAnimal);
}

bool Shark::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Shark::IsAirAnimal() {
	return(isAirAnimal);
}

bool Shark::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Shark::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Shark::isOmnivore() {
	return (eatMeat && eatPlant);
}

void Shark::setBehavior() {
	isWild = false;
}

// Setter
void Shark::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Shark::getX() const {
	return Location.getX();
}
int Shark::getY() const {
	return Location.getY();
}