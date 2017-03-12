#include "giraffe.h"

Giraffe::Giraffe(int _x, int _y, int _weight) : defID(3), defRatioMeat(0), defRatioPlant(60), defLimbCount(4), defSkinType("Hairy"), defEatMeat(false), defEatPlant(true) {
	//giraffe
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

void Giraffe::Interact() {
	std::cout << "The giraffe is looking down to you, literally" << std::endl;
}

void Giraffe::Move(int movement) {
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

int Giraffe::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Giraffe::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool Giraffe::IsLandAnimal() {
	return(isLandAnimal);
}

bool Giraffe::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool Giraffe::IsAirAnimal() {
	return(isAirAnimal);
}

bool Giraffe::getBehavior() {
	return (isWild);
}

Point Giraffe::getPosition() {
	return (Location);
}

bool Giraffe::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool Giraffe::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool Giraffe::isOmnivore() {
	return (eatMeat && eatPlant);
}

bool Giraffe::isEnemy() {
	return (false);
}

int Giraffe::getID() {
	return (ID);
}

// Setter
void Giraffe::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int Giraffe::getX() const {
	return Location.getX();
}
int Giraffe::getY() const {
	return Location.getY();
}