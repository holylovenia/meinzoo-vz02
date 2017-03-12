#include "barracuda.h"

Barracuda::Barracuda(int _weight) : defID(15), defRatioMeat(60), defRatioPlant(0), defLimbCount(0), defSkinType("Scale"), defEatMeat(true), defEatPlant(false) {
	//Barracuda
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

void Barracuda::Interact() {
	std::cout << "The barracuda completely ignores you" << std::endl;
}

void Barracuda::Move(int movement) {
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

int Barracuda::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Barracuda::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Barracuda::IsLandAnimal() {
	return(isLandAnimal);
}

bool Barracuda::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Barracuda::IsAirAnimal() {
	return(isAirAnimal);
}

bool Barracuda::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Barracuda::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Barracuda::isOmnivore() {
	return (eatMeat && eatPlant);
}

void Barracuda::setBehavior() {
	isWild = false;
}

// Setter
void Barracuda::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Barracuda::getX() const {
	return Location.getX();
}
int Barracuda::getY() const {
	return Location.getY();
}