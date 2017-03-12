#ifndef CHAMELEON_H
#define CHAMELEON_H

#include "reptilia.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

class Chameleon : public Reptilia, public Omnivora, public BehaviorTame {
	public:
		Chameleon(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif