#include "owl.h"

Owl::Owl(int _x, int _y, int _weight) : defID(19), defRatioMeat(60), defRatioPlant(0), defLimbCount(2), defSkinType("Feather"), defEatMeat(true), defEatPlant(false) {
	//owl
	ID = defID;
	Location.setX(_x);
	Location.setY(_y);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
	isWild = false;
	//herbivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Owl::Interact() {
	std::cout << "The owl is hooting randomly" << std::endl;
}

void Owl::Move(int movement) {
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

int Owl::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Owl::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Owl::IsLandAnimal() {
	return(isLandAnimal);
}

bool Owl::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Owl::IsAirAnimal() {
	return(isAirAnimal);
}

bool Owl::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Owl::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Owl::isOmnivore() {
	return (eatMeat && eatPlant);
}

// Setter
void Owl::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Owl::getX() const {
	return Location.getX();
}
int Owl::getY() const {
	return Location.getY();
}