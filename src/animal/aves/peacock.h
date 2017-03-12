#ifndef PEACOCK_H
#define PEACOCK_H

#include "aves.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

class Peacock : public Aves, public Omnivora, public BehaviorTame {
	public :
		Peacock(int _weight);
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif