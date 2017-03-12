#include "wild_bunny.h"

WildBunny::WildBunny(int _x, int _y, int _weight) : defID(0), defRatioMeat(0), defRatioPlant(90), defLimbCount(4), defSkinType("Hairy"), defEatMeat(false), defEatPlant(true) {
	//wildbunny
	ID = defID;
	Location.setX(_x);
	Location.setY(_y);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
	isWild = true;
	//herbivora
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	AnimalFood::AddTotalPlant(ratioPlant * weight / 100);
	for (int id = defID; id <= 21; id++) {
		addEnemy(id);
	}
}

void WildBunny::Interact() {
	std::cout << "The wild bunny is looking at you with murderous intent" << std::endl;
}

void WildBunny::Move(int movement) {
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

int WildBunny::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int WildBunny::getReqPlant() {
	return(ratioPlant * weight / 100);
}

bool WildBunny::IsLandAnimal() {
	return(isLandAnimal);
}

bool WildBunny::IsWaterAnimal() {
	return(isWaterAnimal);
}

bool WildBunny::IsAirAnimal() {
	return(isAirAnimal);
}

bool WildBunny::getBehavior() {
	return (isWild);
}

Point WildBunny::getPosition() {
	return (Location);
}

bool WildBunny::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool WildBunny::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool WildBunny::isOmnivore() {
	return (eatMeat && eatPlant);
}

// Setter
void WildBunny::setLocation(int _x, int _y) {
	Location.setX(_x);
	Location.setY(_y);
}

// Getter
int WildBunny::getX() const {
	return Location.getX();
}
int WildBunny::getY() const {
	return Location.getY();
}