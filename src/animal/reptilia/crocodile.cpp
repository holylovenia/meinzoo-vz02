#include "crocodile.h"

Crocodile::Crocodile(int _x, int _y, int _weight) : defID(8), defRatioMeat(60), defRatioPlant(0), defLimbCount(4), defSkinType("Scute"), defEatMeat(true), defEatPlant(false) {
	//Crocodile
	ID = defID;
	Location.setX(_x);
	Location.setY(_y);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = true;
	isAirAnimal = false;
	weight = _weight;
	isWild = false;
	//carnivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalMeat(ratioMeat * weight / 100);
}

void Crocodile::Interact() {
	std::cout << "The crocodile is laying still on a slab of rock" << std::endl;
}

void Crocodile::Move(int movement) {
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

int Crocodile::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Crocodile::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Crocodile::IsLandAnimal() {
	return(isLandAnimal);
}

bool Crocodile::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Crocodile::IsAirAnimal() {
	return(isAirAnimal);
}

bool Crocodile::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Crocodile::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Crocodile::isOmnivore() {
	return (eatMeat && eatPlant);
}

// Setter
void Crocodile::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Crocodile::getX() const {
	return Location.getX();
}
int Crocodile::getY() const {
	return Location.getY();
}