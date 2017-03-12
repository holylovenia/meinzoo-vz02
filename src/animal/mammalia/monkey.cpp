#include "monkey.h"

Monkey::Monkey(int _x, int _y, int _weight) : defID(5), defRatioMeat(10), defRatioPlant(40), defLimbCount(4), defSkinType("Hairy"), defEatMeat(true), defEatPlant(true)  {
	//monkey
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

void Monkey::Interact() {
	std::cout << "The monkey is peeling a banana" << std::endl;
}

void Monkey::Move(int movement) {
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

int Monkey::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Monkey::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Monkey::IsLandAnimal() {
	return(isLandAnimal);
}

bool Monkey::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Monkey::IsAirAnimal() {
	return(isAirAnimal);
}

bool Monkey::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Monkey::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Monkey::isOmnivore() {
	return (eatMeat && eatPlant);
}

// Setter
void Monkey::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Monkey::getX() const {
	return Location.getX();
}
int Monkey::getY() const {
	return Location.getY();
}