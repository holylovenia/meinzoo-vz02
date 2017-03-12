#ifndef WILD_BUNNY_H
#define WILD_BUNNY_H

#include <set>
#include <string>
#include <iostream>
#include "../animalfood.h"
#include "../../misc/point.h"

class WildBunny {
	public :
		WildBunny(int _x, int _y, int _weight);
		//animal
		void Interact();
		void Move(int movement);
		bool IsLandAnimal();
		bool IsWaterAnimal();
		bool IsAirAnimal();
		//animaldiet
		bool isHerbivore();
		bool isCarnivore();
		bool isOmnivore();

		int getReqMeat();
		int getReqPlant();
		Point getPosition();

		//behaviorwild
		void addEnemy(int x);
		void removeEnemy(int x);
		bool isEnemy(int x);

		//point setter
		void setLocation(int _x, int _y);
		//point getter
		int getX() const;
		int getY() const;
		//behavior
		bool getBehavior();
	private:
		std::set<int> enemy;
		//point
		Point Location;
		//animal
		int ID;
		int limbCount;
		std::string skinType;
		bool isLandAnimal;
		bool isWaterAnimal;
		bool isAirAnimal;
		//animaldiet
		int weight;
		bool eatMeat;
		bool eatPlant;
		int ratioMeat;
		int ratioPlant;
		//herbivora
		const bool defEatMeat;
		const bool defEatPlant;
		//aves
		const int defLimbCount;
		const std::string defSkinType;
		//colibri
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
        //behavior
        bool isWild;
};

#endif