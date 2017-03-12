#include "colibri.h"

Colibri::Colibri(int _x, int _y, int _weight) : defID(19), defRatioMeat(0), defRatioPlant(60), defLimbCount(2), defSkinType("Feather"), defEatMeat(false), defEatPlant(true) {
	//colibri
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

void Colibri::Interact() {
	std::cout << "The colibri is looking at you, apparently confused" << std::endl;
}

void Colibri::Move(int movement) {
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

int Colibri::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Colibri::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Colibri::IsLandAnimal() {
	return(isLandAnimal);
}

bool Colibri::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Colibri::IsAirAnimal() {
	return(isAirAnimal);
}

bool Colibri::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Colibri::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Colibri::isOmnivore() {
	return (eatMeat && eatPlant);
}

void Colibri::setBehavior() {
	isWild = false;
}

// Setter
void Colibri::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Colibri::getX() const {
	return Location.getX();
}
int Colibri::getY() const {
	return Location.getY();
}