#include "zebra.h"

Zebra::Zebra(int _x, int _y, int _weight) : defID(4), defRatioMeat(0), defRatioPlant(45), defLimbCount(4), defSkinType("Hairy"), defEatMeat(false), defEatPlant(true)  {
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
	//omnivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Zebra::Interact()
{
	std::cout << "The zebra is running at the grass field" << std::endl;
}

void Zebra::Move(int movement) {
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

int Zebra::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Zebra::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Zebra::IsLandAnimal() {
	return(isLandAnimal);
}

bool Zebra::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Zebra::IsAirAnimal() {
	return(isAirAnimal);
}

bool Zebra::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Zebra::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Zebra::isOmnivore() {
	return (eatMeat && eatPlant);
}

void Zebra::setBehavior() {
	isWild = false;
}

// Setter
void Zebra::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Zebra::getX() const {
	return Location.getX();
}
int Zebra::getY() const {
	return Location.getY();
}