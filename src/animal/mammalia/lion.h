#ifndef LION_H
#define LION_H

#include "mammalia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

class Lion: public Mammalia, public Carnivora, public BehaviorTame {
	public:
		Lion(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif