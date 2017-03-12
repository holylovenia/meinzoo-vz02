#include "eagle.h"

Eagle::Eagle(int _weight) : defID(18), defRatioMeat(60), defRatioPlant(0), defLimbCount(2), defSkinType("Feather"), defEatMeat(true), defEatPlant(false) {
	//eagle
	ID = defID;
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

void Eagle::Interact() {
	std::cout << "The eagle is roosting majestically on a tree" << std::endl;
}

void Eagle::Move(int movement) {
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

int Eagle::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Eagle::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Eagle::IsLandAnimal() {
	return(isLandAnimal);
}

bool Eagle::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Eagle::IsAirAnimal() {
	return(isAirAnimal);
}

bool Eagle::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Eagle::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Eagle::isOmnivore() {
	return (eatMeat && eatPlant);
}

void Eagle::setBehavior() {
	isWild = false;
}

// Setter
void Eagle::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Eagle::getX() const {
	return Location.getX();
}
int Eagle::getY() const {
	return Location.getY();
}