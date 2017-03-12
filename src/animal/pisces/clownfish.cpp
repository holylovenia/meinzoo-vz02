#include "clownfish.h"

Clownfish::Clownfish(int _x, int _y, int _weight) : defID(14), defRatioMeat(30), defRatioPlant(40), defLimbCount(0), defSkinType("Scale"), defEatMeat(true), defEatPlant(true) {
	//Clownfish
	ID = defID;
	Location.setX(_x);
	Location.setY(_y);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = false;
	isWaterAnimal = true;
	isAirAnimal = false;
	weight = _weight;
	isWild = false;
	//omnivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalMeat(ratioMeat * weight / 100);
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
}

void Clownfish::Interact() {
	std::cout << "The clownfish is not as funny as its name implies.." << std::endl;
}

void Clownfish::Move(int movement) {
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

int Clownfish::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Clownfish::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Clownfish::IsLandAnimal() {
	return(isLandAnimal);
}

bool Clownfish::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Clownfish::IsAirAnimal() {
	return(isAirAnimal);
}

bool Clownfish::getBehavior() {
	return(isWild);
}

Point Clownfish::getPosition() {
	return(Location);
}

bool Clownfish::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Clownfish::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Clownfish::isOmnivore() {
	return (eatMeat && eatPlant);
}

bool Clownfish::isEnemy(int x) {
	return (false);
}

int Clownfish::getID() {
	return (ID);
}

// Setter
void Clownfish::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Clownfish::getX() const {
	return Location.getX();
}
int Clownfish::getY() const {
	return Location.getY();
}