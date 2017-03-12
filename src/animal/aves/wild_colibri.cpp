#include "wild_colibri.h"

WildColibri::WildColibri(int _x, int _y, int _weight) : defID(21), defRatioMeat(0), defRatioPlant(60), defLimbCount(2), defSkinType("Feather"), defEatMeat(false), defEatPlant(true) {
	//wildcolibri
	ID = defID;
	Location.setX(_x);
	Location.setY(_y);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
	isWild = true;
	//herbivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
	addEnemy(2); // lion
	addEnemy(3); // tiger
	addEnemy(9); // python
	addEnemy(19); // colibri
}

void WildColibri::Interact() {
	std::cout << "The wild colibri is going to skewer your eyes" << std::endl;
}

void WildColibri::Move(int movement) {
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

int WildColibri::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int WildColibri::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool WildColibri::IsLandAnimal() {
	return(isLandAnimal);
}

bool WildColibri::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool WildColibri::IsAirAnimal() {
	return(isAirAnimal);
}

bool WildColibri::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool WildColibri::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool WildColibri::isOmnivore() {
	return (eatMeat && eatPlant);
}

void WildColibri::addEnemy(int x) {
	enemy.insert(x);
}

void WildColibri::removeEnemy(int x) {
	enemy.erase(x);
}

bool WildColibri::isEnemy(int x) {
	return(enemy.find(x) != enemy.end());
}

// Setter
void WildColibri::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int WildColibri::getX() const {
	return Location.getX();
}
int WildColibri::getY() const {
	return Location.getY();
}