#ifndef ZEBRA_H
#define ZEBRA_H

#include "mammalia.h"
#include "herbivora.h"
#include "behavior_tame.h"

class Zebra: public Mammalia, public Herbivora, public BehaviorTame
{
	public:
		Zebra(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif