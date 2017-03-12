#include "elephant.h"

Elephant::Elephant(int _x, int _y, int _weight) : defID(3), defRatioMeat(0), defRatioPlant(80), defLimbCount(4), defSkinType("Hairy"), defEatMeat(false), defEatPlant(true) {
	//elephant
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
	//herbivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Elephant::Interact() {
	std::cout << "The elephant is playing with its own trunk" << std::endl;
}

void Elephant::Move(int movement) {
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

int Elephant::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Elephant::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Elephant::IsLandAnimal() {
	return(isLandAnimal);
}

bool Elephant::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Elephant::IsAirAnimal() {
	return(isAirAnimal);
}

bool Elephant::getBehavior() {
	return (isWild);
}

Point Elephant::getPosition() {
	return (Location);
}

bool Elephant::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Elephant::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Elephant::isOmnivore() {
	return (eatMeat && eatPlant);
}

bool Elephant::isEnemy() {
	return (false);
}

int Elephant::getID() {
	return (ID);
}

// Setter
void Elephant::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Elephant::getX() const {
	return Location.getX();
}
int Elephant::getY() const {
	return Location.getY();
}