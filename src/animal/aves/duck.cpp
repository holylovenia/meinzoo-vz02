#include "duck.h"

Duck::Duck(int _x, int _y, int _weight) : defID(16), defRatioMeat(30), defRatioPlant(30), defLimbCount(2), defSkinType("Feather"), defEatMeat(true), defEatPlant(true) {
	//duck
	ID = defID;
	Location.setX(_x);
	Location.setY(_y);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = true;
	isAirAnimal = true;
	weight = _weight;
	isWild = false;
	//herbivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Duck::Interact() {
	std::cout << "The duck just quacked loudly" << std::endl;
}

void Duck::Move(int movement) {
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

bool Duck::getBehavior() {
	return(isWild);
}

int Duck::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Duck::getReqPlant() {
	return(ratioPlant * weight / 100);
}

Point Duck::getPosition() {
	return Location;
}

bool Duck::IsLandAnimal() {
	return(isLandAnimal);
}

bool Duck::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Duck::IsAirAnimal() {
	return(isAirAnimal);
}

bool Duck::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Duck::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Duck::isOmnivore() {
	return (eatMeat && eatPlant);
}

// Setter
void Duck::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Duck::getX() const {
	return Location.getX();
}
int Duck::getY() const {
	return Location.getY();
}