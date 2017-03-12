#include "chameleon.h"

Chameleon::Chameleon(int _x, int _y, int _weight) : defID(10), defRatioMeat(20), defRatioPlant(50), defLimbCount(4), defSkinType("Scute"), defEatMeat(true), defEatPlant(true) {
	//Chameleon
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
	AnimalFood::AddTotalMeat(ratioMeat * weight / 100);
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Chameleon::Interact() {
	std::cout << "The chameleon is almost perfectly disguised with the leaves around him" << std::endl;
}

void Chameleon::Move(int movement) {
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

int Chameleon::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Chameleon::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Chameleon::IsLandAnimal() {
	return(isLandAnimal);
}

bool Chameleon::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Chameleon::IsAirAnimal() {
	return(isAirAnimal);
}

bool Chameleon::getBehavior() {
	return(isWild);
}

Point Chameleon::getPosition() {
	return(Location);
}

bool Chameleon::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Chameleon::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Chameleon::isOmnivore() {
	return (eatMeat && eatPlant);
}

bool Chameleon::isEnemy(int x) {
	return (false);
}

int Chameleon::getID() {
	return (ID);
}

// Setter
void Chameleon::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Chameleon::getX() const {
	return Location.getX();
}
int Chameleon::getY() const {
	return Location.getY();
}