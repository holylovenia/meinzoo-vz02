#ifndef IGUANA_H
#define IGUANA_H

#include "reptilia.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

class Iguana : public Reptilia, public Omnivora, public BehaviorTame {
	public:
		Iguana(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif