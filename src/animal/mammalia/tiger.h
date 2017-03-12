#ifndef TIGER_H
#define TIGER_H

#include "mammalia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

class Tiger: public Mammalia, public Carnivora, public BehaviorTame {
	public:
		Tiger(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif