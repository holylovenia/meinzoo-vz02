#include "wolf.h"

Wolf::Wolf(int _x, int _y, int _weight) : defID(1), defRatioMeat(50), defRatioPlant(0), defLimbCount(4), defSkinType("Hairy"), defEatMeat(true), defEatPlant(true)  {
	//wolf
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

void Wolf::Interact() {
	std::cout << "The wolf is howling" << std::endl;
}

void Wolf::Move(int movement) {
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

int Wolf::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Wolf::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Wolf::IsLandAnimal() {
	return(isLandAnimal);
}

bool Wolf::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Wolf::IsAirAnimal() {
	return(isAirAnimal);
}

bool Wolf::getBehavior() {
	return (isWild);
}

Point Wolf::getPosition() {
	return (Location);
}

bool Wolf::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Wolf::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Wolf::isOmnivore() {
	return (eatMeat && eatPlant);
}

bool Wolf::isEnemy(int x) {
	return (false);
}

int Wolf::getID() {
	return (ID);
}

// Setter
void Wolf::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Wolf::getX() const {
	return Location.getX();
}
int Wolf::getY() const {
	return Location.getY();
}