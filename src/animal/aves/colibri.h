#ifndef COLIBRI_H
#define COLIBRI_H

#include <string>
#include <iostream>

class Colibri {
	public :
		Colibri(int _weight);
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

		//behaviortame
		void setBehavior();
		//point setter
		void setX(int _x);
		void setY(int _y);
		//point getter
		int getX() const;
		int getY() const;
		//behavior
		bool getBehavior();
	private:
		//point
		unsigned int x;
		unsigned int y;
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