// LandCage.cpp

#include <ctime>
#include <random>
#include "land_cage.h"

LandCage::LandCage() {
	nbAnimal = 0;
}

void LandCage::AddPoint(const Point& p) {
	area.insert(p);
}

void LandCage::RemovePoint(const Point& p) {
	area.erase(p);
}

void LandCage::AddAnimal(Colibri& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable = true;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		}
		if (placeable) {
			colibri.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Duck& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			duck.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Eagle& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			eagle.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Peacock& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			peacock.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(WildColibri& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			wild_colibri.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Elephant& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			elephant.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Giraffe& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			giraffe.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Lion& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			lion.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Monkey& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			monkey.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Tiger& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			tiger.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Wolf& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			wolf.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Zebra& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			zebra.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(WildBunny& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			wild_bunny.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Chameleon& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			chameleon.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Crocodile& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			crocodile.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Iguana& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			iguana.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Komodo& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			komodo.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::AddAnimal(Python& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {	
		bool placeable;
		if (A.getBehavior()) {
			if ((colibri[0] != NULL) && (A.isEnemy(colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (duck[0] != NULL) && (A.isEnemy(duck[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (eagle[0] != NULL) && (A.isEnemy(eagle[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (peacock[0] != NULL) && (A.isEnemy(peacock[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_colibri[0] != NULL) && (A.isEnemy(wild_colibri[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (elephant[0] != NULL) && (A.isEnemy(elephant[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (giraffe[0] != NULL) && (A.isEnemy(giraffe[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (lion[0] != NULL) && (A.isEnemy(lion[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (monkey[0] != NULL) && (A.isEnemy(monkey[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (tiger[0] != NULL) && (A.isEnemy(tiger[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wolf[0] != NULL) && (A.isEnemy(wolf[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (zebra[0] != NULL) && (A.isEnemy(zebra[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (wild_bunny[0] != NULL) && (A.isEnemy(wild_bunny[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (chameleon[0] != NULL) && (A.isEnemy(chameleon[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (crocodile[0] != NULL) && (A.isEnemy(crocodile[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (iguana[0] != NULL) && (A.isEnemy(iguana[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (komodo[0] != NULL) && (A.isEnemy(komodo[0]->getID())))
			{
				placeable = false;
			}
			if ((placeable) && (python[0] != NULL) && (A.isEnemy(python[0]->getID())))
			{
				placeable = false;
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			python.push_back(&A);
			nbAnimal++;
		}
	}
}

void LandCage::MoveAnimal() {
	srand(time(NULL));
	i = rand() % TOTAL_LAND_ANIMAL;

	unsigned int seed = time(NULL);
	subtract_with_carry_engine<unsigned,24,10,24> generator (seed);	
	
	if (i == 0) {
		for (auto iter = animal.begin(); iter < animal.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 1) {
		for (auto iter = colibri.begin(); iter < colibri.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 2) {
		for (auto iter = duck.begin(); iter < duck.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 3) {
		for (auto iter = eagle.begin(); iter < eagle.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 4) {
		for (auto iter = peacock.begin(); iter < peacock.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 5) {
		for (auto iter = wild_colibri.begin(); iter < wild_colibri.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 6) {
		for (auto iter = elephant.begin(); iter < elephant.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 7) {
		for (auto iter = giraffe.begin(); iter < giraffe.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 8) {
		for (auto iter = lion.begin(); iter < lion.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 9) {
		for (auto iter = monkey.begin(); iter < monkey.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 10) {
		for (auto iter = tiger.begin(); iter < tiger.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 11) {
		for (auto iter = wolf.begin(); iter < wolf.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 12) {
		for (auto iter = zebra.begin(); iter < zebra.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 13) {
		for (auto iter = wild_bunny.begin(); iter < wild_bunny.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 14) {
		for (auto iter = chameleon.begin(); iter < chameleon.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 15) {
		for (auto iter = crocodile.begin(); iter < crocodile.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 16) {
		for (auto iter = iguana.begin(); iter < iguana.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else if (i == 17) {
		for (auto iter = komodo.begin(); iter < komodo.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	} else {
		for (auto iter = python.begin(); iter < python.end(); ++iter) {
			char movement = generator() % 4;
			bool movement_in_LandCage = false;
			int no_of_tries = 0;
			do {			
				(*iter)->Move(movement);
				
				movement_in_LandCage = area.find((*iter)->getPosition()) != area.end();
				if (!movement_in_LandCage) {
					movement = (movement + 2) % 4;
					(*iter)->Move(movement);
					movement = (movement + 3) % 4;
					no_of_tries++;
				}
			} while (!movement_in_LandCage && no_of_tries < 4);
		}
	}
}

vector<Point> LandCage::GetArea() {
	return vector<Point>(area.begin(), area.end());
}

// vector<Animal*> LandCage::GetAnimal() {
// 	return animal;
// }