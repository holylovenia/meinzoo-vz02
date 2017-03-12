#include "python.h"

Python::Python(int _x, int _y, int _weight) : defID(9), defRatioMeat(40), defRatioPlant(0), defLimbCount(4), defSkinType("Scute"), defEatMeat(true), defEatPlant(false) {
	//Python
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
	//carnivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalMeat(ratioMeat * weight / 100);
}

void Python::Interact() {
	std::cout << "The python is slithering across the ground" << std::endl;
}

void Python::Move(int movement) {
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

int Python::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Python::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Python::IsLandAnimal() {
	return(isLandAnimal);
}

bool Python::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Python::IsAirAnimal() {
	return(isAirAnimal);
}

bool Python::getBehavior() {
	return(isWild);
}

Point Python::getPosition() {
	return(Location);
}

bool Python::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Python::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Python::isOmnivore() {
	return (eatMeat && eatPlant);
}

bool Python::isEnemy(int x) {
	return (false);
}

int Python::getID() {
	return (ID);
}

// Setter
void Python::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Python::getX() const {
	return Location.getX();
}
int Python::getY() const {
	return Location.getY();
}