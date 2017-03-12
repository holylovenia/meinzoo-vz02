#include "lion.h"

Lion::Lion(int _x, int _y, int _weight) : defID(2), defRatioMeat(60), defRatioPlant(0), defLimbCount(4), defSkinType("Hairy"), defEatMeat(true), defEatPlant(false)  {
	//lion
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
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Lion::Interact() {
	std::cout << "The lion is roaring" << std::endl;
}

void Lion::Move(int movement) {
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

int Lion::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Lion::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Lion::IsLandAnimal() {
	return(isLandAnimal);
}

bool Lion::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Lion::IsAirAnimal() {
	return(isAirAnimal);
}

bool Lion::getBehavior() {
	return (isWild);
}

Point Lion::getPosition() {
	return (Location);
}

bool Lion::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Lion::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Lion::isOmnivore() {
	return (eatMeat && eatPlant);
}

// Setter
void Lion::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Lion::getX() const {
	return Location.getX();
}
int Lion::getY() const {
	return Location.getY();
}