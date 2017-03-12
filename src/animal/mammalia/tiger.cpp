#include "tiger.h"

Tiger::Tiger(int _x, int _y, int _weight) : defID(3), defRatioMeat(50), defRatioPlant(0), defLimbCount(4), defSkinType("Hairy"), defEatMeat(true), defEatPlant(false)  {
	//tiger
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
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Tiger::Interact() {
	std::cout << "The tiger is graciously lying on the patch of grass" << std::endl;
}

void Tiger::Move(int movement) {
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

int Tiger::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Tiger::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Tiger::IsLandAnimal() {
	return(isLandAnimal);
}

bool Tiger::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Tiger::IsAirAnimal() {
	return(isAirAnimal);
}

bool Tiger::getBehavior() {
	return (isWild);
}

Point Tiger::getPosition() {
	return (Location);
}

bool Tiger::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Tiger::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Tiger::isOmnivore() {
	return (eatMeat && eatPlant);
}

bool Tiger::isEnemy() {
	return (false);
}

int Tiger::getID() {
	return (ID);
}

// Setter
void Tiger::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Tiger::getX() const {
	return Location.getX();
}
int Tiger::getY() const {
	return Location.getY();
}